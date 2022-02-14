
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; int y; scalar_t__ right; scalar_t__ left; } ;
typedef TYPE_1__ tree_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;

tree_t *FUNC_2 (int VAR_1, int VAR_2) {
  tree_t *VAR_3;
  VAR_3 = FUNC_1 (sizeof (tree_t));
  FUNC_0 (VAR_3);
  VAR_0++;
  VAR_3->left = VAR_3->right = 0;
  VAR_3->x = VAR_1;
  VAR_3->y = VAR_2;
  return VAR_3;
}
