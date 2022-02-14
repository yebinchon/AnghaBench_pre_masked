
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; struct TYPE_4__* left; struct TYPE_4__* right; } ;
typedef TYPE_1__ tree_t ;



__attribute__((used)) static tree_t *FUNC_0 (tree_t *VAR_0, int VAR_1) {
  if (!VAR_0) {
    return 0;
  }
  if (VAR_0->left && VAR_1 < VAR_0->left->size) {
    return FUNC_0 (VAR_0->left, VAR_1);
  }
  if (VAR_1 == (VAR_0->left ? VAR_0->left->size : 0)) {
    return VAR_0;
  }
  return FUNC_0 (VAR_0->right, VAR_1 - 1 - (VAR_0->left ? VAR_0->left->size : 0));
}
