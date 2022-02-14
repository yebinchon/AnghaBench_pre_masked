
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rpos; int delta; int y; int x; struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef TYPE_1__ tree_ext_t ;


 TYPE_1__* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int* VAR_3 ;

int FUNC_1 (int *VAR_4, tree_ext_t *VAR_5, int VAR_6, int VAR_7, int VAR_8) {
  if (VAR_7 > VAR_8) {
    return 1;
  }
  if (VAR_5 == VAR_0) {
    FUNC_0 (VAR_7 <= VAR_8);
    if (!VAR_4) {
      return -2;
    }
    while (VAR_7 <= VAR_8) {
      *--VAR_1 = VAR_4[VAR_7++];
    }
    return 1;
  }
  int VAR_9 = VAR_6 - VAR_5->rpos + VAR_5->left->delta;
  int VAR_10 = VAR_9 + ((VAR_5->y & 3) == VAR_2 ? 0 : 1);
  int VAR_11 = VAR_5->left->delta + VAR_3[VAR_5->y & 3];
  if (VAR_8 < VAR_9) {
    return FUNC_1 (VAR_4, VAR_5->left, VAR_6, VAR_7, VAR_8);
  }
  if (VAR_7 >= VAR_10) {
    return FUNC_1 (VAR_4, VAR_5->right, VAR_6, VAR_7 - VAR_11, VAR_8 - VAR_11);
  }
  if (FUNC_1 (VAR_4, VAR_5->left, VAR_6, VAR_7, VAR_9-1) < 0) {
    return -2;
  }

  if (VAR_9 < VAR_10) {
    *--VAR_1 = VAR_5->x;
  }
  return FUNC_1 (VAR_4, VAR_5->right, VAR_6, VAR_10 - VAR_11, VAR_8 - VAR_11);
}
