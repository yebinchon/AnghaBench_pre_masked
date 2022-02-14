
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chg_list_en; int chg_list_st; } ;
typedef TYPE_1__ user ;
struct lev_hints_nullify_user_rating {int user_id; } ;


 int FUNC_0 (int *,int *,int ,int ,int *) ;
 TYPE_1__* FUNC_1 (int ) ;

int FUNC_2 (struct lev_hints_nullify_user_rating *VAR_0) {
  user *VAR_1 = FUNC_1 (VAR_0->user_id);
  if (VAR_1 != ((void*)0)) {
    FUNC_0 (&VAR_1->chg_list_st, &VAR_1->chg_list_en, 0, 0, ((void*)0));
    return 1;
  }

  return 0;
}
