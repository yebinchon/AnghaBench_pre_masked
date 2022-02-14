
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct binary_operation_iterator {int pos; void* jump_to; TYPE_1__* B; TYPE_1__* A; } ;
typedef scalar_t__ iterator_t ;
struct TYPE_3__ {int pos; int (* jump_to ) (TYPE_1__*,int) ;} ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

int FUNC_2 (iterator_t VAR_3, int VAR_4) {
  struct binary_operation_iterator *VAR_5 = (struct binary_operation_iterator *) VAR_3;
  int VAR_6 = VAR_5->A->pos;
  int VAR_7 = VAR_5->B->pos;
  if (VAR_6 < VAR_4) {
    VAR_6 = VAR_5->A->jump_to (VAR_5->A, VAR_4);
  }
  if (VAR_7 < VAR_4) {
    VAR_7 = VAR_5->B->jump_to (VAR_5->B, VAR_4);
  }
  if (VAR_6 < VAR_7) {
    if (VAR_7 == VAR_0) {
      VAR_5->jump_to = VAR_1;
    }
    return VAR_5->pos = VAR_6;
  } else if (VAR_6 > VAR_7) {
    if (VAR_6 == VAR_0) {
      VAR_5->jump_to = VAR_1;
      VAR_5->A = VAR_5->B;
    }
    return VAR_5->pos = VAR_7;
  } else {
    if (VAR_6 == VAR_0) {
      VAR_5->jump_to = VAR_2;
    }
    return VAR_5->pos = VAR_6;
  }
}
