
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_process {scalar_t__ signal_event_count; int * signal_page; int event_idr; int event_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct kfd_process *VAR_0)
{
 FUNC_1(&VAR_0->event_mutex);
 FUNC_0(&VAR_0->event_idr);
 VAR_0->signal_page = ((void*)0);
 VAR_0->signal_event_count = 0;
}
