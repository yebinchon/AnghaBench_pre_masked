
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ x; struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef TYPE_1__ tree_t ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;

tree_t* FUNC_4 () {
  if (FUNC_2 () == 0) {
    return 0;
  }
  int VAR_0 = FUNC_3 ();
  int VAR_1 = FUNC_3 ();
  tree_t *VAR_2 = FUNC_1 (VAR_0, VAR_1);
  VAR_2->left = FUNC_4 ();
  VAR_2->right = FUNC_4 ();
  if (VAR_2->left) { FUNC_0 (VAR_2->left->x < VAR_2->x); }
  if (VAR_2->right) { FUNC_0 (VAR_2->right->x > VAR_2->x); }
  return VAR_2;
}
