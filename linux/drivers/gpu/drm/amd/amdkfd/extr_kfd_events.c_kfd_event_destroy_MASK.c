
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kfd_process {int event_mutex; } ;
struct kfd_event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kfd_process*,struct kfd_event*) ;
 struct kfd_event* FUNC_1 (struct kfd_process*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct kfd_process *VAR_1, uint32_t VAR_2)
{
 struct kfd_event *VAR_3;
 int VAR_4 = 0;

 FUNC_2(&VAR_1->event_mutex);

 VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (VAR_3)
  FUNC_0(VAR_1, VAR_3);
 else
  VAR_4 = -VAR_0;

 FUNC_3(&VAR_1->event_mutex);
 return VAR_4;
}
