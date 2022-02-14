
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ x; int cat; struct TYPE_3__* right; struct TYPE_3__* left; } ;
typedef TYPE_1__ tree_t ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static void FUNC_0 (tree_t *VAR_2, int VAR_3) {
  if (!VAR_2) {
    return;
  }
  FUNC_0 (VAR_2->left, VAR_3);
  while (VAR_0 < VAR_1 && *VAR_0 < VAR_2->x) {
    VAR_0++;
  }
  if (VAR_0 < VAR_1 && VAR_2->x == *VAR_0) {
    VAR_2->cat |= VAR_3;
    VAR_0++;
  } else {
    VAR_2->cat &= ~VAR_3;
  }
  FUNC_0 (VAR_2->right, VAR_3);
}
