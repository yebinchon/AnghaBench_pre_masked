
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

void FUNC_2 (void) {
  FUNC_1 ("%s\n", VAR_0);
  FUNC_1 ("usage: tlc [-v] [-h] <TL-schema-file> [program-file]\n"
      "\tTL compiler\n"
      "\t-v\toutput statistical and debug information into stderr\n"
      "\t-o<filename>\toutput schema's expressions with magic-numbers to given file\n"
      "\t-E\twhenever is possible output to stdout expressions\n"
      "\t-t\ttest mode - trying to unserialize TLC output\n");
  FUNC_0 (2);
}
