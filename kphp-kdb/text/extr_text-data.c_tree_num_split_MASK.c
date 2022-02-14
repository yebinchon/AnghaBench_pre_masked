
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int x; struct TYPE_7__* right; struct TYPE_7__* left; } ;
typedef TYPE_1__ tree_num_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1 (tree_num_t **VAR_1, tree_num_t **VAR_2, tree_num_t *VAR_3, int VAR_4) {
  if (VAR_3 == VAR_0) { *VAR_1 = *VAR_2 = VAR_0; return; }
  if (VAR_3->x >= VAR_4) {
    *VAR_2 = VAR_3;
    FUNC_1 (VAR_1, &VAR_3->left, VAR_3->left, VAR_4);
  } else {
    *VAR_1 = VAR_3;
    FUNC_1 (&VAR_3->right, VAR_2, VAR_3->right, VAR_4);
  }
  FUNC_0 (VAR_3);
}
