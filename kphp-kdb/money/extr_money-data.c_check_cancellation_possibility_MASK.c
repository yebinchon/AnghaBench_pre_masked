
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ status; int parties; TYPE_1__* T; scalar_t__ tr_cancel_peer; } ;
typedef TYPE_3__ transaction_t ;
struct TYPE_9__ {int acc_state; long long balance; long long locked; TYPE_2__* acc_type; } ;
typedef TYPE_4__ account_t ;
struct TYPE_7__ {int acc_class; } ;
struct TYPE_6__ {long long acc_incr; TYPE_4__* tr_account; } ;


 long long VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1 (transaction_t *VAR_3) {
  int VAR_4;
  if (!VAR_3 || VAR_3->status != VAR_2 || VAR_3->tr_cancel_peer) {
    return -1;
  }
  for (VAR_4 = 0; VAR_4 < VAR_3->parties; VAR_4++) {
    long long VAR_5 = -VAR_3->T[VAR_4].acc_incr;
    account_t *VAR_6 = VAR_3->T[VAR_4].tr_account;
    if (!VAR_6) {
      return -32 + VAR_4;
    }
    int VAR_7 = VAR_6->acc_type->acc_class;
    if (VAR_5 >= 0) {
      FUNC_0 (VAR_5 < VAR_0);
      if ((VAR_6->acc_state & 1) || (VAR_7 & 1)) {
        return -32 + VAR_4;
      }
      if (VAR_6->balance + VAR_5 >= VAR_1) {
        return -1;
      }
    } else {
      FUNC_0 (VAR_5 >= -VAR_0);
      if ((VAR_6->acc_state & 2) || (VAR_7 & 2)) {
        return -32 + VAR_4;
      }
      if (VAR_6->balance + VAR_5 < VAR_6->locked && !(VAR_7 & 4)) {
        return -48 + VAR_4;
      }
      if (VAR_6->balance + VAR_5 < -VAR_1 || VAR_6->locked - VAR_5 >= VAR_1) {
        return -1;
      }
    }
  }
  return 1;
}
