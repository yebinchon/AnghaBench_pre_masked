
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {int dummy; } ;
struct lev_del_friend {int friend_id; } ;
struct lev_add_friend {int friend_id; int cat; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct lev_generic*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;

int FUNC_7 (int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10) {
  if (FUNC_4 (VAR_6) < 0 || VAR_7 <= 0 || VAR_8 < 0) {
    return -1;
  }
  if ((VAR_10 && VAR_9) || (VAR_8 & VAR_9)) {
    return -1;
  }
  if (VAR_10) {
    struct lev_add_friend *VAR_11 = FUNC_0 (VAR_1, 16, VAR_6);
    VAR_11->friend_id = VAR_7;
    VAR_11->cat = VAR_8 | 1;
    return FUNC_3 ((struct lev_generic *) VAR_11);
  }

  if ((VAR_9 & 0x7ffffffe) == 0x7ffffffe && !VAR_8) {
    return FUNC_5 (VAR_6, VAR_7);
  }

  if (!FUNC_6 (VAR_6)) {
    return -1;
  }

  int VAR_12, VAR_13, VAR_14 = -1;
  VAR_13 = ~(VAR_9 | VAR_8) & 0x7ffffffe;
  if (VAR_13) {
    if (!(VAR_13 & (VAR_13 - 1))) {
      VAR_12 = FUNC_2 (VAR_13);
      struct lev_del_friend *VAR_15 = FUNC_0 (VAR_5 + VAR_12, 12, VAR_6);
      VAR_15->friend_id = VAR_7;
      VAR_14 = FUNC_3 ((struct lev_generic *) VAR_15);
    } else if (VAR_9 & 0x7ffffffe) {
      struct lev_add_friend *VAR_16 = FUNC_0 (VAR_3, 16, VAR_6);
      VAR_16->friend_id = VAR_7;
      VAR_16->cat = VAR_9 | 1;
      VAR_14 = FUNC_3 ((struct lev_generic *) VAR_16);
    }
  }

  VAR_8 &= 0x7ffffffe;
  if (!(VAR_9 & 0x7ffffffe)) {
    struct lev_add_friend *VAR_17 = FUNC_0 (VAR_2, 16, VAR_6);
    VAR_17->friend_id = VAR_7;
    VAR_17->cat = VAR_8 | 1;
    VAR_14 = FUNC_3 ((struct lev_generic *) VAR_17);
  } else if (VAR_8) {
    if (!(VAR_8 & (VAR_8 - 1))) {
      VAR_12 = FUNC_2 (VAR_8);
      struct lev_del_friend *VAR_18 = FUNC_0 (VAR_0 + VAR_12, 12, VAR_6);
      VAR_18->friend_id = VAR_7;
      VAR_14 = FUNC_3 ((struct lev_generic *) VAR_18);
    } else {
      struct lev_add_friend *VAR_19 = FUNC_0 (VAR_4, 16, VAR_6);
      VAR_19->friend_id = VAR_7;
      VAR_19->cat = VAR_8;
      VAR_14 = FUNC_3 ((struct lev_generic *) VAR_19);
    }
  }

  FUNC_1 (VAR_14 != -1);

  return VAR_14;
}
