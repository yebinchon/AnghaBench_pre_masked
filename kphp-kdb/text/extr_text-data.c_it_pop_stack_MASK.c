
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_ext_t ;
struct iterator_stack_node {int * node; struct iterator_stack_node* prev; } ;
struct iterator {struct iterator_stack_node* top; } ;


 int FUNC_0 (struct iterator_stack_node*) ;

__attribute__((used)) static inline tree_ext_t *FUNC_1 (struct iterator *VAR_0) {
  struct iterator_stack_node *VAR_1 = VAR_0->top;
  VAR_0->top = VAR_1->prev;
  FUNC_0 (VAR_1);
  return VAR_1->node;
}
