
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int* extra; struct TYPE_3__* right; struct TYPE_3__* left; } ;
typedef TYPE_1__ rbtree_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char) ;

__attribute__((used)) static void FUNC_2 (rbtree_t *VAR_0, int VAR_1) {
  int VAR_2;
  if (!VAR_0) return;
  FUNC_0 ("[ ");
  FUNC_2 (VAR_0->left, VAR_1);

  FUNC_0 ("%d", VAR_0->x);

  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
    FUNC_0 (":%d", VAR_0->extra[VAR_2]);
  }

  FUNC_1 (' ');

  FUNC_2 (VAR_0->right, VAR_1);
  FUNC_0 ("] ");
}
