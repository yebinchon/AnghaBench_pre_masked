
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef TYPE_1__ tree_t ;



__attribute__((used)) static tree_t *FUNC_0 (tree_t *VAR_0, int VAR_1) {
  while (VAR_0) {
    if (VAR_1 < VAR_0->x) {
      VAR_0 = VAR_0->left;
    } else if (VAR_1 > VAR_0->x) {
      VAR_0 = VAR_0->right;
    } else {
      return VAR_0;
    }
  }
  return VAR_0;
}
