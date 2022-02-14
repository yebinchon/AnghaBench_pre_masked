
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iterator {scalar_t__ array_x; scalar_t__ tree_x; scalar_t__ x; } ;



__attribute__((used)) static inline void FUNC_0 (struct iterator *VAR_0) {
  if (VAR_0->array_x > VAR_0->tree_x) {
    VAR_0->x = VAR_0->array_x;
  } else {
    VAR_0->x = VAR_0->tree_x;
  }
}
