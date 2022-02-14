
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; int wptr; int rptr; scalar_t__ pptr; int start; int end; scalar_t__ extra; int total_bytes; struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__ netbuffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

int FUNC_5 (netbuffer_t *VAR_3, int VAR_4) {
  int VAR_5, VAR_6, VAR_7;
  netbuffer_t *VAR_8, *VAR_9;
  FUNC_0 (VAR_3->state == VAR_1 || VAR_3->state == VAR_0);
  FUNC_0 (VAR_4 >= 0);
  VAR_5 = VAR_3->wptr - VAR_3->rptr;
  if (VAR_3->pptr && VAR_3->pptr != VAR_3->wptr) {
    FUNC_0 (VAR_3->rptr <= VAR_3->pptr && VAR_3->pptr < VAR_3->wptr);
    return VAR_3->pptr - VAR_3->rptr;
  }
  if (VAR_4 <= VAR_5 || VAR_3->next == VAR_3) { return VAR_5; }
  if (VAR_4 > VAR_2) { VAR_4 = VAR_2; }
  VAR_8 = VAR_3->next;
  VAR_6 = (VAR_8->pptr ? VAR_8->pptr : VAR_8->wptr) - VAR_8->rptr;
  FUNC_0 ((unsigned) VAR_6 <= VAR_2);
  if (VAR_5 + VAR_6 >= VAR_4 || VAR_8->next == VAR_3) {
    if (!VAR_6) { return VAR_5; }
    if (VAR_5 <= VAR_8->rptr - VAR_8->start) {
      VAR_8->rptr -= VAR_5;
      FUNC_2 (VAR_8->rptr, VAR_3->rptr, VAR_5);
      VAR_3->rptr = VAR_3->wptr = VAR_3->start;
      if (VAR_3->pptr) {
        VAR_3->pptr = VAR_3->start;
      }
      return VAR_5 + VAR_6;
    }
    if (VAR_6 > VAR_4 - VAR_5) { VAR_6 = VAR_4 - VAR_5; }
    VAR_7 = VAR_3->end - VAR_3->wptr;
    if (VAR_6 > VAR_7) {
      FUNC_3 (VAR_3->start, VAR_3->rptr, VAR_5);
      VAR_3->rptr = VAR_3->start;
      VAR_3->wptr = VAR_3->start + VAR_5;
      VAR_7 = VAR_3->end - VAR_3->wptr;
    }
    if (VAR_6 > VAR_7) { VAR_6 = VAR_7; }
    FUNC_2 (VAR_3->wptr, VAR_8->rptr, VAR_6);
    VAR_8->rptr += VAR_6;
    VAR_3->wptr += VAR_6;
    if (VAR_3->pptr) {
      VAR_3->pptr = VAR_3->wptr;
    }
    if (VAR_8->rptr == VAR_8->wptr) {
      VAR_9 = VAR_8->next;
      FUNC_0 (VAR_3->extra > 0);
      VAR_3->next = VAR_9;
      VAR_9->prev = VAR_3;
      FUNC_1 (VAR_8);
      VAR_3->extra--;
    }
    return VAR_5 + VAR_6;
  }

  if (VAR_5 > 0) {
    FUNC_3 (VAR_3->start, VAR_3->rptr, VAR_5);
  }
  VAR_3->rptr = VAR_3->wptr = VAR_3->start;
  if (VAR_3->pptr) {
    VAR_3->pptr = VAR_3->wptr;
  }
  if (VAR_4 > VAR_3->end - VAR_3->start) {
    VAR_4 = VAR_3->end - VAR_3->start;
  }
  VAR_7 = FUNC_4 (VAR_3, VAR_3->wptr + VAR_5, VAR_4 - VAR_5);
  VAR_6 = VAR_5 + VAR_7;
  VAR_3->total_bytes += VAR_7;
  VAR_3->wptr += VAR_6;
  if (VAR_3->pptr) {
    VAR_3->pptr = VAR_3->wptr;
  }
  return VAR_6;
}
