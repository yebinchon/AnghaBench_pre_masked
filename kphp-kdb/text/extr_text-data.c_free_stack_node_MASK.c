
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iterator_stack_node {struct iterator_stack_node* prev; } ;


 struct iterator_stack_node* VAR_0 ;

__attribute__((used)) static inline void FUNC_0 (struct iterator_stack_node *VAR_1) {
  VAR_1->prev = VAR_0;
  VAR_0 = VAR_1;
}
