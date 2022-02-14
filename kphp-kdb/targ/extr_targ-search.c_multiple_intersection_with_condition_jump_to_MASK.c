
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intersection_condition_iterator {long cnt; int Cond; TYPE_2__** A; } ;
typedef TYPE_1__* iterator_t ;
struct TYPE_6__ {int pos; int (* jump_to ) (TYPE_2__*,int) ;} ;
struct TYPE_5__ {int pos; void* jump_to; } ;


 int VAR_0 ;
 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;

int FUNC_3 (iterator_t VAR_3, int VAR_4) {
  struct intersection_condition_iterator *VAR_5 = (struct intersection_condition_iterator *)VAR_3;
  long VAR_6, VAR_7 = VAR_5->cnt;
  int VAR_8;
  while (1) {
    do {
      VAR_8 = VAR_5->A[0]->pos;
      if (VAR_8 < VAR_4) {
 VAR_8 = VAR_5->A[0]->jump_to (VAR_5->A[0], VAR_4);
      }
      if (VAR_8 == VAR_0) {
 VAR_3->jump_to = VAR_2;
 return VAR_3->pos = VAR_0;
      }
      for (VAR_6 = 1; VAR_6 < VAR_7; VAR_6++) {
 VAR_4 = VAR_5->A[VAR_6]->pos;
 if (VAR_4 < VAR_8) {
   VAR_4 = VAR_5->A[VAR_6]->jump_to (VAR_5->A[VAR_6], VAR_8);
 }
 if (VAR_4 > VAR_8) {
   break;
 }
      }
      if (VAR_4 == VAR_0) {
 VAR_3->jump_to = VAR_2;
 return VAR_3->pos = VAR_0;
      }
    } while (VAR_6 < VAR_7);
    if (FUNC_2 (VAR_1[VAR_8], VAR_5->Cond, VAR_8)) {
      break;
    }
    VAR_4 = VAR_8 + 1;
  }
  return VAR_3->pos = VAR_8;
}
