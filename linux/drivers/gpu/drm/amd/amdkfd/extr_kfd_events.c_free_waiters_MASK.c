
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct kfd_event_waiter {int wait; TYPE_1__* event; } ;
struct TYPE_2__ {int wq; } ;


 int FUNC_0 (struct kfd_event_waiter*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(uint32_t VAR_0, struct kfd_event_waiter *VAR_1)
{
 uint32_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1[VAR_2].event)
   FUNC_1(&VAR_1[VAR_2].event->wq,
       &VAR_1[VAR_2].wait);

 FUNC_0(VAR_1);
}
