
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int x; struct TYPE_10__* right; struct TYPE_10__* left; } ;
typedef TYPE_1__ tree_ext_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static tree_ext_t *FUNC_4 (tree_ext_t *VAR_1, int VAR_2) {
  FUNC_0 (VAR_1 != VAR_0);
  if (VAR_1->x == VAR_2) {
    tree_ext_t *VAR_3 = FUNC_2 (VAR_1->left, VAR_1->right);
    FUNC_1 (VAR_1);
    return VAR_3;
  }
  if (VAR_2 < VAR_1->x) {
    VAR_1->left = FUNC_4 (VAR_1->left, VAR_2);
  } else {
    VAR_1->right = FUNC_4 (VAR_1->right, VAR_2);
  }
  FUNC_3 (VAR_1);
  return VAR_1;
}
