
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* right; struct TYPE_10__* left; int x; } ;
typedef TYPE_1__ tree_ext_small_t ;
typedef int object_id_t ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static tree_ext_small_t *FUNC_4 (tree_ext_small_t *VAR_2, object_id_t VAR_3) {
  FUNC_0 (VAR_2 != VAR_1);
  int VAR_4 = FUNC_1 (VAR_3, VAR_2->x);
  if (!VAR_4) {
    tree_ext_small_t *VAR_5 = FUNC_2 (VAR_2->left, VAR_2->right);
    VAR_0 = VAR_2;
    return VAR_5;
  }
  if (VAR_4 < 0) {
    VAR_2->left = FUNC_4 (VAR_2->left, VAR_3);
  } else {
    VAR_2->right = FUNC_4 (VAR_2->right, VAR_3);
  }
  FUNC_3 (VAR_2);
  return VAR_2;
}
