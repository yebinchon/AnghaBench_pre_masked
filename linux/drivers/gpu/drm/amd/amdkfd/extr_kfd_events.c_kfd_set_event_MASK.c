
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kfd_process {int event_mutex; } ;
struct kfd_event {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kfd_event*) ;
 struct kfd_event* FUNC_1 (struct kfd_process*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kfd_event*) ;

int FUNC_5(struct kfd_process *VAR_1, uint32_t VAR_2)
{
 int VAR_3 = 0;
 struct kfd_event *VAR_4;

 FUNC_2(&VAR_1->event_mutex);

 VAR_4 = FUNC_1(VAR_1, VAR_2);

 if (VAR_4 && FUNC_0(VAR_4))
  FUNC_4(VAR_4);
 else
  VAR_3 = -VAR_0;

 FUNC_3(&VAR_1->event_mutex);
 return VAR_3;
}
