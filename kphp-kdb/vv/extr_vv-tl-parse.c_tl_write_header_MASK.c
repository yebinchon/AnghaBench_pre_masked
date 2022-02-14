
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_query_header {int op; long long actor_id; int flags; scalar_t__ string_forward_keys_pos; scalar_t__ string_forward_keys_num; scalar_t__ int_forward_keys_pos; scalar_t__ int_forward_keys_num; long long wait_binlog_pos; long long* int_forward_keys; long long int_forward; long long wait_binlog_time; long long binlog_pos; long long binlog_time; int custom_timeout; int string_forward; int * string_forward_keys; int kitten_php_delay; int invoke_kphp_req_extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long long VAR_8 ;
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
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*,int) ;

int FUNC_4 (struct tl_query_header *VAR_19, int *VAR_20, int VAR_21) {
  int VAR_22 = VAR_21;
  FUNC_0 (VAR_19->op == (int)VAR_4 || VAR_19->op == (int)VAR_6 || VAR_19->op == (int)VAR_3 || VAR_19->op == (int)VAR_5 || VAR_19->op == (int)VAR_2);
  if (VAR_19->op == (int)VAR_3 || VAR_19->op == (int)VAR_2) {
    if (VAR_19->op == (int)VAR_2) {
      if (VAR_21 < 24) { return -1; }
      FUNC_1 (VAR_20, VAR_19->invoke_kphp_req_extra, 24);
      VAR_20 += 24;
      VAR_21 -= 24;
    }
    if (VAR_19->actor_id || VAR_19->flags) {
      if (VAR_19->flags) {
        if ((VAR_19->flags & VAR_14) && VAR_19->string_forward_keys_pos >= VAR_19->string_forward_keys_num) {
          VAR_19->flags &= ~VAR_14;
        }
        if ((VAR_19->flags & VAR_11) && VAR_19->int_forward_keys_pos >= VAR_19->int_forward_keys_num) {
          VAR_19->flags &= ~VAR_11;
        }
        if (VAR_21 < 16) { return -1; }
        *(VAR_20 ++) = VAR_1;
        *(long long *)VAR_20 = VAR_19->actor_id;
        VAR_20 += 2;
        *(VAR_20 ++) = VAR_19->flags;
        VAR_21 -= 16;
        if (VAR_19->flags & VAR_15) {
          if (VAR_21 < 8) { return -1; }
          *(long long *)VAR_20 = VAR_19->wait_binlog_pos;
          VAR_20 += 2;
          VAR_21 -= 8;
        }
        if (VAR_19->flags & VAR_12) {
          if (VAR_21 < 4) { return -1; }
          *(VAR_20 ++) = VAR_19->kitten_php_delay;
          VAR_21 -= 4;
        }
        if (VAR_19->flags & VAR_14) {
          if (VAR_21 < 4) { return -1; }
          *(VAR_20 ++) = VAR_19->string_forward_keys_num - VAR_19->string_forward_keys_pos;
          VAR_21 -= 4;
          int VAR_23;
          for (VAR_23 = VAR_19->string_forward_keys_pos; VAR_23 < VAR_19->string_forward_keys_num; VAR_23++) {
            int VAR_24 = FUNC_3 (VAR_19->string_forward_keys[VAR_23], FUNC_2 (VAR_19->string_forward_keys[VAR_23]), (char *)VAR_20, VAR_21);
            if (VAR_24 < 0) { return VAR_24; }
            VAR_20 += (VAR_24 / 4);
            VAR_21 -= VAR_24;
          }
        }
        if (VAR_19->flags & VAR_11) {
          if (VAR_21 < 4) { return -1; }
          *(VAR_20 ++) = VAR_19->int_forward_keys_num - VAR_19->int_forward_keys_pos;
          VAR_21 -= 4;
          int VAR_25;
          for (VAR_25 = VAR_19->int_forward_keys_pos; VAR_25 < VAR_19->int_forward_keys_num; VAR_25++) {
            if (VAR_21 < 8) { return -1; }
            *(long long *)VAR_20 = VAR_19->int_forward_keys[VAR_25];
            VAR_20 += 2;
            VAR_21 -= 8;
          }
        }
        if (VAR_19->flags & VAR_13) {
          int VAR_26 = FUNC_3 (VAR_19->string_forward, FUNC_2 (VAR_19->string_forward), (char *)VAR_20, VAR_21);
          if (VAR_26 < 0) { return -1; }
          VAR_20 += (VAR_26 / 4);
          VAR_21 -= VAR_26;
        }
        if (VAR_19->flags & VAR_10) {
          if (VAR_21 < 8) { return -1; }
          *(long long *)VAR_20 = VAR_19->int_forward;
          VAR_20 += 2;
          VAR_21 -= 8;
        }
        if (VAR_19->flags & VAR_16) {
          if (VAR_21 < 8) { return -1; }
          *(long long *)VAR_20 = VAR_19->wait_binlog_time;
          VAR_20 += 2;
          VAR_21 -= 8;
        }
        if (VAR_19->flags & VAR_9) {
          if (VAR_21 < 4) { return -1; }
          *(VAR_20 ++) = VAR_19->custom_timeout;
          VAR_21 -= 4;
        }
        return VAR_22 - VAR_21;
      } else {
        if (VAR_21 < 12) { return -1; }
        VAR_20[0] = VAR_0;
        *(long long *)(VAR_20 + 1) = VAR_19->actor_id;
        return 12;
      }
    } else {
      return 0;
    }
  } else if (VAR_19->op == VAR_5) {
    if (VAR_21 < 12) {
      return -1;
    }
    VAR_20[0] = VAR_4;
    *(long long *)(VAR_20 + 1) = VAR_8;
    return 12;
  } else if (VAR_19->op == VAR_6) {
    if (VAR_19->flags) {
      if (VAR_21 < 32) { return -1; }
      *(VAR_20 ++) = VAR_7;
      *(VAR_20 ++) = VAR_19->flags;
      VAR_21 -= 8;
      if (VAR_19->flags & VAR_17) {
        *(long long *)VAR_20 = VAR_19->binlog_pos;
        VAR_20 += 2;
        VAR_21 -= 8;
      }
      if (VAR_19->flags & VAR_18) {
        *(long long *)VAR_20 = VAR_19->binlog_time;
        VAR_20 += 2;
        VAR_21 -= 8;
      }
      return VAR_22 - VAR_21;
    }
    return 0;
  } else if (VAR_19->op == VAR_4) {
    return 0;
  }
  return 0;
}
