
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x1; int* extra; scalar_t__ x2; struct TYPE_4__* right; struct TYPE_4__* middle; struct TYPE_4__* left; } ;
typedef TYPE_1__ tree23_t ;
struct TYPE_5__ {int* extra; } ;
typedef TYPE_2__ tree23_leaf_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char) ;

__attribute__((used)) static void FUNC_2 (tree23_t *VAR_0, int VAR_1, int VAR_2) {
  int VAR_3;
  if (!VAR_0) return;
  FUNC_0 ("[ ");
  if (VAR_1--) {
    FUNC_2 (VAR_0->left, VAR_1, VAR_2);
    FUNC_0 ("%d", VAR_0->x1);
    for (VAR_3 = -VAR_2; VAR_3 < 0; VAR_3++) {
      FUNC_0 (":%d", VAR_0->extra[VAR_3]);
    }
    FUNC_1 (' ');
    if (VAR_0->x2 > VAR_0->x1) {
      FUNC_2 (VAR_0->middle, VAR_1, VAR_2);
      FUNC_0 ("%d", VAR_0->x2);
      for (VAR_3 = -2*VAR_2; VAR_3 < -VAR_2; VAR_3++) {
        FUNC_0 (":%d", VAR_0->extra[VAR_3]);
      }
      FUNC_1 (' ');
    }
    FUNC_2 (VAR_0->right, VAR_1, VAR_2);
  } else {
    FUNC_0 ("%d", VAR_0->x1);
    for (VAR_3 = -VAR_2; VAR_3 < 0; VAR_3++) {
      FUNC_0 (":%d", ((tree23_leaf_t *) VAR_0)->extra[VAR_3]);
    }
    FUNC_1 (' ');
    if (VAR_0->x2 > VAR_0->x1) {
      FUNC_0 ("%d", VAR_0->x2);
      for (VAR_3 = -2*VAR_2; VAR_3 < -VAR_2; VAR_3++) {
        FUNC_0 (":%d", ((tree23_leaf_t *) VAR_0)->extra[VAR_3]);
      }
      FUNC_1 (' ');
    }
  }
  FUNC_0 ("] ");
}
