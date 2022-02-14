
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kfd_process {int dummy; } ;
struct kfd_event_waiter {int activated; struct kfd_event* event; } ;
struct kfd_event {int signaled; int auto_reset; } ;


 int VAR_0 ;
 struct kfd_event* FUNC_0 (struct kfd_process*,int ) ;

__attribute__((used)) static int FUNC_1(struct kfd_process *VAR_1,
  struct kfd_event_waiter *VAR_2,
  uint32_t VAR_3)
{
 struct kfd_event *VAR_4 = FUNC_0(VAR_1, VAR_3);

 if (!VAR_4)
  return -VAR_0;

 VAR_2->event = VAR_4;
 VAR_2->activated = VAR_4->signaled;
 VAR_4->signaled = VAR_4->signaled && !VAR_4->auto_reset;

 return 0;
}
