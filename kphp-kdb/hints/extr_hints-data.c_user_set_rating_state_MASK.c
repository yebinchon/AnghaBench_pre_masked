
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chg_list_en; int chg_list_st; } ;
typedef TYPE_1__ user ;
struct lev_hints_set_user_rating_state {int type; int user_id; } ;


 int FUNC_0 (int *,int *,int,int ,int *) ;
 TYPE_1__* FUNC_1 (int ) ;

int FUNC_2 (struct lev_hints_set_user_rating_state *VAR_0) {
  int VAR_1 = (VAR_0->type & 0xff);
  if (VAR_1 >= 2 || VAR_1 < 0) {
    return 0;
  }

  user *VAR_2 = FUNC_1 (VAR_0->user_id);
  if (VAR_2 != ((void*)0)) {
    FUNC_0 (&VAR_2->chg_list_st, &VAR_2->chg_list_en, VAR_1 + 1, 0, ((void*)0));
    return 1;
  }

  return 0;
}
