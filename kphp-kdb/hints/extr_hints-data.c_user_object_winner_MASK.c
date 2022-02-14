
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
struct lev_hints_user_object_winner {int type; int losers_cnt; int * losers; int object_type; int winner_id; int user_id; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int,int) ;

int FUNC_2 (struct lev_hints_user_object_winner *VAR_2) {
  if (!VAR_1) {
    user *VAR_3 = FUNC_0 (VAR_2->user_id);
    if (VAR_3 != ((void*)0)) {
      int VAR_4 = VAR_2->type - VAR_0;
      int VAR_5;
      int VAR_6 = FUNC_1 (VAR_3, VAR_2->object_type, VAR_2->winner_id, VAR_2->losers_cnt + 128, VAR_4);
      for (VAR_5 = 0; VAR_5 < VAR_2->losers_cnt; VAR_5++) {
        VAR_6 = VAR_6 & FUNC_1 (VAR_3, VAR_2->object_type, VAR_2->losers[VAR_5], -1 + 128, VAR_4);
      }
      return VAR_6;
    }
  }
  return 0;
}
