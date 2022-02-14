
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; scalar_t__ right; scalar_t__ left; } ;
typedef TYPE_1__ tree_t ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static tree_t *FUNC_1 (int VAR_0, int VAR_1) {
  tree_t *VAR_2 = FUNC_0 (sizeof (tree_t));
  VAR_2->left = VAR_2->right = 0;
  VAR_2->x = VAR_0;
  VAR_2->y = VAR_1;
  return VAR_2;
}
