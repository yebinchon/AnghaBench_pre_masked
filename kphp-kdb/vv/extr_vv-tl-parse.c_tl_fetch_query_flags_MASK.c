
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_query_header {int flags; int kitten_php_delay; int string_forward_keys_num; char** string_forward_keys; int int_forward_keys_num; char* string_forward; int custom_timeout; void* wait_binlog_time; void* int_forward; void** int_forward_keys; void* wait_binlog_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 void* FUNC_2 () ;
 void* FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int) ;

int FUNC_7 (struct tl_query_header *VAR_10) {
  int VAR_11 = FUNC_2 ();
  int VAR_12;
  if (FUNC_1 ()) {
    return -1;
  }
  if (VAR_10->flags & VAR_11) {
    FUNC_4 (VAR_0, "Duplicate flags in header 0x%08x", VAR_10->flags & VAR_11);
    return -1;
  }
  if (VAR_11 & ~VAR_5) {
    FUNC_4 (VAR_0, "Unsupported flags in header 0x%08x", (~VAR_5) & VAR_11);
    return -1;
  }
  VAR_10->flags |= VAR_11;
  if (VAR_11 & VAR_8) {
    VAR_10->wait_binlog_pos = FUNC_3 ();
    if (FUNC_1 ()) {
      return -1;
    }
  }
  if (VAR_11 & VAR_4) {
    VAR_10->kitten_php_delay = FUNC_2 ();
    if (FUNC_1 ()) {
      return -1;
    }
    if (VAR_10->kitten_php_delay < 0) {
      VAR_10->kitten_php_delay = 0;
    }
    if (VAR_10->kitten_php_delay > 120000) {
      VAR_10->kitten_php_delay = 120000;
    }
  }
  if (VAR_11 & VAR_7) {
    VAR_10->string_forward_keys_num = FUNC_2 ();
    if (VAR_10->string_forward_keys_num < 0 || VAR_10->string_forward_keys_num > 10) {
      FUNC_4 (VAR_0, "Number of string forward keys should be in range 0..10. Value %d", VAR_10->string_forward_keys_num);
      return -1;
    }
    if (FUNC_1 ()) {
      return -1;
    }
    for (VAR_12 = 0; VAR_12 < VAR_10->string_forward_keys_num; VAR_12++) {
      int VAR_13 = FUNC_6 (1000);
      if (FUNC_1 ()) {
        return -1;
      }
      VAR_10->string_forward_keys[VAR_12] = (char *)FUNC_0 (VAR_13 + 1);
      FUNC_5 (VAR_10->string_forward_keys[VAR_12], VAR_13);
      VAR_10->string_forward_keys[VAR_12][VAR_13] = 0;
      if (FUNC_1 ()) {
        return -1;
      }
    }
  }
  if (VAR_11 & VAR_3) {
    VAR_10->int_forward_keys_num = FUNC_2 ();
    if (VAR_10->int_forward_keys_num < 0 || VAR_10->int_forward_keys_num > 10) {
      FUNC_4 (VAR_0, "Number of int forward keys should be in range 0..10. Value %d", VAR_10->int_forward_keys_num);
      return -1;
    }
    if (FUNC_1 ()) {
      return -1;
    }
    for (VAR_12 = 0; VAR_12 < VAR_10->int_forward_keys_num; VAR_12++) {
      VAR_10->int_forward_keys[VAR_12] = FUNC_3 ();
      if (FUNC_1 ()) {
        return -1;
      }
    }
  }
  if (VAR_11 & VAR_6) {
    int VAR_14 = FUNC_6 (1000);
    if (FUNC_1 ()) {
      return -1;
    }
    VAR_10->string_forward = (char *)FUNC_0 (VAR_14 + 1);
    FUNC_5 (VAR_10->string_forward, VAR_14);
    VAR_10->string_forward[VAR_14] = 0;
    if (FUNC_1 ()) {
      return -1;
    }
  }
  if (VAR_11 & VAR_2) {
    VAR_10->int_forward = FUNC_3 ();
    if (FUNC_1 ()) {
      return -1;
    }
  }
  if (VAR_11 & VAR_9) {
    VAR_10->wait_binlog_time = FUNC_3 ();
    if (FUNC_1 ()) {
      return -1;
    }
  }
  if (VAR_11 & VAR_1) {
    VAR_10->custom_timeout = FUNC_2 ();
    if (FUNC_1 ()) {
      return -1;
    }
    if (VAR_10->custom_timeout < 0) {
      VAR_10->custom_timeout = 0;
    }
    if (VAR_10->custom_timeout > 120000) {
      VAR_10->custom_timeout = 120000;
    }
  }
  return 0;
}
