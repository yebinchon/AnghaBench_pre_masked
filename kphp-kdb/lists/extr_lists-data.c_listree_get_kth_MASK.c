
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int delta; struct TYPE_9__* right; struct TYPE_9__* left; } ;
typedef TYPE_1__ tree_ext_small_t ;
struct TYPE_10__ {int N; TYPE_1__** root; } ;
typedef TYPE_2__ listree_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (TYPE_1__*) ;
 size_t VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static int FUNC_5 (listree_t *VAR_3, int VAR_4) {
  tree_ext_small_t *VAR_5 = *VAR_3->root;
  int VAR_6 = VAR_3->N;
  if (VAR_4 < 0 || VAR_4 >= VAR_6 + VAR_5->delta) {
    return -1;
  }
  int VAR_7 = VAR_4;
  while (VAR_5 != VAR_0) {

    if (VAR_7 < VAR_6 - FUNC_0(VAR_5) + VAR_5->left->delta) {
      VAR_5 = VAR_5->left;
    } else if (VAR_7 == VAR_6 - FUNC_0(VAR_5) + VAR_5->left->delta && FUNC_1(VAR_5) != VAR_1) {
      return FUNC_4 (VAR_5);
    } else {
      VAR_7 -= VAR_5->left->delta + VAR_2[FUNC_1(VAR_5)];
      VAR_5 = VAR_5->right;
    }
  }
  FUNC_2 (VAR_7 >= 0 && VAR_7 < VAR_6);

  return FUNC_3 (VAR_3, VAR_7);
}
