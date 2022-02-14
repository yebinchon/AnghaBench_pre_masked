
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int min_heap_idx; } ;
struct event {TYPE_1__ ev_timeout_pos; } ;
struct TYPE_7__ {size_t n; struct event** p; } ;
typedef TYPE_2__ min_heap_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct event*,struct event*) ;
 int FUNC_1 (TYPE_2__*,int,struct event*) ;
 int FUNC_2 (TYPE_2__*,int,struct event*) ;

int FUNC_3(min_heap_t* VAR_1, struct event* VAR_2)
{
 if (VAR_0 != VAR_2->ev_timeout_pos.min_heap_idx)
 {
  struct event *VAR_3 = VAR_1->p[--VAR_1->n];
  size_t VAR_4 = (VAR_2->ev_timeout_pos.min_heap_idx - 1) / 2;





  if (VAR_2->ev_timeout_pos.min_heap_idx > 0 && FUNC_0(VAR_1->p[VAR_4], VAR_3))
   FUNC_2(VAR_1, VAR_2->ev_timeout_pos.min_heap_idx, VAR_3);
  else
   FUNC_1(VAR_1, VAR_2->ev_timeout_pos.min_heap_idx, VAR_3);
  VAR_2->ev_timeout_pos.min_heap_idx = VAR_0;
  return 0;
 }
 return -1;
}
