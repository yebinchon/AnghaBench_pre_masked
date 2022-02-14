
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_t ;
struct lev_set_privacy_long {int len; int List; void* key; } ;
struct lev_set_privacy {int List; void* key; } ;
typedef void* privacy_key_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (scalar_t__,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char const*,int,int) ;
 int FUNC_7 (int *,void*,int) ;

int FUNC_8 (int VAR_4, privacy_key_t VAR_5, const char *VAR_6, int VAR_7, int VAR_8) {
  user_t *VAR_9;

  if (FUNC_1 (VAR_4) < 0 || !VAR_5) {
    return -1;
  }

  if (FUNC_6 (VAR_6, VAR_7, VAR_4) < 0) {
    return -1;
  }

  FUNC_5 ();

  if (VAR_3 < 256) {
    struct lev_set_privacy *VAR_10 = FUNC_0 (VAR_0 + VAR_3 + (VAR_8 ? 0x100 : 0), 16+VAR_3*4, VAR_4);
    VAR_10->key = VAR_5;
    FUNC_4 (VAR_10->List, VAR_2, VAR_3*4);
  } else {
    struct lev_set_privacy_long *VAR_11 = FUNC_0 (VAR_1 + (VAR_8 ? 1 : 0), 20+VAR_3*4, VAR_4);
    VAR_11->key = VAR_5;
    VAR_11->len = VAR_3;
    FUNC_4 (VAR_11->List, VAR_2, VAR_3*4);
  }

  if (!VAR_8) {
    VAR_9 = FUNC_2 (VAR_4);
  } else {
    VAR_9 = FUNC_3 (VAR_4);
  }

  return FUNC_7 (VAR_9, VAR_5, VAR_8);
}
