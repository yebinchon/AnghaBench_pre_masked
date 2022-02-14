
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 char* VAR_1 ;
 int VAR_2 ;

void FUNC_2 (void) {
  FUNC_1 (VAR_2, "usage: %s [-u<username>] [-v] [-l<log-name>] <new-binlog> <old-binlog> %s\n"
    "Appends <old-binlog> so it will be identical to <new-binlog>.\n"
    "<new-binlog> should be generated with dns-engine via -E option.\n"
    , VAR_1, VAR_0);
  FUNC_0 (2);
}
