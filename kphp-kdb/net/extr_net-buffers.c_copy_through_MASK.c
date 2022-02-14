
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ wptr; scalar_t__ rptr; int pptr; int total_bytes; scalar_t__ start; scalar_t__ extra; struct TYPE_6__* next; struct TYPE_6__* prev; } ;
typedef TYPE_1__ netbuffer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int) ;

int FUNC_3 (netbuffer_t *VAR_0, netbuffer_t *VAR_1, int VAR_2) {
  netbuffer_t *VAR_3 = VAR_1, *VAR_4;
  int VAR_5, VAR_6 = 0;
  if (VAR_3->wptr == VAR_3->rptr) {
    VAR_3 = VAR_3->next;
  }
  while (VAR_2 > 0) {
    VAR_5 = (VAR_3->pptr ? VAR_3->pptr : VAR_3->wptr) - VAR_3->rptr;
    if (VAR_5 > VAR_2) { VAR_5 = VAR_2; }
    if (VAR_5 > 0) {
      VAR_6 += FUNC_2 (VAR_0, VAR_3->rptr, VAR_5);
      VAR_3->rptr += VAR_5;
      VAR_2 -= VAR_5;
      VAR_1->total_bytes -= VAR_5;
    }
    if (VAR_3->rptr == VAR_3->wptr) {
      if (VAR_3 == VAR_1) {
 VAR_3->rptr = VAR_3->wptr = VAR_3->start;
 if (VAR_3->pptr) {
   VAR_3->pptr = VAR_3->wptr;
 }
 VAR_3 = VAR_3->next;
      } else {
 VAR_4 = VAR_3->next;
 FUNC_0 (VAR_1->extra > 0);
 VAR_4->prev = VAR_1;
 VAR_1->next = VAR_4;
 FUNC_1 (VAR_3);
 VAR_1->extra--;
 VAR_3 = VAR_4;
      }
      if (VAR_3 == VAR_1) { break; }
    } else if (VAR_3->rptr == VAR_3->pptr) {
      break;
    }
  }
  return VAR_6;
}
