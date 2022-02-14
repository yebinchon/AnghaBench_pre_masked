
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct binary_operation_iterator {int pos; int jump_to; TYPE_1__* B; TYPE_2__* A; } ;
typedef scalar_t__ iterator_t ;
struct TYPE_6__ {int pos; int (* jump_to ) (TYPE_2__*,int) ;} ;
struct TYPE_5__ {int pos; int (* jump_to ) (TYPE_1__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

int FUNC_4 (iterator_t VAR_2, int VAR_3) {
  struct binary_operation_iterator *VAR_4 = (struct binary_operation_iterator *) VAR_2;
  int VAR_5 = VAR_4->A->pos;
  int VAR_6 = VAR_4->B->pos;
  if (VAR_5 < VAR_3) {
    VAR_5 = VAR_4->A->jump_to (VAR_4->A, VAR_3);
  }
  if (VAR_6 < VAR_5) {
    VAR_6 = VAR_4->B->jump_to (VAR_4->B, VAR_5);
  }
  while (VAR_5 != VAR_6) {
    if (VAR_5 < VAR_6) {
      VAR_5 = VAR_4->A->jump_to (VAR_4->A, VAR_6);
    } else {
      VAR_6 = VAR_4->B->jump_to (VAR_4->B, VAR_5);
    }
  }
  if (VAR_5 == VAR_0) {
    VAR_4->jump_to = VAR_1;
  }
  return VAR_4->pos = VAR_5;
}
