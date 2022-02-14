
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int delta; struct TYPE_10__* right; struct TYPE_10__* left; } ;
typedef TYPE_1__ tree_ext_small_t ;
struct TYPE_11__ {int N; } ;
typedef TYPE_2__ listree_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (TYPE_1__*) ;
 size_t VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_4 (tree_ext_small_t *VAR_3, listree_t *VAR_4, int VAR_5, int VAR_6) {
  if (VAR_5 > VAR_6) {
    return 1;
  }
  if (VAR_3 == VAR_0) {
    while (VAR_5 <= VAR_6) {
      FUNC_2 (VAR_4, VAR_5++);

    }
    return 1;
  }
  int VAR_7 = VAR_4->N;
  int VAR_8 = VAR_7 - FUNC_0(VAR_3) + VAR_3->left->delta;
  int VAR_9 = VAR_8 + (FUNC_1(VAR_3) == VAR_1 ? 0 : 1);
  int VAR_10 = VAR_3->left->delta + VAR_2[FUNC_1(VAR_3)];
  if (VAR_6 < VAR_8) {
    return FUNC_4 (VAR_3->left, VAR_4, VAR_5, VAR_6);
  }
  if (VAR_5 >= VAR_9) {
    return FUNC_4 (VAR_3->right, VAR_4, VAR_5 - VAR_10, VAR_6 - VAR_10);
  }
  if (FUNC_4 (VAR_3->left, VAR_4, VAR_5, VAR_8-1) < 0) {
    return -2;
  }

  if (VAR_8 < VAR_9) {
    FUNC_3 (VAR_3);

  }
  return FUNC_4 (VAR_3->right, VAR_4, VAR_9 - VAR_10, VAR_6 - VAR_10);
}
