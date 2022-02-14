
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devx_async_event_queue {scalar_t__ is_destroyed; int bytes_in_use; int poll_wait; int event_list; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct devx_async_event_queue *VAR_0)
{
 FUNC_3(&VAR_0->lock);
 FUNC_0(&VAR_0->event_list);
 FUNC_2(&VAR_0->poll_wait);
 FUNC_1(&VAR_0->bytes_in_use, 0);
 VAR_0->is_destroyed = 0;
}
