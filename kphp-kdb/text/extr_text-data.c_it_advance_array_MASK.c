
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iterator {size_t array_cnt; int tree_x; int x; scalar_t__ array_x; scalar_t__* array_ptr; } ;


 int FUNC_0 (struct iterator*) ;

__attribute__((used)) static inline void FUNC_1 (struct iterator *VAR_0) {
  if (VAR_0->array_cnt) {
    VAR_0->array_x = VAR_0->array_ptr[--VAR_0->array_cnt];
    FUNC_0 (VAR_0);
  } else {
    VAR_0->array_x = 0;
    VAR_0->x = VAR_0->tree_x;
  }
}
