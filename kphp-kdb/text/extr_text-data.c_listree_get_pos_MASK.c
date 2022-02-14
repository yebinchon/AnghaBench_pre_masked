
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rpos; int y; int x; int delta; struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ tree_ext_t ;
struct TYPE_6__ {int N; int* A; TYPE_1__* root; } ;
typedef TYPE_2__ listree_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_1 (listree_t *VAR_4, int VAR_5, int VAR_6) {
  tree_ext_t *VAR_7 = VAR_4->root;
  int VAR_8 = VAR_4->N;
  int VAR_9 = 0, VAR_10 = 0, VAR_11 = VAR_8 - 1;
  while (VAR_7 != VAR_0) {
    int VAR_12 = VAR_8 - VAR_7->rpos;

    int VAR_13 = VAR_7->y & 3;
    if (VAR_5 < VAR_7->x) {
      VAR_7 = VAR_7->left;
      VAR_11 = VAR_12 - 1;
    } else if (VAR_5 == VAR_7->x) {
      FUNC_0 (VAR_6 || VAR_13 != VAR_1);
      return VAR_12 + VAR_9 + VAR_7->left->delta - (VAR_13 == VAR_1);
    } else {
      VAR_10 = VAR_12 + (VAR_13 != VAR_2);
      VAR_9 += VAR_7->left->delta + VAR_3[VAR_13];
      VAR_7 = VAR_7->right;
    }
  }
  FUNC_0 (VAR_10 >= 0 && VAR_10 <= VAR_11 + VAR_6 && VAR_11 < VAR_8);
  VAR_11++;
  VAR_10--;
  if (!VAR_4->A && VAR_11 - VAR_10 > 1) {
    return -2;
  }
  while (VAR_11 - VAR_10 > 1) {
    int VAR_14 = (VAR_10 + VAR_11) >> 1;

    if (VAR_5 < VAR_4->A[VAR_14]) {
      VAR_11 = VAR_14;
    } else if (VAR_5 > VAR_4->A[VAR_14]) {
      VAR_10 = VAR_14;
    } else {
      VAR_14 += VAR_9;
      FUNC_0 (VAR_14 >= 0 && VAR_14 < VAR_8 + VAR_4->root->delta);
      return VAR_14;
    }
  }
  FUNC_0 (VAR_6);
  return VAR_10 + VAR_9;
}
