
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct condition_filter_iterator {int pos; TYPE_1__* A; int Cond; int jump_to; } ;
typedef scalar_t__ iterator_t ;
struct TYPE_3__ {int (* jump_to ) (TYPE_1__*,int) ;} ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int) ;

int FUNC_4 (iterator_t VAR_4, int VAR_5) {
  struct condition_filter_iterator *VAR_6 = (struct condition_filter_iterator *) VAR_4;
  int VAR_7 = VAR_6->pos;
  if (VAR_5 > VAR_7) {
    VAR_7 = VAR_6->A->jump_to (VAR_6->A, VAR_5);
  }
  while (1) {
    if (VAR_7 > VAR_3) {
      VAR_6->jump_to = VAR_2;
      return VAR_6->pos = VAR_0;
    }
    FUNC_0 ((unsigned) VAR_7 <= (unsigned) VAR_3 && VAR_1[VAR_7]);
    if (FUNC_3 (VAR_1[VAR_7], VAR_6->Cond, VAR_7)) {
      return VAR_6->pos = VAR_7;
    }
    VAR_7 = VAR_6->A->jump_to (VAR_6->A, VAR_7 + 1);
  }
}
