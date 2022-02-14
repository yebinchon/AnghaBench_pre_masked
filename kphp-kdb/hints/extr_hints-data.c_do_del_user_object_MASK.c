
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_hints_del_user_object {int user_id; long long object_id; } ;


 scalar_t__ VAR_0 ;
 struct lev_hints_del_user_object* FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (long long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct lev_hints_del_user_object*) ;

int FUNC_4 (int VAR_1, int VAR_2, long long VAR_3) {
  if (!FUNC_2 (VAR_2) || !FUNC_1 (VAR_3)) {
    return 0;
  }

  struct lev_hints_del_user_object *VAR_4 =
    FUNC_0 (VAR_0 + VAR_2, sizeof (struct lev_hints_del_user_object), 0);

  VAR_4->user_id = VAR_1;
  VAR_4->object_id = VAR_3;

  return FUNC_3 (VAR_4);
}
