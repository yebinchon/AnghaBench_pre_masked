
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intersection_condition_iterator {long cnt; TYPE_2__** A; } ;
typedef TYPE_1__* iterator_t ;
struct TYPE_6__ {int pos; int (* jump_to ) (TYPE_2__*,int) ;} ;
struct TYPE_5__ {int pos; void* jump_to; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;

int FUNC_2 (iterator_t VAR_2, int VAR_3) {
  struct intersection_condition_iterator *VAR_4 = (struct intersection_condition_iterator *)VAR_2;
  long VAR_5, VAR_6 = VAR_4->cnt;
  int VAR_7;
  do {
    VAR_7 = VAR_4->A[0]->pos;
    if (VAR_7 < VAR_3) {
      VAR_7 = VAR_4->A[0]->jump_to (VAR_4->A[0], VAR_3);
    }
    if (VAR_7 == VAR_0) {
      VAR_2->jump_to = VAR_1;
      return VAR_2->pos = VAR_0;
    }
    for (VAR_5 = 1; VAR_5 < VAR_6; VAR_5++) {
      VAR_3 = VAR_4->A[VAR_5]->pos;
      if (VAR_3 < VAR_7) {
 VAR_3 = VAR_4->A[VAR_5]->jump_to (VAR_4->A[VAR_5], VAR_7);
      }
      if (VAR_3 > VAR_7) {
 break;
      }
    }
    if (VAR_3 == VAR_0) {
      VAR_2->jump_to = VAR_1;
      return VAR_2->pos = VAR_0;
    }
  } while (VAR_5 < VAR_6);
  return VAR_2->pos = VAR_7;
}
