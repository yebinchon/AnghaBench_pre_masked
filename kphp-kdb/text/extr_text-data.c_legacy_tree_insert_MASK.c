
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int y; struct TYPE_6__* right; struct TYPE_6__* left; } ;
typedef TYPE_1__ ltree_t ;


 scalar_t__ FUNC_0 (long long,int,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (long long,int,int) ;

__attribute__((used)) static ltree_t *FUNC_2 (ltree_t *VAR_0, long long VAR_1, int VAR_2, int VAR_3) {
  ltree_t *VAR_4 = VAR_0, **VAR_5 = &VAR_4, **VAR_6, **VAR_7;

  while (VAR_0 && VAR_0->y >= VAR_2) {
    VAR_5 = FUNC_0 (VAR_1, VAR_3, VAR_0) ? &VAR_0->left : &VAR_0->right;
    VAR_0 = *VAR_5;
  }

  *VAR_5 = FUNC_1 (VAR_1, VAR_2, VAR_3);


  VAR_6 = &(*VAR_5)->left;
  VAR_7 = &(*VAR_5)->right;

  while (VAR_0) {
    if (FUNC_0 (VAR_1, VAR_3, VAR_0)) {
      *VAR_7 = VAR_0;
      VAR_7 = &VAR_0->left;
      VAR_0 = *VAR_7;
    } else {
      *VAR_6 = VAR_0;
      VAR_6 = &VAR_0->right;
      VAR_0 = *VAR_6;
    }
  }

  *VAR_6 = *VAR_7 = 0;

  return VAR_4;
}
