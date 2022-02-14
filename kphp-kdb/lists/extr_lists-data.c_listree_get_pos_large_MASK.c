
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int delta; struct TYPE_7__* right; struct TYPE_7__* left; int x; } ;
typedef TYPE_1__ tree_ext_large_t ;
typedef int object_id_t ;
struct TYPE_8__ {int N; TYPE_1__** root; int A; } ;
typedef TYPE_2__ listree_direct_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_5 (listree_direct_t *VAR_4, object_id_t VAR_5, int VAR_6) {
  tree_ext_large_t *VAR_7 = *VAR_4->root;
  int VAR_8 = VAR_4->N;
  int VAR_9 = 0, VAR_10 = 0, VAR_11 = VAR_8 - 1;
  while (VAR_7 != VAR_0) {
    int VAR_12 = VAR_8 - FUNC_0(VAR_7);

    int VAR_13 = FUNC_4 (VAR_5, VAR_7->x);
    if (VAR_13 < 0) {
      VAR_7 = VAR_7->left;
      VAR_11 = VAR_12 - 1;
    } else if (!VAR_13) {
      FUNC_3 (VAR_6 || FUNC_1(VAR_7) != VAR_1);
      return VAR_12 + VAR_9 + VAR_7->left->delta - (FUNC_1(VAR_7) == VAR_1);
    } else {
      VAR_10 = VAR_12 + (FUNC_1(VAR_7) != VAR_2);
      VAR_9 += VAR_7->left->delta + VAR_3[FUNC_1(VAR_7)];
      VAR_7 = VAR_7->right;
    }
  }
  FUNC_3 (VAR_10 >= 0 && VAR_10 <= VAR_11 + VAR_6 && VAR_11 < VAR_8);
  VAR_11++;
  VAR_10--;
  while (VAR_11 - VAR_10 > 1) {
    int VAR_14 = (VAR_10 + VAR_11) >> 1;
    int VAR_15 = FUNC_4 (VAR_5, FUNC_2 (VAR_4->A, VAR_14));
    if (VAR_15 < 0) {
      VAR_11 = VAR_14;
    } else if (VAR_15 > 0) {
      VAR_10 = VAR_14;
    } else {
      VAR_14 += VAR_9;
      FUNC_3 (VAR_14 >= 0 && VAR_14 < VAR_8 + (*VAR_4->root)->delta);
      return VAR_14;
    }
  }
  FUNC_3 (VAR_6);
  return VAR_10 + VAR_9;
}
