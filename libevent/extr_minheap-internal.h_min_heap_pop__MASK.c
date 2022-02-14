
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int min_heap_idx; } ;
struct event {TYPE_1__ ev_timeout_pos; } ;
struct TYPE_6__ {int n; struct event** p; } ;
typedef TYPE_2__ min_heap_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,struct event*) ;

struct event* FUNC_1(min_heap_t* VAR_1)
{
 if (VAR_1->n)
 {
  struct event* VAR_2 = *VAR_1->p;
  FUNC_0(VAR_1, 0, VAR_1->p[--VAR_1->n]);
  VAR_2->ev_timeout_pos.min_heap_idx = VAR_0;
  return VAR_2;
 }
 return 0;
}
