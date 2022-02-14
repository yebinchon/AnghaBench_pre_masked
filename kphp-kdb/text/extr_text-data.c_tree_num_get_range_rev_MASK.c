
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int N; struct TYPE_4__* left; int z; int x; struct TYPE_4__* right; } ;
typedef TYPE_1__ tree_num_t ;


 TYPE_1__* VAR_0 ;

int *FUNC_0 (tree_num_t *VAR_1, int *VAR_2, int VAR_3, int VAR_4) {
  if (VAR_1 == VAR_0) {
    return VAR_2;
  }
  if (VAR_3 <= VAR_1->right->N) {
    VAR_2 = FUNC_0 (VAR_1->right, VAR_2, VAR_3, VAR_4);
  }
  VAR_3 -= VAR_1->right->N + 1;
  VAR_4 -= VAR_1->right->N + 1;
  if (VAR_4 >= 0 && VAR_3 <= 0) {
    *VAR_2++ = VAR_1->x;
    *VAR_2++ = VAR_1->z;
  }
  if (VAR_4 > 0) {
    VAR_2 = FUNC_0 (VAR_1->left, VAR_2, VAR_3, VAR_4);
  }
  return VAR_2;
}
