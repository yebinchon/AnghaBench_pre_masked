
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value_t ;
struct lev_start {scalar_t__ schema_id; scalar_t__ split_min; scalar_t__ split_max; scalar_t__ split_mod; int extra_bytes; int* str; } ;
struct lev_lists_start_ext {int kludge_magic; scalar_t__ schema_id; int list_id_ints; int object_id_ints; int value_ints; int extra_mask; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_6 ;
 int FUNC_4 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int,char*,int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6 (struct lev_start *VAR_12) {
  if (VAR_12->schema_id != VAR_1



     ) {
    return -1;
  }

  int VAR_13 = -1, VAR_14 = -1;

  if (!VAR_9) {
    FUNC_0 (!VAR_8 && !VAR_7);
    FUNC_0 (!VAR_6 && !VAR_10);
    VAR_8 = VAR_12->split_min;
    VAR_7 = VAR_12->split_max;
    VAR_9 = VAR_12->split_mod;
  } else {
    FUNC_5 (1, "warning: duplicate LEV_START at log position %lld, split %d..%d mod %d\n", FUNC_4(), VAR_12->split_min, VAR_12->split_max, VAR_12->split_mod);
    FUNC_0 (VAR_9 == VAR_12->split_mod);
    FUNC_0 (VAR_8 == VAR_12->split_min);
    FUNC_0 (VAR_7 == VAR_12->split_max);
    VAR_13 = VAR_6;
    VAR_14 = VAR_10;
  }
  FUNC_0 (VAR_9 > 0 && VAR_8 >= 0 && VAR_8 + 1 == VAR_7 && VAR_7 <= VAR_9);


  if (VAR_12->extra_bytes >= 6 && VAR_12->str[0] == 1) {
    struct lev_lists_start_ext *VAR_15 = (struct lev_lists_start_ext *) VAR_12;
    FUNC_0 (VAR_15->kludge_magic == 1 && VAR_15->schema_id == VAR_3);
    VAR_6 = VAR_15->list_id_ints;
    VAR_10 = VAR_15->object_id_ints;
    FUNC_0 (VAR_15->value_ints == sizeof (value_t) / 4);
    FUNC_0 (!VAR_15->extra_mask);
  } else {
    VAR_6 = VAR_4;
    VAR_10 = VAR_5;

  }


  FUNC_0 (VAR_6 == 1 && VAR_10 == 1);


  if (VAR_14 > 0) {
    FUNC_0 (VAR_10 == VAR_14 && VAR_6 == VAR_13);
    FUNC_0 (VAR_0);
  } else {
    FUNC_1 ();
  }

  return 0;
}
