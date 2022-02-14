
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_hints_nullify_user_rating {int user_id; } ;


 int VAR_0 ;
 struct lev_hints_nullify_user_rating* FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct lev_hints_nullify_user_rating*) ;

int FUNC_2 (int VAR_1) {
  struct lev_hints_nullify_user_rating *VAR_2 =
    FUNC_0 (VAR_0, sizeof (struct lev_hints_nullify_user_rating), VAR_1);

  VAR_2->user_id = VAR_1;

  return FUNC_1 (VAR_2);
}
