
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int y; int x; struct TYPE_9__* right; struct TYPE_9__* left; } ;
typedef TYPE_1__ tree_ext_t ;


 TYPE_1__* FUNC_0 (int,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**,TYPE_1__**,TYPE_1__*,int) ;

__attribute__((used)) static tree_ext_t *FUNC_3 (tree_ext_t *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
  tree_ext_t *VAR_4;
  if (VAR_0->y > VAR_2) {
    if (VAR_1 < VAR_0->x) {
      VAR_0->left = FUNC_3 (VAR_0->left, VAR_1, VAR_2, VAR_3);
    } else {
      VAR_0->right = FUNC_3 (VAR_0->right, VAR_1, VAR_2, VAR_3);
    }
    FUNC_1 (VAR_0);
    return VAR_0;
  }
  VAR_4 = FUNC_0 (VAR_1, VAR_2, VAR_3);
  FUNC_2 (&VAR_4->left, &VAR_4->right, VAR_0, VAR_1);
  FUNC_1 (VAR_4);
  return VAR_4;
}
