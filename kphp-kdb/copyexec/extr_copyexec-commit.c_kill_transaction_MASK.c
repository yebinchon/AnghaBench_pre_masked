
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_copyexec_aux_transaction_cmd_kill {int signal; int transaction_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 struct lev_copyexec_aux_transaction_cmd_kill* FUNC_1 (int *,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2 (int VAR_6, int VAR_7) {
  if (VAR_7 < 1) {
    FUNC_0 ("kill_transaction: X < 1\n");
    return -1;
  }
  if (VAR_7 >= VAR_5 + 1) {
    FUNC_0 ("kill_transaction: X >= current transaction id (X = %d, transaction_id = %d)\n", VAR_7, VAR_5 + 1);
    return -2;
  }
  if (VAR_6 != VAR_1 && VAR_6 != VAR_3 && VAR_6 != VAR_2) {
    FUNC_0 ("kill_transaction: Unknown signal: %d\n", VAR_6);
    return -3;
  }
  struct lev_copyexec_aux_transaction_cmd_kill *VAR_8 = FUNC_1 (&VAR_4, VAR_0, sizeof (struct lev_copyexec_aux_transaction_cmd_kill));
  VAR_8->signal = VAR_6;
  VAR_8->transaction_id = VAR_7;
  return 0;
}
