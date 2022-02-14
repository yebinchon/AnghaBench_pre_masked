
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_copyexec_main_transaction_err {int transaction_id; char* error_msg_size; int data; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int,char*,int ) ;
 int VAR_0 ;

void FUNC_2 (struct lev_copyexec_main_transaction_err *VAR_1) {
  if (FUNC_0 ("LEV_COPYEXEC_MAIN_TRANSACTION_ERR")) {
    return;
  }
  FUNC_1 (VAR_0, "%d\t%.*s\n", VAR_1->transaction_id, VAR_1->error_msg_size, VAR_1->data);
}
