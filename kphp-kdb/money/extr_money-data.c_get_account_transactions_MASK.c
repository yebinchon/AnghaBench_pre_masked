
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ money_auth_code_t ;
struct TYPE_5__ {scalar_t__ access_code; scalar_t__ withdraw_code; int trans_num; int * acc_transactions; TYPE_1__* acc_type; } ;
typedef TYPE_2__ account_t ;
struct TYPE_4__ {scalar_t__ access_code; } ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int,long long) ;
 int FUNC_2 (long long**,int ,int) ;

int FUNC_3 (int VAR_0, long long VAR_1, int VAR_2, int VAR_3, int VAR_4, money_auth_code_t VAR_5, long long *VAR_6, int *VAR_7, int VAR_8) {
  account_t *VAR_9 = FUNC_1 (VAR_0, VAR_1);
  int VAR_10, VAR_11;
  long long *VAR_12 = VAR_6, *VAR_13;
  if (!VAR_9) {
    return -1;
  }
  if (VAR_9->access_code && VAR_9->access_code != VAR_5 && VAR_9->withdraw_code != VAR_5 && !(VAR_9->acc_type->access_code == VAR_5 && VAR_5)) {
    return -1;
  }
  VAR_10 = VAR_9->trans_num;
  FUNC_0 (VAR_10 >= 0);
  *VAR_7 = 0;
  if (!VAR_3 || !VAR_4 || !VAR_10) {
    return VAR_10;
  }
  if (VAR_3 < 0) {
    VAR_3 += VAR_10;
  } else {
    VAR_3--;
  }
  if (VAR_4 < 0) {
    VAR_4 += VAR_10;
  } else {
    VAR_4--;
  }

  if (VAR_3 >= VAR_10) {
    VAR_3 = VAR_10 - 1;
  }
  if (VAR_4 >= VAR_10) {
    VAR_4 = VAR_10 - 1;
  }

  if (VAR_3 < 0) {
    VAR_3 = 0;
  }
  if (VAR_4 < 0) {
    VAR_4 = 0;
  }

  VAR_13 = VAR_6 + (VAR_8 - 16);

  if (VAR_3 <= VAR_4) {
    for (VAR_11 = VAR_3; VAR_11 <= VAR_4 && VAR_6 <= VAR_13; VAR_11++) {
      FUNC_2 (&VAR_6, VAR_9->acc_transactions[VAR_11], VAR_2);
    }
  } else {
    for (VAR_11 = VAR_3; VAR_11 >= VAR_4 && VAR_6 <= VAR_13; VAR_11--) {
      FUNC_2 (&VAR_6, VAR_9->acc_transactions[VAR_11], VAR_2);
    }
  }
  *VAR_7 = VAR_6 - VAR_12;
  return VAR_10;
}
