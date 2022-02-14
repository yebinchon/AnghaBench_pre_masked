
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ tree_t ;



__attribute__((used)) static void FUNC_0 (tree_t **VAR_0, tree_t **VAR_1, tree_t *VAR_2, int VAR_3) {
  while (VAR_2) {
    if (VAR_3 < VAR_2->x) {
      *VAR_1 = VAR_2;
      VAR_1 = &VAR_2->left;
      VAR_2 = *VAR_1;
    } else {
      *VAR_0 = VAR_2;
      VAR_0 = &VAR_2->right;
      VAR_2 = *VAR_0;
    }
  }
  *VAR_0 = *VAR_1 = 0;
}
