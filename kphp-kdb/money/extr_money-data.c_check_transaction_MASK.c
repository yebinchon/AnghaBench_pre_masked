
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int status; int parties; TYPE_2__* T; } ;
typedef TYPE_3__ transaction_t ;
struct TYPE_9__ {int acc_state; long long balance; scalar_t__ withdraw_code; scalar_t__ lock_num; long long locked; TYPE_1__* acc_type; } ;
typedef TYPE_4__ account_t ;
struct TYPE_7__ {long long acc_incr; scalar_t__ auth_code; TYPE_4__* tr_account; } ;
struct TYPE_6__ {int acc_class; } ;


 long long VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1 (transaction_t *VAR_4) {
  int VAR_5, VAR_6;
  FUNC_0 (VAR_4->status <= VAR_2 || VAR_4->status == VAR_3);
  for (VAR_5 = 0; VAR_5 < VAR_4->parties; VAR_5++) {
    long long VAR_7 = VAR_4->T[VAR_5].acc_incr;
    account_t *VAR_8 = VAR_4->T[VAR_5].tr_account;
    if (!VAR_8) {
      return -32 + VAR_5;
    }

    VAR_6 = VAR_8->acc_type->acc_class;

    if (VAR_7 > 0) {
      FUNC_0 (VAR_7 < VAR_0);
      if ((VAR_8->acc_state & 2) || (VAR_6 & 2)) {
        return -32 + VAR_5;
      }
      if (VAR_8->balance + VAR_7 >= VAR_1) {
        return -1;
      }
    } else {
      FUNC_0 (VAR_7 >= -VAR_0);
      if ((VAR_8->acc_state & 1) || (VAR_6 & 1)) {
        return -32 + VAR_5;
      }
      if (VAR_4->status != VAR_3 && VAR_8->withdraw_code && VAR_4->T[VAR_5].auth_code != VAR_8->withdraw_code) {
        return -32 + VAR_5;
      }
      if (VAR_4->status & 1) {
        FUNC_0 (VAR_8->lock_num > 0 && VAR_8->locked + VAR_7 >= 0);
        FUNC_0 (VAR_8->balance >= VAR_8->locked || (VAR_6 & 4));
      } else {
        if (VAR_8->balance + VAR_7 < VAR_8->locked && !(VAR_6 & 4)) {
          return -48+VAR_5;
        }
      }
      if (VAR_8->balance + VAR_7 < -VAR_1 || VAR_8->locked - VAR_7 >= VAR_1) {
        return -1;
      }
    }
  }
  return 0;
}
