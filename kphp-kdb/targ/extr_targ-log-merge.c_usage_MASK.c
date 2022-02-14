
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 char* VAR_0 ;
 int VAR_1 ;

void FUNC_1 (void) {
  FUNC_0 (VAR_1, "usage:\t%s [-v] [-u<username>] [-t<seconds-ago>] <old-binlog-file> [<new-binlog-file>] [<current-binlog-file>]\n"
    "\tAppends targeting records to another binlog. "
    "If <output-file> is specified, resulting binlog is appended to it.\n"
    "\t-h\tthis help screen\n"
    "\t-v\tverbose mode on\n"
    "\t-t<seconds-ago>\tcopy all records created after given threshold\n"
    "\t-u<username>\tassume identity of given user\n",
    VAR_0);
}
