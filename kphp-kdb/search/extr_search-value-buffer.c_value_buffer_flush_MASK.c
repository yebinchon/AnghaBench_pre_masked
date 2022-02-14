
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value_buffer {scalar_t__ wptr; scalar_t__ s; scalar_t__ n474; TYPE_1__* c; } ;
struct TYPE_2__ {int Out; } ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int) ;

int FUNC_2 (struct value_buffer *VAR_0) {
  if (VAR_0->wptr >= VAR_0->s) {
    FUNC_0 (&VAR_0->c->Out, VAR_0->wptr - (VAR_0->s - VAR_0->n474));
    VAR_0->wptr = FUNC_1 (&VAR_0->c->Out, 512);
    if (!VAR_0->wptr) return 0;
    VAR_0->s = VAR_0->wptr + VAR_0->n474;
  }
  return 1;
}
