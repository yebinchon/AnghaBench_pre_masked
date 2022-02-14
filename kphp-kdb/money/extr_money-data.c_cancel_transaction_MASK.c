
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ status; int long_lock_heap_pos; scalar_t__ temp_id; scalar_t__ long_locked_until; } ;
typedef TYPE_1__ transaction_t ;
struct lev_money_trans_cancel {scalar_t__ temp_id; scalar_t__ transaction_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6 (struct lev_money_trans_cancel *VAR_8) {
  transaction_t *VAR_9 = FUNC_2 (VAR_8->transaction_id);
  FUNC_0 (VAR_8->transaction_id && VAR_9);
  if (VAR_9->status == VAR_7) {
    FUNC_0 (VAR_8->temp_id < 0 && VAR_8->temp_id >= -3 && !FUNC_1 (VAR_8->temp_id));
    FUNC_0 (VAR_9->long_lock_heap_pos && VAR_9->long_locked_until);
    FUNC_3 (VAR_9);
    VAR_9->long_lock_heap_pos = VAR_8->temp_id;
    VAR_9->status = VAR_6;
  } else {
    FUNC_0 (VAR_8->temp_id == VAR_9->temp_id && VAR_8->temp_id > 0);
    FUNC_0 (VAR_9 == FUNC_1 (VAR_8->temp_id));
    FUNC_0 (VAR_9->status == VAR_5 || VAR_9->status == VAR_6);
    FUNC_0 (!VAR_9->long_lock_heap_pos && !VAR_9->long_locked_until);
  }
  VAR_9->long_locked_until = VAR_3;
  FUNC_5 (VAR_9);

  VAR_9->status = VAR_4;
  if (VAR_8->temp_id > 0) {
    FUNC_4 (VAR_9);
  } else if (VAR_8->temp_id == -3) {
    VAR_2++;
  } else {
    VAR_0++;
  }
  VAR_1++;

  return 1;
}
