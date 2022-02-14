
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct binary_operation_iterator {int pos; int jump_to; TYPE_1__* A; } ;
typedef scalar_t__ iterator_t ;
struct TYPE_2__ {int (* jump_to ) (TYPE_1__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;

int FUNC_1 (iterator_t VAR_2, int VAR_3) {
  struct binary_operation_iterator *VAR_4 = (struct binary_operation_iterator *) VAR_2;
  int VAR_5 = VAR_4->A->jump_to (VAR_4->A, VAR_3);
  if (VAR_5 == VAR_0) {
    VAR_4->jump_to = VAR_1;
  }
  return VAR_4->pos = VAR_5;
}
