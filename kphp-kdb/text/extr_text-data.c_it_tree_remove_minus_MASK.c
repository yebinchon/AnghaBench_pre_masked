
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iterator {scalar_t__ tree_x; scalar_t__ array_x; TYPE_1__* node; } ;
struct TYPE_2__ {int y; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iterator*) ;
 int FUNC_2 (struct iterator*) ;

__attribute__((used)) static inline void FUNC_3 (struct iterator *VAR_1) {
  while (VAR_1->tree_x == VAR_1->array_x && VAR_1->tree_x > 0) {
    FUNC_0 ((VAR_1->node->y & 3) == VAR_0);
    FUNC_2 (VAR_1);
    FUNC_1 (VAR_1);
  }
}
