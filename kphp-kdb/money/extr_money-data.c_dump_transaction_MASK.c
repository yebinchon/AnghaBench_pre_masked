
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int parties; char* comment_len; int comment; TYPE_1__* T; int status; int temp_id; int declared_date; int created_at; int transaction_id; } ;
typedef TYPE_3__ transaction_t ;
struct TYPE_9__ {TYPE_2__* acc_type; int acc_id; } ;
typedef TYPE_4__ account_t ;
struct TYPE_7__ {int acc_type_id; int currency; } ;
struct TYPE_6__ {int acc_incr; TYPE_4__* tr_account; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1 (transaction_t *VAR_1) {
  int VAR_2, VAR_3;
  FUNC_0 (VAR_0, "*** DUMPING TRANSACTION %p ***\n", VAR_1);
  FUNC_0 (VAR_0, "trans_id=%d, date=%d, declared_date=%d, temp_id=%d, status=%d\n",
    VAR_1->transaction_id, VAR_1->created_at, VAR_1->declared_date, VAR_1->temp_id, VAR_1->status);
  VAR_3 = VAR_1->parties;
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
    account_t *VAR_4 = VAR_1->T[VAR_2].tr_account;
    FUNC_0 (VAR_0, "party #%d: acc=%d:%d incr=%d currency=%d\n", VAR_2+1, VAR_4 ? VAR_4->acc_type->acc_type_id : 0, VAR_4 ? VAR_4->acc_id : 0, VAR_1->T[VAR_2].acc_incr, VAR_4 ? VAR_4->acc_type->currency : 0);
  }
  if (VAR_1->comment_len) {
    FUNC_0 (VAR_0, "COMMENT: %.*s\n", VAR_1->comment_len, VAR_1->comment);
  }
}
