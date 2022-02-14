
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pptr; int unprocessed_bytes; int total_bytes; scalar_t__ wptr; scalar_t__ rptr; struct TYPE_3__* prev; } ;
typedef TYPE_1__ netbuffer_t ;


 int FUNC_0 (int ,int,int) ;

int FUNC_1 (netbuffer_t *VAR_0, void *VAR_1, int VAR_2) {
  netbuffer_t *VAR_3 = VAR_0->prev;
  int VAR_4, VAR_5 = 0;
  char *VAR_6 = VAR_1 ? (char *) VAR_1 + VAR_2 : 0;
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
    VAR_4 = VAR_3->wptr - (VAR_3->pptr ? VAR_3->pptr : VAR_3->rptr);
    if (VAR_4 > VAR_2) { VAR_4 = VAR_2; }
    if (VAR_4 > 0) {
      if (VAR_6) {
        FUNC_0 (VAR_6 -= VAR_4, VAR_3->wptr - VAR_4, VAR_4);
      }
      VAR_5 += VAR_4;
      VAR_2 -= VAR_4;
    }
    if (VAR_2 > 0) {
      VAR_3 = VAR_3->prev;
    }
  }

  return VAR_5;
}
