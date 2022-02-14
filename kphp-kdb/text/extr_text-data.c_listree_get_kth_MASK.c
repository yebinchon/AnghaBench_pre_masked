
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int delta; int rpos; int y; int x; struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ tree_ext_t ;
struct TYPE_6__ {int N; int* A; TYPE_1__* root; } ;
typedef TYPE_2__ listree_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__* VAR_2 ;

int FUNC_1 (listree_t *VAR_3, int VAR_4) {
  tree_ext_t *VAR_5 = VAR_3->root;
  if (VAR_4 < 0 || VAR_4 >= VAR_3->N + VAR_5->delta) {
    return -1;
  }
  int VAR_6 = VAR_4;
  while (VAR_5 != VAR_0) {

    if (VAR_6 < VAR_3->N - VAR_5->rpos + VAR_5->left->delta) {
      VAR_5 = VAR_5->left;
    } else if (VAR_6 == VAR_3->N - VAR_5->rpos + VAR_5->left->delta && (VAR_5->y & 3) != VAR_1) {
      return VAR_5->x;
    } else {
      VAR_6 -= VAR_5->left->delta + VAR_2[VAR_5->y & 3];
      VAR_5 = VAR_5->right;
    }
  }
  FUNC_0 (VAR_6 >= 0 && VAR_6 < VAR_3->N);
  if (!VAR_3->A) {
    return -2;
  } else {
    return VAR_3->A[VAR_6];
  }
}
