
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value_t ;
struct lev_start {scalar_t__ schema_id; int split_mod; int split_min; int split_max; int extra_bytes; int* str; } ;
struct lev_lists_start_ext {int kludge_magic; scalar_t__ schema_id; int list_id_ints; int object_id_ints; int value_ints; int extra_mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_3 (struct lev_start *VAR_16) {
  int VAR_17, VAR_18, VAR_19;
  if (VAR_16->schema_id != VAR_0 && VAR_16->schema_id != VAR_1) {
    FUNC_2 (VAR_14, "incorrect binlog schema %08lx for lists-engine\n", VAR_16->schema_id);
    FUNC_1 (1);
  }
  if (VAR_13) {
    FUNC_0 (VAR_16->split_mod >= VAR_13 && !(VAR_16->split_mod % VAR_13) && VAR_12 == VAR_16->split_min % VAR_13 && VAR_16->split_max == VAR_16->split_min + 1);
  }
  VAR_12 = VAR_16->split_min;
  VAR_11 = VAR_16->split_max;
  VAR_13 = VAR_16->split_mod;
  FUNC_0 (VAR_13 > 0 && VAR_12 >= 0 && VAR_12 + 1 == VAR_11 && VAR_11 <= VAR_13);

  if (VAR_16->extra_bytes >= 6 && VAR_16->str[0] == 1) {
    struct lev_lists_start_ext *VAR_20 = (struct lev_lists_start_ext *) VAR_16;
    FUNC_0 (VAR_20->kludge_magic == 1 && VAR_20->schema_id == VAR_2);
    VAR_17 = VAR_20->list_id_ints;
    VAR_18 = VAR_20->object_id_ints;
    VAR_19 = VAR_20->value_ints;
    FUNC_0 (!VAR_20->extra_mask);
  } else {
    if (VAR_16->schema_id != VAR_1) {
      FUNC_2 (VAR_14, "incorrect binlog for lists-engine\n");
      FUNC_1 (1);
    } else {
      VAR_17 = VAR_18 = VAR_19 = 1;
    }
  }

  if (VAR_6) {
    FUNC_0 (VAR_17 == VAR_6 && VAR_18 == VAR_10 && VAR_19 == VAR_15);
  }

  VAR_6 = VAR_17;
  VAR_10 = VAR_18;
  VAR_15 = VAR_19;
  VAR_8 = VAR_6 + VAR_10 + 1;

  FUNC_0 (VAR_6 > 0 && VAR_6 <= VAR_3);
  FUNC_0 (VAR_10 > 0 && VAR_10 <= VAR_4);
  FUNC_0 (VAR_15 == 1 || VAR_15 == 2);
  FUNC_0 (sizeof (value_t) == 4);

  VAR_9 = VAR_10 * 4;
  VAR_5 = VAR_6 * 4;
  VAR_7 = VAR_5 + VAR_9;

  return 0;
}
