
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; int wptr; int end; int total_bytes; int extra; struct TYPE_4__* prev; struct TYPE_4__* next; int pptr; } ;
typedef TYPE_1__ netbuffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int) ;

void *FUNC_2 (netbuffer_t *VAR_3, int VAR_4) {
  netbuffer_t *VAR_5, *VAR_6;
  int VAR_7, VAR_8;
  void *VAR_9;
  if (!VAR_3 || VAR_4 < 0 || VAR_4 > VAR_2) { return 0; }
  FUNC_1 (VAR_3->state == VAR_1 || VAR_3->state == VAR_0);
  FUNC_1 (!VAR_3->pptr);

  VAR_5 = VAR_3->prev;
  VAR_8 = -((long) VAR_5->wptr) & 3;
  VAR_7 = VAR_5->end - VAR_5->wptr;

  if (VAR_4 + VAR_8 <= VAR_7) {
    VAR_9 = VAR_5->wptr += VAR_8;
    VAR_5->wptr += VAR_4;
    VAR_3->total_bytes += VAR_4;
    return VAR_9;
  }

  VAR_6 = FUNC_0();
  if (!VAR_6) { return 0; }

  VAR_5->next = VAR_6;
  VAR_6->prev = VAR_5;
  VAR_6->next = VAR_3;
  VAR_3->prev = VAR_6;
  VAR_3->extra++;

  VAR_7 = VAR_6->end - VAR_6->wptr;

  if (VAR_4 <= VAR_7) {
    VAR_9 = VAR_6->wptr;
    VAR_6->wptr += VAR_4;
    VAR_3->total_bytes += VAR_4;
    return VAR_9;
  }

  return 0;
}
