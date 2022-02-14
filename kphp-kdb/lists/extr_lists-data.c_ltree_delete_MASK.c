
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ltree_x_t ;
struct TYPE_5__ {scalar_t__ y; struct TYPE_5__* left; struct TYPE_5__* right; int x; } ;
typedef TYPE_1__ ltree_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static ltree_t *FUNC_2 (ltree_t *VAR_0, ltree_x_t VAR_1) {
  if (!VAR_0) {
    return 0;
  }
  ltree_t *VAR_2 = VAR_0, **VAR_3 = &VAR_2, *VAR_4, *VAR_5;
  if (!VAR_0) {
    return 0;
  }

  int VAR_6;

  while ((VAR_6 = FUNC_1 (VAR_1, VAR_0->x)) != 0) {
    VAR_3 = (VAR_6 < 0) ? &VAR_0->left : &VAR_0->right;
    VAR_0 = *VAR_3;
    if (!VAR_0) {
      return VAR_2;
    }
  }

  VAR_4 = VAR_0->left;
  VAR_5 = VAR_0->right;
  FUNC_0 (VAR_0);

  while (VAR_4 && VAR_5) {
    if (VAR_4->y > VAR_5->y) {
      *VAR_3 = VAR_4;
      VAR_3 = &VAR_4->right;
      VAR_4 = *VAR_3;
    } else {
      *VAR_3 = VAR_5;
      VAR_3 = &VAR_5->left;
      VAR_5 = *VAR_3;
    }
  }

  *VAR_3 = VAR_4 ? VAR_4 : VAR_5;

  return VAR_2;
}
