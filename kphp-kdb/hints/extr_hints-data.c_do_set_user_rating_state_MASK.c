
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_hints_set_user_rating_state {int user_id; } ;


 scalar_t__ VAR_0 ;
 struct lev_hints_set_user_rating_state* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (struct lev_hints_set_user_rating_state*) ;

int FUNC_2 (int VAR_1, int VAR_2) {
  if (VAR_2 >= 2 || VAR_2 < 0) {
    return 0;
  }

  struct lev_hints_set_user_rating_state *VAR_3 =
    FUNC_0 (VAR_0 + VAR_2, sizeof (struct lev_hints_set_user_rating_state), VAR_1);

  VAR_3->user_id = VAR_1;

  return FUNC_1 (VAR_3);
}
