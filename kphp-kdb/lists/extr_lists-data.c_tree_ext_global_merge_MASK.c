
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ y; struct TYPE_7__* left; struct TYPE_7__* right; } ;
typedef TYPE_1__ tree_ext_global_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static tree_ext_global_t *FUNC_1 (tree_ext_global_t *VAR_1, tree_ext_global_t *VAR_2) {
  if (VAR_1 == VAR_0) { return VAR_2; }
  if (VAR_2 == VAR_0) { return VAR_1; }
  if (VAR_1->y > VAR_2->y) {
    VAR_1->right = FUNC_1 (VAR_1->right, VAR_2);
    FUNC_0 (VAR_1);
    return VAR_1;
  } else {
    VAR_2->left = FUNC_1 (VAR_1, VAR_2->left);
    FUNC_0 (VAR_2);
    return VAR_2;
  }
}
