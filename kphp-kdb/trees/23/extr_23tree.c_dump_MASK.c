
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x1; int x2; struct TYPE_3__* right; struct TYPE_3__* middle; struct TYPE_3__* left; } ;
typedef TYPE_1__ tree23_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1 (tree23_t *VAR_0) {
  if (!VAR_0) return;
  FUNC_0 ("[ ");
  if (!(VAR_0->x1 & 1)) {
    FUNC_1 (VAR_0->left);
    FUNC_0 ("%d ", VAR_0->x1);
    if (!(VAR_0->x2 & 1)) {
      FUNC_1 (VAR_0->middle);
      FUNC_0 ("%d ", VAR_0->x2);
    }
    FUNC_1 (VAR_0->right);
  } else {
    FUNC_0 ("%d ", VAR_0->x1);
    if (!(VAR_0->x2 & 1)) FUNC_0 ("%d ", VAR_0->x2);
  }
  FUNC_0 ("] ");
}
