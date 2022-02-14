
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ y; struct TYPE_5__* left; struct TYPE_5__* right; } ;
typedef TYPE_1__ ltree_t ;



__attribute__((used)) static ltree_t *FUNC_0 (ltree_t *VAR_0, ltree_t *VAR_1) {
  ltree_t *VAR_2, **VAR_3 = &VAR_2;

  while (VAR_0 && VAR_1) {
    if (VAR_0->y > VAR_1->y) {
      *VAR_3 = VAR_0;
      VAR_3 = &VAR_0->right;
      VAR_0 = *VAR_3;
    } else {
      *VAR_3 = VAR_1;
      VAR_3 = &VAR_1->left;
      VAR_1 = *VAR_3;
    }
  }

  *VAR_3 = VAR_0 ? VAR_0 : VAR_1;

  return VAR_2;
}
