
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

void FUNC_2 (void) {
  FUNC_1 ("%s\n", VAR_0);
  FUNC_1 (
    "fix-rotateto [-u<username>] [-c<max-conn>] [-v] <src-binlog1> <src-binlog2> <dst-binlog1> \n"
    "\tTry to append ROTATE_TO logevent to <src-binlog1> using ROTATE_FROM logevent from <src-binlog2>.\n"
    "\tAfter running this tool always use check-binlog before deleting <src-binlog1>.\n"
    "\t[-v]\t\toutput statistical and debug information into stderr\n"
    "\t[-k]\t\tkeep <dst-binlog1> in case some error was occured.\n"
  );
  FUNC_0 (2);
}
