
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int user_id; int cat_mask; int fr_tree; } ;
typedef TYPE_1__ user_t ;
struct TYPE_6__ {int cat; } ;
typedef TYPE_2__ tree_t ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2 (user_t *VAR_2, int VAR_3, int VAR_4, int VAR_5) {
  tree_t *VAR_6;
  if (!VAR_2 || VAR_3 <= 0) {
    return -1;
  }
  if (VAR_1 >= 4) {
    FUNC_0 (VAR_0, "add_friend. user_id = %d, friend_id = %d\n", VAR_2->user_id, VAR_3);
  }
  VAR_6 = FUNC_1 (VAR_2->fr_tree, VAR_3);
  if (VAR_6) {
    VAR_6->cat = ((VAR_6->cat & VAR_5) ^ VAR_4) | 1;
    VAR_2->cat_mask |= VAR_6->cat;
    return VAR_6->cat;
  } else {
    return 0;
  }
}
