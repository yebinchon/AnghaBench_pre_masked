
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x1; int x2; struct TYPE_3__* right; struct TYPE_3__* middle; struct TYPE_3__* left; } ;
typedef TYPE_1__ tree23_t ;



__attribute__((used)) static void FUNC_0 (tree23_t *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3) {
  if (!VAR_0) {
    *VAR_1 = 0; *VAR_2 = 0; *VAR_3 = 0;
    return;
  }
  if (VAR_0->x1 & 1) {
    ++*VAR_1;
    ++*VAR_3;
    if (!(VAR_0->x2 & 1)) ++*VAR_3;
  } else {
    ++*VAR_2;
    FUNC_0 (VAR_0->left, VAR_1, VAR_2, VAR_3);
    if (!(VAR_0->x2 & 1)) {
      ++*VAR_3;
      FUNC_0 (VAR_0->middle, VAR_1, VAR_2, VAR_3);
    }
    ++*VAR_3;
    FUNC_0 (VAR_0->right, VAR_1, VAR_2, VAR_3);
  }
}
