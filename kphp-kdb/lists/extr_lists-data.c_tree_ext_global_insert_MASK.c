
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int y; scalar_t__ x; struct TYPE_9__* right; struct TYPE_9__* left; } ;
typedef TYPE_1__ tree_ext_global_t ;
typedef scalar_t__ global_id_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**,TYPE_1__**,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static tree_ext_global_t *FUNC_3 (tree_ext_global_t *VAR_0, global_id_t VAR_1, int VAR_2, tree_ext_global_t *VAR_3) {
  if (VAR_0->y > VAR_2) {
    if (VAR_1 < VAR_0->x) {
      VAR_0->left = FUNC_3 (VAR_0->left, VAR_1, VAR_2, VAR_3);
    } else {

      VAR_0->right = FUNC_3 (VAR_0->right, VAR_1, VAR_2, VAR_3);
    }
    FUNC_1 (VAR_0);
    return VAR_0;
  }
  FUNC_0 (VAR_3->x == VAR_1 && VAR_3->y == VAR_2);
  FUNC_2 (&VAR_3->left, &VAR_3->right, VAR_0, VAR_1);
  FUNC_1 (VAR_3);
  return VAR_3;
}
