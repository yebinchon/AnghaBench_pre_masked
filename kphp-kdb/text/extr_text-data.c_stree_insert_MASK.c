
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y; int x; struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ stree_t ;


 TYPE_1__* FUNC_0 (int,int) ;

__attribute__((used)) static stree_t *FUNC_1 (stree_t *VAR_0, int VAR_1, int VAR_2) {
  stree_t *VAR_3 = VAR_0, **VAR_4 = &VAR_3, **VAR_5, **VAR_6;

  while (VAR_0 && VAR_0->y <= VAR_2) {
    VAR_4 = (VAR_1 < VAR_0->x) ? &VAR_0->left : &VAR_0->right;
    VAR_0 = *VAR_4;
  }

  *VAR_4 = FUNC_0 (VAR_1, VAR_2);


  VAR_5 = &(*VAR_4)->left;
  VAR_6 = &(*VAR_4)->right;

  while (VAR_0) {
    if (VAR_1 < VAR_0->x) {
      *VAR_6 = VAR_0;
      VAR_6 = &VAR_0->left;
      VAR_0 = *VAR_6;
    } else {
      *VAR_5 = VAR_0;
      VAR_5 = &VAR_0->right;
      VAR_0 = *VAR_5;
    }
  }

  *VAR_5 = *VAR_6 = 0;

  return VAR_3;
}
