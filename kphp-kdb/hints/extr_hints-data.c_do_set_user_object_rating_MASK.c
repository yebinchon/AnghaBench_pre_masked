
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_hints_set_user_object_rating {int user_id; long long object_id; float val; } ;


 scalar_t__ VAR_0 ;
 struct lev_hints_set_user_object_rating* FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (long long) ;
 int FUNC_2 (float) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct lev_hints_set_user_object_rating*) ;

int FUNC_6 (int VAR_1, int VAR_2, long long VAR_3, float VAR_4, int VAR_5) {
  if (!FUNC_4 (VAR_2) || !FUNC_3 (VAR_5) || !FUNC_1 (VAR_3) || !FUNC_2 (VAR_4)) {
    return 0;
  }

  struct lev_hints_set_user_object_rating *VAR_6 =
    FUNC_0 (VAR_0 + (VAR_5 << 8) + VAR_2, sizeof (struct lev_hints_set_user_object_rating), 0);

  VAR_6->user_id = VAR_1;
  VAR_6->object_id = VAR_3;
  VAR_6->val = VAR_4;

  return FUNC_5 (VAR_6);
}
