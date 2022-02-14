
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ money_auth_code_t ;
struct TYPE_5__ {scalar_t__ access_code; long long locked; long long balance; TYPE_1__* acc_type; } ;
typedef TYPE_2__ account_t ;
struct TYPE_4__ {int currency; } ;


 long long VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (int ,char*,int,long long) ;
 TYPE_2__* FUNC_1 (int,long long) ;
 int VAR_2 ;
 int VAR_3 ;

long long FUNC_2 (int VAR_4, long long VAR_5, money_auth_code_t VAR_6, int *VAR_7, long long *VAR_8) {
  if (VAR_3 > 1) {
    FUNC_0 (VAR_2, "in get_balance(%d,%lld)\n", VAR_4, VAR_5);
  }

  account_t *VAR_9 = FUNC_1 (VAR_4, VAR_5);
  if (!VAR_9) {
    return VAR_0;
  }

  if (VAR_9->access_code && VAR_6 != VAR_9->access_code) {
    return VAR_1;
  }

  *VAR_7 = VAR_9->acc_type->currency;
  *VAR_8 = VAR_9->locked;

  return VAR_9->balance;
}
