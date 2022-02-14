
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 char* VAR_0 ;

void FUNC_2 (void) {
  FUNC_1 ("usage: %s [-v] [-d] [-r] [-p<port>] [-u<username>] [-b<backlog>] [-c<max-conn>] [-l<log-name>] <kfs-binlog-name>\n"
   "\tPerforms generic RPC server/client operations\n"
   "\t-v\toutput statistical and debug information into stderr\n"
   "\t-r\tread-only binlog (don't log new events)\n",
   VAR_0 ? VAR_0 : "SOMETHING");
  FUNC_0(2);
}
