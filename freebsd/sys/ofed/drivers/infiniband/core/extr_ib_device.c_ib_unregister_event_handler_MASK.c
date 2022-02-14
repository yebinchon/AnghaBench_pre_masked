
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_event_handler {TYPE_1__* device; int list; } ;
struct TYPE_2__ {int event_handler_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct ib_event_handler *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->device->event_handler_lock, VAR_1);
 FUNC_0(&VAR_0->list);
 FUNC_2(&VAR_0->device->event_handler_lock, VAR_1);

 return 0;
}
