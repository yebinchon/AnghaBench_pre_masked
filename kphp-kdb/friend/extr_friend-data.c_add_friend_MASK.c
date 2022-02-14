
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int user_id; int cat_mask; scalar_t__ fr_cnt; scalar_t__ fr_last_date; int fr_tree; } ;
typedef TYPE_1__ user_t ;
struct TYPE_7__ {int cat; } ;
typedef TYPE_2__ tree_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int,int,int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int,int ,int,scalar_t__) ;
 TYPE_2__* FUNC_5 (int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6 (user_t *VAR_6, int VAR_7, int VAR_8) {
  tree_t *VAR_9;
  if (!VAR_6 || VAR_7 <= 0) {
    return -1;
  }
  if (VAR_5 >= 4) {
    FUNC_1 (VAR_4, "add_friend. user_id = %d, friend_id = %d\n", VAR_6->user_id, VAR_7);
  }
  VAR_9 = FUNC_5 (VAR_6->fr_tree, VAR_7);
  if (VAR_9) {
    VAR_9->cat = VAR_8 | 1;
    VAR_6->cat_mask |= VAR_9->cat;
    return VAR_9->cat;
  } else {

    if (VAR_6->fr_cnt >= VAR_0) {
      return -1;
    }

    FUNC_0 (VAR_6, VAR_7);

    if (VAR_1 > VAR_6->fr_last_date) {
      VAR_6->fr_last_date = VAR_1;
    } else {
      VAR_6->fr_last_date++;
    }

    VAR_6->fr_tree = FUNC_4 (VAR_6->fr_tree, VAR_7, FUNC_2(), VAR_8 | 1, VAR_6->fr_last_date);
    VAR_6->fr_cnt++;

    if (VAR_3) {
      VAR_2 = FUNC_3 (VAR_2, VAR_7, VAR_6->user_id, FUNC_2(), 0);
    }

    return VAR_8 | 1;
  }
}
