
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ltree_x_t ;
struct TYPE_4__ {struct TYPE_4__* left; struct TYPE_4__* right; int x; } ;
typedef TYPE_1__ ltree_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static ltree_t *FUNC_1 (ltree_t *VAR_0, ltree_x_t VAR_1) {
  while (VAR_0) {
    int VAR_2 = FUNC_0 (VAR_1, VAR_0->x);
    if (!VAR_2) {
      return VAR_0;
    }
    VAR_0 = (VAR_2 > 0 ? VAR_0->right : VAR_0->left);
  }
  return VAR_0;
}
