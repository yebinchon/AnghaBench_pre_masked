
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int y; int x; struct TYPE_6__* right; struct TYPE_6__* left; } ;
typedef TYPE_1__ tree_t ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (int,int,void*) ;

__attribute__((used)) static tree_t *FUNC_1 (tree_t *VAR_1, int VAR_2, int VAR_3, void *VAR_4) {
  tree_t *VAR_5 = VAR_1, **VAR_6 = &VAR_5, **VAR_7, **VAR_8;

  while (VAR_1 && VAR_1->y >= VAR_3) {
    VAR_6 = (VAR_2 < VAR_1->x) ? &VAR_1->left : &VAR_1->right;
    VAR_1 = *VAR_6;
  }

  *VAR_6 = VAR_0 = FUNC_0 (VAR_2, VAR_3, VAR_4);


  VAR_7 = &(*VAR_6)->left;
  VAR_8 = &(*VAR_6)->right;

  while (VAR_1) {
    if (VAR_2 < VAR_1->x) {
      *VAR_8 = VAR_1;
      VAR_8 = &VAR_1->left;
      VAR_1 = *VAR_8;
    } else {
      *VAR_7 = VAR_1;
      VAR_7 = &VAR_1->right;
      VAR_1 = *VAR_7;
    }
  }

  *VAR_7 = *VAR_8 = 0;

  return VAR_5;
}
