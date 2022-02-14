
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ status; long long transaction_id; int temp_id; } ;
typedef TYPE_1__ transaction_t ;
struct lev_money_trans_lock {int temp_id; long long transaction_id; int lock_seconds; int lock_secret; } ;
typedef int money_auth_code_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 struct lev_money_trans_lock* FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 long long FUNC_6 () ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (struct lev_money_trans_lock*) ;
 int FUNC_9 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_10 (int VAR_6, int VAR_7, long long *VAR_8, money_auth_code_t VAR_9[2]) {
  transaction_t *VAR_10 = FUNC_7 (VAR_6);
  *VAR_8 = 0;
  if (!VAR_10 || VAR_7 < VAR_2 || VAR_7 > VAR_1) {
    return 0;
  }
  int VAR_11 = FUNC_3 (VAR_10);
  if (VAR_11 < 0) {
    return VAR_11;
  }
  if (VAR_10->status != VAR_4 && VAR_10->status != VAR_5) {
    return -1;
  }
  if (!VAR_10->transaction_id) {
    VAR_10->transaction_id = FUNC_6();
  }

  FUNC_2 (FUNC_5 (VAR_10) == 1);

  struct lev_money_trans_lock *VAR_12 = FUNC_1 (VAR_0, sizeof (struct lev_money_trans_lock), VAR_6);

  VAR_12->temp_id = VAR_10->temp_id;
  VAR_12->transaction_id = VAR_10->transaction_id;
  VAR_12->lock_seconds = VAR_7;
  VAR_12->lock_secret = (FUNC_9() ^ VAR_3 ^ VAR_10->temp_id) & 0x7fffffff;
  if (!VAR_12->lock_secret) {
    VAR_12->lock_secret++;
  }

  FUNC_2 (FUNC_8 (VAR_12) == 1);

  FUNC_0 (VAR_10);

  *VAR_8 = VAR_10->transaction_id;
  FUNC_4 (VAR_10, VAR_9);

  return 2;
}
