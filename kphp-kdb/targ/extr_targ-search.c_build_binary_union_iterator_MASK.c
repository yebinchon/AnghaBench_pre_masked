
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct binary_operation_iterator {TYPE_1__* B; TYPE_1__* A; int pos; int jump_to; } ;
typedef TYPE_1__* iterator_t ;
struct TYPE_5__ {int pos; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct binary_operation_iterator* FUNC_1 (int) ;

iterator_t FUNC_2 (iterator_t VAR_1, iterator_t VAR_2) {
  struct binary_operation_iterator *VAR_3 = FUNC_1 (sizeof (struct binary_operation_iterator));
  VAR_3->jump_to = VAR_0;
  VAR_3->pos = FUNC_0 (VAR_1->pos, VAR_2->pos);
  VAR_3->A = VAR_1;
  VAR_3->B = VAR_2;
  return (iterator_t) VAR_3;
}
