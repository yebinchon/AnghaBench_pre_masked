
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; scalar_t__ long_lock_cancel_timeout; int long_lock_secret; } ;
typedef TYPE_1__ transaction_t ;
typedef scalar_t__ money_auth_code_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__*) ;
 TYPE_1__* FUNC_1 (long long) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_2 (long long VAR_5, money_auth_code_t VAR_6) {
  money_auth_code_t VAR_7[2];
  transaction_t *VAR_8 = FUNC_1 (VAR_5);
  if (!VAR_8) {
    return 0;
  }
  if (VAR_8->status != VAR_2 && VAR_8->status != VAR_4 && VAR_8->status != VAR_3) {
    return 0;
  }
  if (!VAR_8->long_lock_secret) {
    return -1;
  }
  FUNC_0 (VAR_8, VAR_7);
  if (VAR_6 != VAR_7[0] && VAR_6 != VAR_7[1]) {
    return -1;
  }
  if (VAR_8->status == VAR_3) {
    return 1;
  }
  if (VAR_8->status == VAR_2) {
    return 3;
  }
  if (VAR_6 == VAR_7[0]) {
    VAR_8->long_lock_cancel_timeout = VAR_1 + VAR_0;
  }
  return 2;
}
