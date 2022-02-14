
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; scalar_t__ wptr; scalar_t__ end; int total_bytes; int unprocessed_bytes; int pptr; struct TYPE_3__* prev; } ;
typedef TYPE_1__ netbuffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

void FUNC_1 (netbuffer_t *VAR_3, int VAR_4) {
  netbuffer_t *VAR_5 = VAR_3->prev;
  FUNC_0 (VAR_3->state == VAR_1 || VAR_3->state == VAR_0);
  FUNC_0 (VAR_4 > 0 && VAR_4 <= VAR_2);
  VAR_5->wptr += VAR_4;
  FUNC_0 (VAR_5->wptr <= VAR_5->end);
  if (!VAR_5->pptr) {
    VAR_3->total_bytes += VAR_4;
  } else {
    VAR_3->unprocessed_bytes += VAR_4;
  }
}
