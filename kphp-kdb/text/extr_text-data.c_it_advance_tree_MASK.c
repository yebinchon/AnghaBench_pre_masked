
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ x; struct TYPE_6__* left; } ;
typedef TYPE_1__ tree_ext_t ;
struct iterator {int array_x; int x; scalar_t__ tree_x; TYPE_1__* node; scalar_t__ top; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct iterator*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct iterator*) ;
 int FUNC_3 (struct iterator*) ;

__attribute__((used)) static inline void FUNC_4 (struct iterator *VAR_1) {
  FUNC_0 (VAR_1->node);
  tree_ext_t *VAR_2 = VAR_1->node->left;
  if (VAR_2 != VAR_0) {
    FUNC_1 (VAR_1, VAR_2);
    FUNC_3 (VAR_1);
  } else if (VAR_1->top) {
    VAR_2 = FUNC_2 (VAR_1);
    VAR_1->node = VAR_2;
    VAR_1->tree_x = VAR_2->x;
    FUNC_3 (VAR_1);
  } else {
    VAR_1->node = 0;
    VAR_1->tree_x = 0;
    VAR_1->x = VAR_1->array_x;
  }
}
