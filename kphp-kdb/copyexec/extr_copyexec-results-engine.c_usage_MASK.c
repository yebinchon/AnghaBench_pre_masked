
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;

void FUNC_2 (void) {
  FUNC_1 ("%s\n", VAR_0);
  FUNC_1 ("usage: [-v] [-p<port>] [-u<username>] [-M<max-memory-transactions>] [-b<backlog>] [-c<max-conn>] [-a<binlog-name>] [-l<log-name>] [-E] <binlog>\n"
   "\tCollects transactions results from copyexec-engine.\n"
    "\t-E\tcreate copyexec-results empty binlog\n"
    "\t-M<max-memory-transactions>\tlimit memory transaction number (default value is %d).\n"
    "\t-v\toutput statistical and debug information into stderr\n", VAR_1);
  FUNC_0 (2);
}
