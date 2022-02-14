
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ y; struct TYPE_7__* left; struct TYPE_7__* right; } ;
typedef TYPE_1__ ltree_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,long long,int) ;
 scalar_t__ FUNC_2 (long long,int,TYPE_1__*) ;

__attribute__((used)) static ltree_t *FUNC_3 (ltree_t *VAR_0, long long VAR_1, int VAR_2) {
  ltree_t *VAR_3 = VAR_0, **VAR_4 = &VAR_3, *VAR_5, *VAR_6;

  while (VAR_0 && !FUNC_1 (VAR_0, VAR_1, VAR_2)) {
    VAR_4 = FUNC_2 (VAR_1, VAR_2, VAR_0) ? &VAR_0->left : &VAR_0->right;
    VAR_0 = *VAR_4;
  }

  if (!VAR_0) {
    return VAR_3;
  }

  VAR_5 = VAR_0->left;
  VAR_6 = VAR_0->right;
  FUNC_0 (VAR_0);

  while (VAR_5 && VAR_6) {
    if (VAR_5->y > VAR_6->y) {
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

  return VAR_3;
}
