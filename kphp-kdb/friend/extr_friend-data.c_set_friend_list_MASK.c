
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int user_id; int fr_cnt; int fr_last_date; int cat_mask; TYPE_2__* fr_tree; } ;
typedef TYPE_1__ user_t ;
struct TYPE_12__ {int cat; int date; } ;
typedef TYPE_2__ tree_t ;
struct TYPE_13__ {int id; int cat; } ;
typedef TYPE_3__ id_cat_pair_t ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ,int,int,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_4 (TYPE_2__*,int,int ,int,int) ;
 TYPE_2__* FUNC_5 (TYPE_2__*,int) ;
 int VAR_3 ;

int FUNC_6 (user_t *VAR_4, int VAR_5, const id_cat_pair_t *VAR_6, const int *VAR_7) {
  int VAR_8, VAR_9 = 1;
  tree_t *VAR_10 = 0;
  if (!VAR_4) { return -1; }
  if (VAR_3 >= 4) {
    FUNC_0 (VAR_2, "set_friend_list. user_id = %d\n", VAR_4->user_id);
  }
  FUNC_1 (VAR_4);
  if (VAR_6) {
    for (VAR_8 = 1; VAR_8 <= VAR_5; VAR_8++) {
      int VAR_11 = VAR_6->id;
      tree_t *VAR_12 = FUNC_5 (VAR_10, VAR_11);
      VAR_9 |= VAR_6->cat;
      if (VAR_12) {
        VAR_12->cat = VAR_6->cat | 1;
        VAR_12->date = VAR_8;
      } else {
        VAR_10 = FUNC_4 (VAR_10, VAR_11, FUNC_2(), VAR_6->cat | 1, VAR_8);
        VAR_4->fr_cnt++;
        if (VAR_1) {
          VAR_0 = FUNC_3 (VAR_0, VAR_11, VAR_4->user_id, FUNC_2(), 0);
        }
      }
      VAR_6++;
    }
  } else {
    for (VAR_8 = 1; VAR_8 <= VAR_5; VAR_8++) {
      int VAR_13 = *VAR_7++;
      tree_t *VAR_14 = FUNC_5 (VAR_10, VAR_13);
      if (VAR_14) {
        VAR_14->date = VAR_8;
        VAR_14->cat = 1;
      } else {
        VAR_10 = FUNC_4 (VAR_10, VAR_13, FUNC_2(), 1, VAR_8);
        VAR_4->fr_cnt++;
        if (VAR_1) {
          VAR_0 = FUNC_3 (VAR_0, VAR_13, VAR_4->user_id, FUNC_2(), 0);
        }
      }
    }
  }

  VAR_4->fr_tree = VAR_10;
  VAR_4->fr_last_date = VAR_5;
  VAR_4->cat_mask = VAR_9;

  return VAR_4->fr_cnt;
}
