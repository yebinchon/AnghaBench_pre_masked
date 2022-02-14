
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_set_flags_long {int flags; int and_mask; int xor_mask; } ;
struct lev_set_flags {int flags; int and_mask; int xor_mask; } ;
struct lev_change_flags_long {int flags; int and_mask; int xor_mask; } ;
typedef int object_id_t ;
typedef int list_id_t ;


 int FUNC_0 (int ) ;
 struct lev_set_flags_long* FUNC_1 (struct lev_set_flags_long*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct lev_set_flags_long* FUNC_2 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (struct lev_set_flags_long*) ;
 int FUNC_6 (struct lev_set_flags_long*,int ,int ) ;

int FUNC_7 (list_id_t VAR_7, object_id_t VAR_8, int VAR_9, int VAR_10) {
  int VAR_11 = 0;
  if (FUNC_3 (VAR_7) < 0) {
    return -1;
  }
  if (VAR_6 && FUNC_4 (VAR_7, 1) < 0) {
    return -2;
  }
  if ((VAR_10 | VAR_9) == -1 && !(VAR_9 & -0x100)) {
    struct lev_set_flags *VAR_12 = FUNC_2 (VAR_3 + VAR_9, sizeof (struct lev_set_flags) + VAR_5, FUNC_0(VAR_7));
    FUNC_6 (VAR_12, VAR_7, VAR_8);
    return FUNC_5 (VAR_12);
  }
  if ((VAR_9 & -0x100) || (VAR_10 & -0x100)) {
    if ((VAR_10 | VAR_9) == -1) {
      struct lev_set_flags_long *VAR_13 = FUNC_2 (VAR_4, sizeof (struct lev_set_flags_long) + VAR_5, FUNC_0(VAR_7));
      FUNC_6 (VAR_13, VAR_7, VAR_8);
      ((struct lev_set_flags_long *) FUNC_1 (VAR_13))->flags = VAR_9;
      return FUNC_5 ((struct lev_set_flags *) VAR_13);
    } else {
      struct lev_change_flags_long *VAR_14 = FUNC_2 (VAR_0, sizeof (struct lev_change_flags_long) + VAR_5, FUNC_0(VAR_7));
      FUNC_6 (VAR_14, VAR_7, VAR_8);
      struct lev_change_flags_long *VAR_15 = FUNC_1 (VAR_14);
      VAR_15->and_mask = ~(VAR_10 | VAR_9);
      VAR_15->xor_mask = VAR_9;
      return FUNC_5 ((struct lev_set_flags *) VAR_14);
    }
  }
  if (VAR_10 &= ~VAR_9) {
    struct lev_set_flags *VAR_16 = FUNC_2 (VAR_1 + VAR_10, sizeof (struct lev_set_flags) + VAR_5, FUNC_0(VAR_7));
    FUNC_6 (VAR_16, VAR_7, VAR_8);
    VAR_11 = FUNC_5 (VAR_16);
  }
  if (VAR_9) {
    struct lev_set_flags *VAR_17 = FUNC_2 (VAR_2 + VAR_9, sizeof (struct lev_set_flags) + VAR_5, FUNC_0(VAR_7));
    FUNC_6 (VAR_17, VAR_7, VAR_8);
    VAR_11 = FUNC_5 (VAR_17);
  }
  return VAR_11;
}
