
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; struct TYPE_3__* right; struct TYPE_3__* left; } ;
typedef TYPE_1__ tree_t ;


 int FUNC_0 (int) ;

int FUNC_1 (tree_t *VAR_0, int *VAR_1, int VAR_2, int **VAR_3, int *VAR_4, int VAR_5, int VAR_6) {
  if (!VAR_0) {
    return VAR_6;
  }
  if (VAR_0->left) { FUNC_0 (VAR_0->left->x < VAR_0->x); }
  if (VAR_0->right) { FUNC_0 (VAR_0->right->x > VAR_0->x); }
  FUNC_0 (*VAR_4 >= 0);
  VAR_6 = FUNC_1 (VAR_0->left, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

  while (*VAR_4 && (*VAR_3)[0] < VAR_0->x) {
    FUNC_0 (VAR_6 < VAR_2);
    VAR_1[2 * VAR_6 + 0] = (*VAR_3)[0];
    VAR_1[2 * VAR_6 + 1] = (*VAR_3)[1];
    (*VAR_4)--;
    (*VAR_3)+=2;
    VAR_6++;
  }
  FUNC_0 (VAR_6 < VAR_2);
  VAR_1[2 * VAR_6 + 0] = VAR_0->x;
  VAR_1[2 * VAR_6 + 1] = VAR_5;
  VAR_6++;
  if (*VAR_4 && (*VAR_3)[0] == VAR_0->x) {
    (*VAR_4)--;
    (*VAR_3)+=2;
  }
  FUNC_0 (!(*VAR_4) || (*VAR_3)[0] > VAR_0->x);
  return FUNC_1 (VAR_0->right, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
