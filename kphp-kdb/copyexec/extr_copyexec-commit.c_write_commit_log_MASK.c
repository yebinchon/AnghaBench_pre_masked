
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 char* VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int,char*,...) ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static void FUNC_5 (void) {
  char VAR_10[VAR_5], VAR_11[VAR_0];
  FUNC_0 (FUNC_3 (VAR_10, VAR_5, "%s/.commit.log", VAR_8) < VAR_5);
  int VAR_12 = FUNC_2 (VAR_10, VAR_1 | VAR_3 | VAR_4 | VAR_2, 0640);
  int VAR_13 = FUNC_3 (VAR_11, VAR_0,
    "transaction_id\t%d\n"
    "committed_transaction_size\t%u\n"
    "aux_binlog_path\t%s\n",
    VAR_9,
    VAR_7,
    VAR_6);
  if (VAR_13 > VAR_0 - 1) {
    VAR_13 = VAR_0 - 1;
  }
  FUNC_4 (VAR_12, VAR_11, VAR_13);
  FUNC_1 (VAR_12);
}
