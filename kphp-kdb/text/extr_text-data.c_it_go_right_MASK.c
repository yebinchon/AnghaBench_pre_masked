
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; struct TYPE_5__* right; } ;
typedef TYPE_1__ tree_ext_t ;
struct iterator {int tree_x; TYPE_1__* node; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct iterator*,TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1 (struct iterator *VAR_1, tree_ext_t *VAR_2) {
  while (VAR_2->right != VAR_0) {
    FUNC_0 (VAR_1, VAR_2);
    VAR_2 = VAR_2->right;
  }
  VAR_1->node = VAR_2;
  VAR_1->tree_x = VAR_2->x;
}
