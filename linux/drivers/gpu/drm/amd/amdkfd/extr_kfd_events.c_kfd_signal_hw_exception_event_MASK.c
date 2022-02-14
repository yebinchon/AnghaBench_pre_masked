
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_process {int event_mutex; } ;


 int VAR_0 ;
 struct kfd_process* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct kfd_process*) ;
 int FUNC_2 (struct kfd_process*,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(unsigned int VAR_1)
{





 struct kfd_process *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2)
  return;

 FUNC_3(&VAR_2->event_mutex);


 FUNC_2(VAR_2, VAR_0, ((void*)0));

 FUNC_4(&VAR_2->event_mutex);
 FUNC_1(VAR_2);
}
