
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_hints_set_user_object_type {int user_id; long long object_id; } ;


 scalar_t__ VAR_0 ;
 struct lev_hints_set_user_object_type* FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (long long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct lev_hints_set_user_object_type*) ;

int FUNC_4 (int VAR_1, int VAR_2, long long VAR_3, int VAR_4) {
  if (!FUNC_2 (VAR_2) || !FUNC_2 (VAR_4) || !FUNC_1 (VAR_3)) {
    return 0;
  }

  struct lev_hints_set_user_object_type *VAR_5 =
    FUNC_0 (VAR_0 + 256 * VAR_2 + VAR_4, sizeof (struct lev_hints_set_user_object_type), 0);

  VAR_5->user_id = VAR_1;
  VAR_5->object_id = VAR_3;

  return FUNC_3 (VAR_5);
}
