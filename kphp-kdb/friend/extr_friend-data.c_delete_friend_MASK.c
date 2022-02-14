
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int user_id; scalar_t__ fr_cnt; int fr_tree; } ;
typedef TYPE_1__ user_t ;
typedef int tree_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;
 int * FUNC_4 (int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5 (user_t *VAR_4, int VAR_5) {
  tree_t *VAR_6;
  if (!VAR_4 || VAR_5 <= 0) {
    return -1;
  }
  if (VAR_3 >= 4) {
    FUNC_1 (VAR_2, "delete_friend. user_id = %d, friend_id = %d\n", VAR_4->user_id, VAR_5);
  }
  VAR_6 = FUNC_4 (VAR_4->fr_tree, VAR_5);
  if (VAR_6) {
    VAR_4->fr_tree = FUNC_3 (VAR_4->fr_tree, VAR_5);
    VAR_4->fr_cnt--;
    FUNC_0 (VAR_4->fr_cnt >= 0);
    if (VAR_1) {
      VAR_0 = FUNC_2 (VAR_0, VAR_5, VAR_4->user_id);
    }
    return 1;
  }
  return 0;
}
