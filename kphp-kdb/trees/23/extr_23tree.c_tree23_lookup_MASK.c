
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x1; int x2; struct TYPE_3__* middle; struct TYPE_3__* left; struct TYPE_3__* right; } ;
typedef TYPE_1__ tree23_t ;



__attribute__((used)) static int FUNC_0 (tree23_t *VAR_0, int VAR_1) {
  if (!VAR_0) return 0;
  while (!(VAR_0->x1 & 1)) {
    if (VAR_1 > VAR_0->x2) VAR_0 = VAR_0->right;
    else
    if (VAR_1 < VAR_0->x1) VAR_0 = VAR_0->left;
    else
    if (VAR_1 == VAR_0->x1) return 1;
    else
    if (VAR_1 < (VAR_0->x2 & -2)) VAR_0 = VAR_0->middle;
    else
    return 1;
  }
  return (VAR_1 == (VAR_0->x1 & -2)) || (VAR_1 == (VAR_0->x2 & -2));
}
