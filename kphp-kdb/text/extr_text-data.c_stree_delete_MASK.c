
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; scalar_t__ y; struct TYPE_5__* left; struct TYPE_5__* right; } ;
typedef TYPE_1__ stree_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static stree_t *FUNC_1 (stree_t *VAR_1, int VAR_2) {
  stree_t *VAR_3 = VAR_1, **VAR_4 = &VAR_3, *VAR_5, *VAR_6;

  while (VAR_1 && VAR_2 != VAR_1->x) {
    VAR_4 = (VAR_2 < VAR_1->x) ? &VAR_1->left : &VAR_1->right;
    VAR_1 = *VAR_4;
  }

  if (!VAR_1) {
    VAR_0 = 0;
    return VAR_3;
  }

  VAR_5 = VAR_1->left;
  VAR_6 = VAR_1->right;
  FUNC_0 (VAR_1);

  while (VAR_5 && VAR_6) {
    if (VAR_5->y < VAR_6->y) {
      *VAR_4 = VAR_5;
      VAR_4 = &VAR_5->right;
      VAR_5 = *VAR_4;
    } else {
      *VAR_4 = VAR_6;
      VAR_4 = &VAR_6->left;
      VAR_6 = *VAR_4;
    }
  }

  *VAR_4 = VAR_5 ? VAR_5 : VAR_6;

  VAR_0 = -1;
  return VAR_3;
}
