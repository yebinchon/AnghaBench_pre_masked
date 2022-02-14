
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binary_operation_iterator {int pos; void* B; void* A; int (* jump_to ) (void*,int ) ;} ;
typedef void* iterator_t ;


 int FUNC_0 (void*,int ) ;
 struct binary_operation_iterator* FUNC_1 (int) ;

iterator_t FUNC_2 (iterator_t VAR_0, iterator_t VAR_1) {
  struct binary_operation_iterator *VAR_2 = FUNC_1 (sizeof (struct binary_operation_iterator));
  VAR_2->jump_to = FUNC_0;
  VAR_2->pos = -1;
  VAR_2->A = VAR_0;
  VAR_2->B = VAR_1;
  FUNC_0 ((iterator_t) VAR_2, 0);
  return (iterator_t) VAR_2;
}
