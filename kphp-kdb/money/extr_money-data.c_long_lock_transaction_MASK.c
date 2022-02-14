
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ temp_id; scalar_t__ status; scalar_t__ long_locked_until; int long_lock_secret; scalar_t__ long_lock_cancel_timeout; int long_lock_heap_pos; } ;
typedef TYPE_1__ transaction_t ;
struct lev_money_trans_lock {scalar_t__ temp_id; scalar_t__ lock_seconds; int lock_secret; scalar_t__ transaction_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_7 (struct lev_money_trans_lock *VAR_6) {
  transaction_t *VAR_7 = FUNC_3 (VAR_6->transaction_id);
  FUNC_0 (VAR_6->transaction_id && VAR_7);
  FUNC_0 (VAR_6->temp_id == VAR_7->temp_id && VAR_6->temp_id && VAR_7 == FUNC_2 (VAR_6->temp_id));
  FUNC_0 (VAR_7->status == VAR_3 || VAR_7->status == VAR_4);

  FUNC_0 (!VAR_7->long_locked_until && !VAR_7->long_lock_heap_pos);
  FUNC_0 (VAR_6->lock_seconds >= VAR_1 && VAR_6->lock_seconds <= VAR_0);

  FUNC_0 (FUNC_1 (VAR_7) >= 0);

  FUNC_4 (VAR_7);
  FUNC_0 (VAR_7->status == VAR_4);

  VAR_7->status = VAR_5;
  FUNC_6 (VAR_7);

  VAR_7->long_locked_until = VAR_2 + VAR_6->lock_seconds;
  VAR_7->long_lock_cancel_timeout = 0;
  VAR_7->long_lock_secret = VAR_6->lock_secret;

  FUNC_5 (VAR_7);

  return 1;
}
