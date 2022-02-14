
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_ext_t ;
struct iterator_stack_node {int * node; struct iterator_stack_node* prev; } ;
struct iterator {struct iterator_stack_node* top; } ;


 struct iterator_stack_node* FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1 (struct iterator *VAR_0, tree_ext_t *VAR_1) {
  struct iterator_stack_node *VAR_2 = FUNC_0 ();
  if (VAR_2) {
    VAR_2->prev = VAR_0->top;
    VAR_2->node = VAR_1;
    VAR_0->top = VAR_2;
  }
}
