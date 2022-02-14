
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ x; struct TYPE_10__* right; struct TYPE_10__* left; } ;
typedef TYPE_1__ tree_ext_global_t ;
typedef scalar_t__ global_id_t ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static tree_ext_global_t *FUNC_3 (tree_ext_global_t *VAR_2, global_id_t VAR_3) {
  FUNC_0 (VAR_2 != VAR_1);
  if (VAR_2->x == VAR_3) {
    tree_ext_global_t *VAR_4 = FUNC_1 (VAR_2->left, VAR_2->right);
    VAR_0 = VAR_2;
    return VAR_4;
  }
  if (VAR_3 < VAR_2->x) {
    VAR_2->left = FUNC_3 (VAR_2->left, VAR_3);
  } else {
    VAR_2->right = FUNC_3 (VAR_2->right, VAR_3);
  }
  FUNC_2 (VAR_2);
  return VAR_2;
}
