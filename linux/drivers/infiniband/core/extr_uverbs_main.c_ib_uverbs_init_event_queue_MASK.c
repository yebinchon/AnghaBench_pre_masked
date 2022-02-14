
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_uverbs_event_queue {int * async_queue; scalar_t__ is_closed; int poll_wait; int event_list; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ib_uverbs_event_queue *VAR_0)
{
 FUNC_2(&VAR_0->lock);
 FUNC_0(&VAR_0->event_list);
 FUNC_1(&VAR_0->poll_wait);
 VAR_0->is_closed = 0;
 VAR_0->async_queue = ((void*)0);
}
