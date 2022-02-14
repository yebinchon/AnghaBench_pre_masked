
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

void FUNC_2 (void) {
  FUNC_1 (VAR_1, "%s\n", VAR_0);
  FUNC_1 (VAR_1,
           "./filesys-xfs-engine [-v] [-i] [-x] [-O] [-p<port>] [-u<username>] [-b<backlog>] [-c<max-conn>] [-a<binlog-name>] [-l<log-name>] <extract-dir> <binlog>\n"
                   "\t-v\tincrease verbosity level\n"
                   "\t-H<heap-size>\tsets maximal zmalloc heap size, e.g. 4g\n"
                   "\t-1\tcompress snapshot faster\n"
                   "\t-9\tcompress snapshot better (default)\n"
                   "\t-O\tchange <extract-dir> permissions to 0700 for index loading & log replaying\n"
                   "\t-i\textract sources, create index and exit\n"
                   "\t-x\textract sources and exit\n"
                   "\n"
                   "\t\tOn startup, extract-dir should be empty or contain .binlogpos file.\n"
                   "\t\t.binlogpos is unlinked just before processing any filesys-xfs logevent.\n"
                   "\t\t.binlogpos file is created after exit (SIGTERM, SIGINT), after end of transaction (case no other logevents) or before creating snapshot.\n");
  FUNC_0 (2);
}
