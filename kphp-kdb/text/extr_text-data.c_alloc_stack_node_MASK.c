
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iterator_stack_node {struct iterator_stack_node* prev; } ;


 scalar_t__ VAR_0 ;
 struct iterator_stack_node* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline struct iterator_stack_node *FUNC_0 (void) {
  if (VAR_1) {
    struct iterator_stack_node *VAR_3 = VAR_1;
    VAR_1 = VAR_3->prev;
    return VAR_3;
  } else if (VAR_0 < VAR_2) {
    return VAR_0++;
  } else {
    return 0;
  }
}
