
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_event_waiter {int wait; int activated; struct kfd_event* event; } ;
struct kfd_event {int wq; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct kfd_event_waiter *VAR_0)
{
 struct kfd_event *VAR_1 = VAR_0->event;




 if (!VAR_0->activated)
  FUNC_0(&VAR_1->wq, &VAR_0->wait);
}
