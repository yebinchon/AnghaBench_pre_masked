
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_query_header {int op; int flags; scalar_t__ string_forward_keys_pos; scalar_t__ string_forward_keys_num; scalar_t__ int_forward_keys_pos; scalar_t__ int_forward_keys_num; int kitten_php_delay; int custom_timeout; scalar_t__ binlog_time; scalar_t__ binlog_pos; scalar_t__ actor_id; scalar_t__ wait_binlog_time; scalar_t__ int_forward; int string_forward; scalar_t__* int_forward_keys; int * string_forward_keys; scalar_t__ wait_binlog_pos; int invoke_kphp_req_extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;

int FUNC_7 (struct tl_query_header *VAR_19) {
  FUNC_0 (FUNC_2 (0) >= 0);
  FUNC_0 (VAR_19->op == (int)VAR_4 || VAR_19->op == (int)VAR_6 || VAR_19->op == (int)VAR_3 || VAR_19->op == (int)VAR_5 || VAR_19->op == (int)VAR_2);
  if (VAR_19->op == (int)VAR_3 || VAR_19->op == (int)VAR_2) {
    if (VAR_19->op == (int)VAR_2) {
      FUNC_5 (VAR_19->invoke_kphp_req_extra, 24);
    }
    if (VAR_19->actor_id || VAR_19->flags) {
      if (VAR_19->flags) {
        if ((VAR_19->flags & VAR_14) && VAR_19->string_forward_keys_pos >= VAR_19->string_forward_keys_num) {
          VAR_19->flags &= ~VAR_14;
        }
        if ((VAR_19->flags & VAR_11) && VAR_19->int_forward_keys_pos >= VAR_19->int_forward_keys_num) {
          VAR_19->flags &= ~VAR_11;
        }
        FUNC_3 (VAR_1);
        FUNC_4 (VAR_19->actor_id);
        FUNC_3 (VAR_19->flags);
        if (VAR_19->flags & VAR_15) {
          FUNC_4 (VAR_19->wait_binlog_pos);
        }
        if (VAR_19->flags & VAR_12) {
          FUNC_3 (VAR_19->kitten_php_delay);
        }
        if (VAR_19->flags & VAR_14) {
          FUNC_3 (VAR_19->string_forward_keys_num - VAR_19->string_forward_keys_pos);
          int VAR_20;
          for (VAR_20 = VAR_19->string_forward_keys_pos; VAR_20 < VAR_19->string_forward_keys_num; VAR_20++) {
            FUNC_6 (VAR_19->string_forward_keys[VAR_20], FUNC_1 (VAR_19->string_forward_keys[VAR_20]));
          }
        }
        if (VAR_19->flags & VAR_11) {
          FUNC_3 (VAR_19->int_forward_keys_num - VAR_19->int_forward_keys_pos);
          int VAR_21;
          for (VAR_21 = VAR_19->int_forward_keys_pos; VAR_21 < VAR_19->int_forward_keys_num; VAR_21++) {
            FUNC_4 (VAR_19->int_forward_keys[VAR_21]);
          }
        }
        if (VAR_19->flags & VAR_13) {
          FUNC_6 (VAR_19->string_forward, FUNC_1 (VAR_19->string_forward));
        }
        if (VAR_19->flags & VAR_10) {
          FUNC_4 (VAR_19->int_forward);
        }
        if (VAR_19->flags & VAR_16) {
          FUNC_4 (VAR_19->wait_binlog_time);
        }
        if (VAR_19->flags & VAR_9) {
          FUNC_3 (VAR_19->custom_timeout);
        }
      } else {
        FUNC_3 (VAR_0);
        FUNC_4 (VAR_19->actor_id);
      }
    }
  } else if (VAR_19->op == VAR_5) {
    FUNC_3 (VAR_4);
    FUNC_4 (VAR_8);
  } else if (VAR_19->op == VAR_6) {
    if (VAR_19->flags) {
      FUNC_3 (VAR_7);
      FUNC_3 (VAR_19->flags);
      if (VAR_19->flags & VAR_17) {
        FUNC_4 (VAR_19->binlog_pos);
      }
      if (VAR_19->flags & VAR_18) {
        FUNC_4 (VAR_19->binlog_time);
      }
    }
  }
  return 0;
}
