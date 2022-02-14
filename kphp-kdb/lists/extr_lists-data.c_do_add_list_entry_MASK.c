
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value_t ;
struct lev_new_entry_long {int value; } ;
struct lev_new_entry_ext {int value; int extra; } ;
struct lev_new_entry {int dummy; } ;
typedef int object_id_t ;
typedef int list_id_t ;


 int FUNC_0 (int ) ;
 struct lev_new_entry_ext* FUNC_1 (struct lev_new_entry_ext*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lev_new_entry_ext* FUNC_2 (int,scalar_t__,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,int const*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (struct lev_new_entry_ext*,int,int) ;
 int FUNC_9 (struct lev_new_entry_ext*,int ,int ) ;

int FUNC_10 (list_id_t VAR_5, object_id_t VAR_6, int VAR_7, int VAR_8, value_t VAR_9, const int *VAR_10) {
  FUNC_3 (VAR_7 >= 0 && VAR_7 <= 3);
  if (FUNC_4 (VAR_5) < 0 || (VAR_8 & -0x100)) {
    return -1;
  }
  if (VAR_4 && VAR_7 != 0 && FUNC_7 (VAR_5, 1) < 0) {
    return -2;
  }
  if (VAR_10 && !VAR_10[0] && !VAR_10[1] && !VAR_10[2] && !VAR_10[3]) {
    VAR_10 = 0;
  }
  if (VAR_10 && VAR_7 == 1) {
    VAR_10 = 0;
  }





  if (VAR_7 == 3) {
    VAR_7 = 0;
  }

  if (VAR_7 == 1 && !FUNC_5 (VAR_5, VAR_6)) {
    return 0;
  }
  if (VAR_7 == 2 && FUNC_5 (VAR_5, VAR_6)) {
    return 0;
  }
  struct lev_new_entry_ext *VAR_11, *VAR_12;
  int VAR_13;
  if (VAR_10) {
    VAR_11 = FUNC_2 (VAR_1 - (VAR_7 << 8) + VAR_8, sizeof (struct lev_new_entry_ext) + VAR_3, FUNC_0 (VAR_5));
    FUNC_9 (VAR_11, VAR_5, VAR_6);
    VAR_12 = FUNC_1(VAR_11);
    VAR_12->value = VAR_9;
    FUNC_6 (VAR_12->extra, VAR_10, 16);
    VAR_13 = 0;
  } else {
    VAR_11 = FUNC_2 (VAR_0 - (VAR_7 << 8) + VAR_8, sizeof (struct lev_new_entry) + VAR_3, FUNC_0 (VAR_5));
    FUNC_9 (VAR_11, VAR_5, VAR_6);
    VAR_12 = FUNC_1(VAR_11);
    VAR_12->value = VAR_9;
    VAR_13 = 1;
  }
  return FUNC_8 (VAR_11, VAR_13, VAR_9);
}
