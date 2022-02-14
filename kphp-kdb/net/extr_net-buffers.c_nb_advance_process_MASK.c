
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pptr; scalar_t__ wptr; int total_bytes; int unprocessed_bytes; struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef TYPE_1__ netbuffer_t ;
struct TYPE_5__ {scalar_t__ ptr0; int len0; int len1; scalar_t__ ptr1; TYPE_1__* cur; TYPE_1__* head; } ;
typedef TYPE_2__ nb_processor_t ;


 int FUNC_0 (int) ;

int FUNC_1 (nb_processor_t *VAR_0, int VAR_1) {
  netbuffer_t *VAR_2 = VAR_0->head, *VAR_3 = VAR_0->cur;
  int VAR_4, VAR_5 = 0;

  FUNC_0 (VAR_2 && VAR_1 >= 0);

  while (VAR_1 > 0 || VAR_3->pptr == VAR_3->wptr) {
    VAR_4 = VAR_3->wptr - VAR_3->pptr;
    if (VAR_4 > VAR_1) { VAR_4 = VAR_1; }
    if (VAR_4 > 0) {
      VAR_5 += VAR_4;
      VAR_3->pptr += VAR_4;
      VAR_1 -= VAR_4;
    }
    if (VAR_3->pptr == VAR_3->wptr) {
      VAR_3 = VAR_3->next;
      if (VAR_3 == VAR_2) {
        FUNC_0 (!VAR_1);
        VAR_3 = 0;
        break;
      }
    }
  }

  VAR_2->total_bytes += VAR_5;
  VAR_2->unprocessed_bytes -= VAR_5;

  if (VAR_3 == VAR_0->cur) {
    VAR_0->ptr0 += VAR_5;
    VAR_0->len0 -= VAR_5;
    FUNC_0 (VAR_0->len0 > 0 && VAR_0->ptr0 == VAR_3->pptr);
    return VAR_0->len0 + VAR_0->len1;
  }

  if (!VAR_3) {
    FUNC_0 (!VAR_2->unprocessed_bytes);
    VAR_0->cur = VAR_2->prev;
    VAR_0->ptr0 = 0;
    VAR_0->ptr1 = 0;
    VAR_0->len0 = 0;
    VAR_0->len1 = 0;
    return 0;
  }

  VAR_0->cur = VAR_3;

  VAR_0->ptr0 = VAR_3->pptr;
  VAR_0->len0 = VAR_3->wptr - VAR_3->pptr;

  FUNC_0 (VAR_0->len0 > 0);

  VAR_3 = VAR_3->next;
  if (VAR_3 == VAR_2 || VAR_3->pptr == VAR_3->wptr) {
    VAR_0->ptr1 = 0;
    VAR_0->len1 = 0;
  } else {
    VAR_0->ptr1 = VAR_3->pptr;
    VAR_0->len1 = VAR_3->wptr - VAR_3->pptr;
  }

  FUNC_0 (VAR_0->len0 + VAR_0->len1 <= VAR_2->unprocessed_bytes);

  return VAR_0->len0 + VAR_0->len1;
}
