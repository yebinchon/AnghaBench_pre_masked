
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_hints_increment_user_object_rating_char {int user_id; long long object_id; } ;
struct lev_hints_increment_user_object_rating {int user_id; long long object_id; int cnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (long long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (struct lev_hints_increment_user_object_rating*) ;
 int FUNC_6 (struct lev_hints_increment_user_object_rating_char*) ;

int FUNC_7 (int VAR_3, int VAR_4, long long VAR_5, int VAR_6, int VAR_7) {
  if (!VAR_2) {
    VAR_6 += 128;
  }
  if (!FUNC_2 (VAR_6) || !FUNC_4 (VAR_4) || !FUNC_3 (VAR_7) || !FUNC_1 (VAR_5)) {
    return 0;
  }

  if (VAR_6 & -0x100) {
    struct lev_hints_increment_user_object_rating *VAR_8 =
      FUNC_0 (VAR_0 + VAR_4 + (VAR_7 << 8), sizeof (struct lev_hints_increment_user_object_rating), VAR_3);

    VAR_8->user_id = VAR_3;
    VAR_8->object_id = VAR_5;
    VAR_8->cnt = VAR_6;

    return FUNC_5 (VAR_8);
  } else {
    struct lev_hints_increment_user_object_rating_char *VAR_9 =
      FUNC_0 (VAR_1 + VAR_4 + (VAR_6 << 8) + (VAR_7 << 16), sizeof (struct lev_hints_increment_user_object_rating_char), VAR_3);

    VAR_9->user_id = VAR_3;
    VAR_9->object_id = VAR_5;

    return FUNC_6 (VAR_9);
  }
}
