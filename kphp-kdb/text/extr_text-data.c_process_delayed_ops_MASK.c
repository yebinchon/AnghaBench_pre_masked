
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int user_t ;
struct TYPE_4__ {int flags; int clear_mask; int set_mask; struct TYPE_4__* right; int x; struct TYPE_4__* left; } ;
typedef TYPE_1__ tree_t ;


 scalar_t__ FUNC_0 (int *,int ,int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3 (user_t *VAR_0, tree_t *VAR_1) {
  if (!VAR_1) {
    return;
  }
  FUNC_3 (VAR_0, VAR_1->left);
  if (VAR_1->flags == -1) {
    FUNC_1 (FUNC_0 (VAR_0, 0, VAR_1->x, -1, -1) >= 0);
  } else {
    FUNC_1 (FUNC_0 (VAR_0, 0, VAR_1->x, VAR_1->clear_mask, VAR_1->set_mask) >= 0);
  }
  FUNC_3 (VAR_0, VAR_1->right);
  FUNC_2 (VAR_1, sizeof (tree_t));
}
