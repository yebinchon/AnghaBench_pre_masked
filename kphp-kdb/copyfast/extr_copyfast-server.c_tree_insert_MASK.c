
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {long long data; int size; long long x; int y; struct TYPE_8__* right; struct TYPE_8__* left; } ;
typedef TYPE_1__ tree_t ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (long long,int) ;
 int FUNC_2 (TYPE_1__**,TYPE_1__**,TYPE_1__*,long long) ;

__attribute__((used)) static tree_t *FUNC_3 (tree_t *VAR_0, long long VAR_1, int VAR_2, long long VAR_3) {
  tree_t *VAR_4;
  if (!VAR_0) {
    VAR_4 = FUNC_1 (VAR_1, VAR_2);
    VAR_4->data = VAR_3;
    VAR_4->size = 1;
    return VAR_4;
  }
  FUNC_0 (VAR_1 != VAR_0->x);
  if (VAR_0->y >= VAR_2) {
    if (VAR_1 < VAR_0->x) {
      VAR_0->left = FUNC_3 (VAR_0->left, VAR_1, VAR_2, VAR_3);
    } else {
      VAR_0->right = FUNC_3 (VAR_0->right, VAR_1, VAR_2, VAR_3);
    }
    VAR_0->size = 1 + (VAR_0->left ? VAR_0->left->size : 0) + (VAR_0->right ? VAR_0->right->size : 0);
    return VAR_0;
  }
  VAR_4 = FUNC_1 (VAR_1, VAR_2);
  VAR_4->data = VAR_3;
  FUNC_2 (&VAR_4->left, &VAR_4->right, VAR_0, VAR_1);
  VAR_4->size = 1 + (VAR_4->left ? VAR_4->left->size : 0) + (VAR_4->right ? VAR_4->right->size : 0);
  return VAR_4;
}
