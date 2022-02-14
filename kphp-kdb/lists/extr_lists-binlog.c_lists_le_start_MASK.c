
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value_t ;
struct lev_start {scalar_t__ schema_id; scalar_t__ split_min; scalar_t__ split_max; scalar_t__ split_mod; int extra_bytes; int* str; } ;
struct lev_lists_start_ext {int kludge_magic; scalar_t__ schema_id; int list_id_ints; int object_id_ints; int value_ints; int extra_mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_4 (struct lev_start *VAR_11) {
  if (VAR_11->schema_id != VAR_0



     ) {
    return -1;
  }
  VAR_7 = VAR_11->split_min;
  VAR_6 = VAR_11->split_max;
  VAR_8 = VAR_11->split_mod;
  FUNC_0 (VAR_8 > 0 && VAR_7 >= 0 && VAR_7 + 1 == VAR_6 && VAR_6 <= VAR_8);

  FUNC_0 (!VAR_5 && !VAR_9);

  if (VAR_11->extra_bytes >= 6 && VAR_11->str[0] == 1) {
    struct lev_lists_start_ext *VAR_12 = (struct lev_lists_start_ext *) VAR_11;
    FUNC_0 (VAR_12->kludge_magic == 1 && VAR_12->schema_id == VAR_2);
    VAR_5 = VAR_12->list_id_ints;
    VAR_9 = VAR_12->object_id_ints;
    FUNC_0 (VAR_12->value_ints == sizeof (value_t) / 4);
    FUNC_0 (!VAR_12->extra_mask);
  } else {
    VAR_5 = VAR_3;
    VAR_9 = VAR_4;

  }


  FUNC_0 (VAR_5 == 1 && VAR_9 == 1);


  FUNC_1 ();

  return 0;
}
