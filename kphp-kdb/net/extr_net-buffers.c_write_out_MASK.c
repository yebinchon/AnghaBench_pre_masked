
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int end; int wptr; int unprocessed_bytes; int total_bytes; scalar_t__ pptr; scalar_t__ rptr; int extra; struct TYPE_4__* prev; struct TYPE_4__* next; } ;
typedef TYPE_1__ netbuffer_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int,char const*,int) ;

int FUNC_2 (netbuffer_t *VAR_0, const void *VAR_1, int VAR_2) {
  netbuffer_t *VAR_3 = VAR_0->prev, *VAR_4;
  int VAR_5, VAR_6 = 0;
  const char *VAR_7 = VAR_1;

  while (VAR_2 > 0) {
    VAR_5 = VAR_3->end - VAR_3->wptr;
    if (VAR_5 > VAR_2) { VAR_5 = VAR_2; }
    if (VAR_5 > 0) {
      FUNC_1 (VAR_3->wptr, VAR_7, VAR_5);
      VAR_6 += VAR_5;
      VAR_3->wptr += VAR_5;
      VAR_7 += VAR_5;
      VAR_2 -= VAR_5;
    }
    if (!VAR_2) { break; }
    VAR_4 = FUNC_0();
    if (!VAR_4) { break; }
    VAR_3->next = VAR_4;
    VAR_4->prev = VAR_3;
    VAR_4->next = VAR_0;
    VAR_0->prev = VAR_4;
    VAR_0->extra++;
    if (VAR_3->pptr) {
      VAR_4->pptr = VAR_4->rptr;
    }
    VAR_3 = VAR_4;
  }
  if (VAR_0->pptr) {
    VAR_0->unprocessed_bytes += VAR_6;
  } else {
    VAR_0->total_bytes += VAR_6;
  }
  return VAR_6;
}
