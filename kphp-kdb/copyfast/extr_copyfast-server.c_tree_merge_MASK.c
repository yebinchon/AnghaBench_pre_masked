
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ x; scalar_t__ y; int size; struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ tree_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static tree_t *FUNC_1 (tree_t *VAR_0, tree_t *VAR_1) {
  if (!VAR_0) { return VAR_1; }
  if (!VAR_1) { return VAR_0; }
  FUNC_0 (VAR_0->x < VAR_1->x);
  if (VAR_0->y > VAR_1->y) {
    VAR_0->right = FUNC_1 (VAR_0->right, VAR_1);
    VAR_0->size = 1 + (VAR_0->left ? VAR_0->left->size : 0) + (VAR_0->right ? VAR_0->right->size : 0);
    return VAR_0;
  } else {
    VAR_1->left = FUNC_1 (VAR_0, VAR_1->left);
    VAR_1->size = 1 + (VAR_1->left ? VAR_1->left->size : 0) + (VAR_1->right ? VAR_1->right->size : 0);
    return VAR_1;
  }
}
