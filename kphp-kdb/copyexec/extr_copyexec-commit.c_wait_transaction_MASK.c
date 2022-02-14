
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_copyexec_aux_transaction_cmd_wait {int transaction_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 struct lev_copyexec_aux_transaction_cmd_wait* FUNC_1 (int *,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2 (int VAR_3) {
  if (VAR_3 < 1) {
    FUNC_0 ("wait_transaction: X < 1\n");
    return -1;
  }
  if (VAR_3 >= VAR_2 + 1) {
    FUNC_0 ("wait_transaction: X >= current transaction id (X = %d, transaction_id = %d)\n", VAR_3, VAR_2 + 1);
    return -2;
  }
  struct lev_copyexec_aux_transaction_cmd_wait *VAR_4 = FUNC_1 (&VAR_1, VAR_0, sizeof (struct lev_copyexec_aux_transaction_cmd_wait));
  VAR_4->transaction_id = VAR_3;
  return 0;
}
