
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pptr; int unprocessed_bytes; int total_bytes; scalar_t__ wptr; scalar_t__ rptr; scalar_t__ start; scalar_t__ extra; struct TYPE_4__* prev; struct TYPE_4__* next; } ;
typedef TYPE_1__ netbuffer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,int) ;

int FUNC_3 (netbuffer_t *VAR_0, void *VAR_1, int VAR_2) {
  netbuffer_t *VAR_3 = VAR_0->prev, *VAR_4;
  int VAR_5, VAR_6 = 0;
  char *VAR_7 = VAR_1 ? (char *) VAR_1 + VAR_2 : 0;
  if (VAR_0->pptr) {
    if (VAR_2 > VAR_0->unprocessed_bytes) {
      VAR_2 = VAR_0->unprocessed_bytes;
    }
  } else {
    if (VAR_2 > VAR_0->total_bytes) {
      VAR_2 = VAR_0->total_bytes;
    }
  }

  if (VAR_3->wptr == VAR_3->rptr && VAR_3 != VAR_0) {
    VAR_3 = VAR_3->prev;
  }

  while (VAR_2 > 0) {
    VAR_5 = VAR_3->wptr - (VAR_3->pptr ? VAR_3->pptr : VAR_3->rptr);
    if (VAR_5 > VAR_2) { VAR_5 = VAR_2; }
    if (VAR_5 > 0) {
      VAR_3->wptr -= VAR_5;
      if (VAR_7) {
 FUNC_2 (VAR_7 -= VAR_5, VAR_3->wptr, VAR_5);
      }
      VAR_6 += VAR_5;
      VAR_2 -= VAR_5;
    }
    if (VAR_3->rptr == VAR_3->wptr) {
      if (VAR_3 == VAR_0) {
 VAR_3->rptr = VAR_3->wptr = VAR_3->start;
 if (VAR_3->pptr) {
   VAR_3->pptr = VAR_3->wptr;
 }
 break;
      } else {
 VAR_4 = VAR_3->prev;
 FUNC_0 (VAR_0->extra > 0);
 VAR_4->next = VAR_0;
 VAR_0->prev = VAR_4;
 FUNC_1 (VAR_3);
 VAR_0->extra--;
 VAR_3 = VAR_4;
      }
    } else if (VAR_3->wptr == VAR_3->pptr) {
      break;
    }
  }

  if (VAR_0->pptr) {
    VAR_0->unprocessed_bytes -= VAR_6;
  } else {
    VAR_0->total_bytes -= VAR_6;
  }
  return VAR_6;
}
