
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ wptr; scalar_t__ rptr; int pptr; scalar_t__ start; scalar_t__ extra; int total_bytes; struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef TYPE_1__ netbuffer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int,int) ;

int FUNC_3 (netbuffer_t *VAR_0, void *VAR_1, int VAR_2) {
  netbuffer_t *VAR_3 = VAR_0, *VAR_4;
  int VAR_5, VAR_6 = 0;
  char *VAR_7 = VAR_1;
  if (VAR_3->wptr == VAR_3->rptr) {
    VAR_3 = VAR_3->next;
  }
  while (VAR_2 > 0) {
    VAR_5 = (VAR_3->pptr ? VAR_3->pptr : VAR_3->wptr) - VAR_3->rptr;
    if (VAR_5 > VAR_2) { VAR_5 = VAR_2; }
    if (VAR_5 > 0) {
      FUNC_2 (VAR_7, VAR_3->rptr, VAR_5);
      VAR_6 += VAR_5;
      VAR_3->rptr += VAR_5;
      VAR_7 += VAR_5;
      VAR_2 -= VAR_5;
    }
    if (VAR_3->rptr == VAR_3->wptr) {
      if (VAR_3 == VAR_0) {
 VAR_3->rptr = VAR_3->wptr = VAR_3->start;
 if (VAR_3->pptr) {
   VAR_3->pptr = VAR_3->wptr;
 }
 VAR_3 = VAR_3->next;
      } else {
 VAR_4 = VAR_3->next;
 FUNC_0 (VAR_0->extra > 0);
 VAR_4->prev = VAR_0;
 VAR_0->next = VAR_4;
 FUNC_1 (VAR_3);
 VAR_0->extra--;
 VAR_3 = VAR_4;
      }
      if (VAR_3 == VAR_0) { break; }
    } else if (VAR_3->rptr == VAR_3->pptr) {
      break;
    }
    if (!VAR_2) { break; }
  }
  VAR_0->total_bytes -= VAR_6;
  return VAR_6;
}
