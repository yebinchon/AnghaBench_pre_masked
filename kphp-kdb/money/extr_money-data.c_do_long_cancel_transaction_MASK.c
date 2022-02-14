
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; scalar_t__ long_lock_cancel_timeout; int transaction_id; } ;
typedef TYPE_1__ transaction_t ;
struct lev_money_trans_cancel {int temp_id; int transaction_id; } ;
typedef scalar_t__ money_auth_code_t ;


 int VAR_0 ;
 struct lev_money_trans_cancel* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lev_money_trans_cancel*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (long long) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_6 (long long VAR_3, money_auth_code_t VAR_4) {
  money_auth_code_t VAR_5[2];
  transaction_t *VAR_6 = FUNC_5 (VAR_3);
  if (!VAR_6) {
    return 0;
  }
  if (VAR_6->status != VAR_2) {
    return -1;
  }
  FUNC_3 (VAR_6, VAR_5);
  if (VAR_4 != VAR_5[0] && (VAR_4 != VAR_5[1] || VAR_1 < VAR_6->long_lock_cancel_timeout)) {
    return -1;
  }
  struct lev_money_trans_cancel *VAR_7 = FUNC_0 (VAR_0, sizeof (struct lev_money_trans_cancel), -2);

  VAR_7->temp_id = (VAR_4 == VAR_5[0] ? -2 : -1);
  VAR_7->transaction_id = VAR_6->transaction_id;

  FUNC_1 (FUNC_2 (VAR_7) == 1);

  FUNC_4 (0);

  return 3;
}
