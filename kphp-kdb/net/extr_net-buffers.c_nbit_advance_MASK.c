
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* rptr; char* wptr; char* pptr; struct TYPE_4__* prev; struct TYPE_4__* next; } ;
typedef TYPE_1__ netbuffer_t ;
struct TYPE_5__ {char* cptr; TYPE_1__* cur; TYPE_1__* head; } ;
typedef TYPE_2__ nb_iterator_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;

int FUNC_1 (nb_iterator_t *VAR_1, int VAR_2) {
  netbuffer_t *VAR_3 = VAR_1->cur, *VAR_4 = VAR_1->head;
  int VAR_5, VAR_6 = 0, VAR_7 = 0;
  char *VAR_8 = VAR_1->cptr;

  if (!VAR_2 || !VAR_1->cur) {
    return 0;
  }

  FUNC_0 (VAR_3->rptr <= VAR_8 && VAR_8 <= VAR_3->wptr);
  FUNC_0 (!VAR_3->pptr || VAR_8 <= VAR_3->pptr);

  if (VAR_2 > 0) {
    VAR_5 = VAR_3->wptr - VAR_8;
    if (VAR_3->pptr && VAR_3->pptr != VAR_3->wptr) {
      VAR_5 = VAR_3->pptr - VAR_8;
      VAR_7 = 1;
    }
    VAR_6 = 0;

    do {
      if (VAR_5 > VAR_2) {
        VAR_1->cptr = VAR_8 + VAR_2;
        VAR_1->cur = VAR_3;
        return VAR_6 + VAR_2;
      }
      VAR_6 += VAR_5;
      VAR_2 -= VAR_5;
      if (VAR_7) {
        VAR_1->cptr = VAR_3->pptr;
        VAR_1->cur = VAR_3;
        return VAR_6;
      }
      if (VAR_3->next == VAR_4) {
        FUNC_0 (!VAR_3->pptr || VAR_3->pptr == VAR_3->wptr);
        VAR_1->cptr = VAR_3->wptr;
        VAR_1->cur = VAR_3;
        return VAR_6;
      }
      VAR_3 = VAR_3->next;
      VAR_8 = VAR_3->rptr;
      VAR_5 = VAR_3->wptr - VAR_8;
      if (VAR_3->pptr && VAR_3->pptr != VAR_3->wptr) {
        VAR_5 = VAR_3->pptr - VAR_8;
        VAR_7 = 1;
      }
      FUNC_0 ((unsigned) VAR_5 <= VAR_0);
    } while (VAR_2 > 0);

    VAR_1->cptr = VAR_8;
    VAR_1->cur = VAR_3;
    return VAR_6;

  } else {
    VAR_5 = VAR_8 - VAR_3->rptr;
    VAR_6 = 0;

    do {
      if (VAR_5 + VAR_2 >= 0) {
        VAR_1->cptr = VAR_8 + VAR_2;
        VAR_1->cur = VAR_3;
        return VAR_6 + VAR_2;
      }
      VAR_6 -= VAR_5;
      VAR_2 += VAR_5;
      if (VAR_3 == VAR_4) {
        VAR_1->cptr = VAR_3->rptr;
        VAR_1->cur = VAR_3;
        return VAR_6;
      }
      VAR_3 = VAR_3->prev;
      VAR_8 = VAR_3->wptr;
      FUNC_0 (!VAR_3->pptr || VAR_8 == VAR_3->pptr);
      VAR_5 = VAR_8 - VAR_3->rptr;
      FUNC_0 ((unsigned) VAR_5 <= VAR_0);
    } while (VAR_2 < 0);

    VAR_1->cptr = VAR_8;
    VAR_1->cur = VAR_3;
    return VAR_6;
  }
}
