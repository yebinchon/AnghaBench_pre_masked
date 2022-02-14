
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ x; struct TYPE_3__* right; struct TYPE_3__* left; } ;
typedef TYPE_1__ tree_t ;


 int FUNC_0 (int) ;

int FUNC_1 (tree_t *VAR_0) {
  if (!VAR_0) {
    return 1;
  }
  if (VAR_0->left) { FUNC_0 (VAR_0->left->x < VAR_0->x); }
  if (VAR_0->right) { FUNC_0 (VAR_0->right->x > VAR_0->x); }
  FUNC_1 (VAR_0->left);
  FUNC_1 (VAR_0->right);
  return 1;
}
