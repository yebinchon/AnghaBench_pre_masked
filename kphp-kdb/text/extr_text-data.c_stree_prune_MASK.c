
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int y; struct TYPE_8__* left; struct TYPE_8__* right; } ;
typedef TYPE_1__ stree_t ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static stree_t *FUNC_1 (stree_t *VAR_1, int VAR_2) {
  if (!VAR_1 || VAR_1->y >= VAR_2) {
    return VAR_1;
  }
  stree_t *VAR_3 = FUNC_0 (FUNC_1 (VAR_1->left, VAR_2), FUNC_1 (VAR_1->right, VAR_2));
  VAR_1->left = VAR_0;
  VAR_0 = VAR_1;
  return VAR_3;
}
