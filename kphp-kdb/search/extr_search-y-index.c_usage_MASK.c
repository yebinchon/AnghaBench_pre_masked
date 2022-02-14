
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,...) ;
 char* VAR_2 ;

void FUNC_2 (void) {
  FUNC_1 ("%s\n", VAR_0);
  FUNC_1 ("usage: %s [-v] [-t] [-A] [-u<username>] [-a<binlog-name>] [-l<log-name>] [-f] <huge-index-file>\n"
      "\tBuilds a search index from given binlog file.\n"
      "\t-t\tenable tags (*word @word #word are considered words)\n"
      "\t-A\tenable universal tag\n"
      "\t-S\tuse stemmer\n"
      "\t-U\tenable UTF-8 mode\n"
      "\t-D\tstore in item's date modification time (default: first creation time)\n"
      "\t-H<heap-size>\tsets maximal heap size, e.g. 4g\n"
      "\t-B<heap-size>\tsets maximal binlog size, e.g. 4g\n"
      "\t-P<max_pairs>\tsets maximal number of pairs\n"
      "\t-v\toutput statistical and debug information into stderr\n"
      "\t-O\tenable tag owner mode\n"
      "\t-x<left subtree size threshold>\tdefault (-x '%d')\n"
      , VAR_2, VAR_1
    );
  FUNC_0 (2);
}
