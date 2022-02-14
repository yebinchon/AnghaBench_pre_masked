
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* right; struct TYPE_7__* left; int x; } ;
typedef TYPE_1__ tree_ext_small_t ;
typedef int object_id_t ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2 (tree_ext_small_t **VAR_1, tree_ext_small_t **VAR_2, tree_ext_small_t *VAR_3, object_id_t VAR_4) {
  if (VAR_3 == VAR_0) { *VAR_1 = *VAR_2 = VAR_0; return; }
  if (FUNC_0 (VAR_4, VAR_3->x)) {
    *VAR_2 = VAR_3;
    FUNC_2 (VAR_1, &VAR_3->left, VAR_3->left, VAR_4);
  } else {
    *VAR_1 = VAR_3;
    FUNC_2 (&VAR_3->right, VAR_2, VAR_3->right, VAR_4);
  }
  FUNC_1 (VAR_3);
}
