
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ wptr; scalar_t__ rptr; scalar_t__ pptr; scalar_t__ start; scalar_t__ extra; int total_bytes; struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef TYPE_1__ netbuffer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2 (netbuffer_t *VAR_0, int VAR_1) {
  netbuffer_t *VAR_2 = VAR_0, *VAR_3;
  int VAR_4, VAR_5 = 0, VAR_6 = 0;
  if (VAR_2->wptr == VAR_2->rptr) {
    VAR_2 = VAR_2->next;
  }
  while (VAR_1 > 0) {
    VAR_4 = VAR_2->wptr - VAR_2->rptr;
    if (VAR_2->pptr && VAR_2->pptr < VAR_2->wptr) {
      VAR_4 = VAR_2->pptr - VAR_2->rptr;
      VAR_5 = 1;
    }
    if (VAR_4 > VAR_1) { VAR_4 = VAR_1; }
    if (VAR_4 > 0) {
      VAR_6 += VAR_4;
      VAR_2->rptr += VAR_4;
      VAR_1 -= VAR_4;
    }
    if (VAR_2->rptr == VAR_2->wptr) {
      if (VAR_2 == VAR_0) {
 VAR_2->rptr = VAR_2->wptr = VAR_2->start;
 if (VAR_2->pptr) {
   VAR_2->pptr = VAR_2->wptr;
 }
 VAR_2 = VAR_2->next;
      } else {
 VAR_3 = VAR_2->next;
 FUNC_0 (VAR_0->extra > 0);
 VAR_3->prev = VAR_0;
 VAR_0->next = VAR_3;
 FUNC_1 (VAR_2);
 VAR_0->extra--;
 VAR_2 = VAR_3;
      }
      if (VAR_2 == VAR_0) { break; }
    }
    if (!VAR_1 || VAR_5) { break; }
  }
  VAR_0->total_bytes -= VAR_6;
  return VAR_6;
}
