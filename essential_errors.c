#include "monty.h"

/**
 * usage_error - Prints to stderr a usage error message
 */

void usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	free_all_and_exit();
}

/**
 * open_error - Prints to stderr an open error message
 * @file_name: The name of the opcode file
 */

void open_error(char *file_name)
{
	fprintf(stderr, "Error: Can't open file %s\n", file_name);
	free_all_and_exit();
}

/**
 * malloc_error - Prints to stderr a malloc error message
 */

void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_all_and_exit();
}
