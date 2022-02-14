
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_process {int signal_page; } ;
struct kfd_event {size_t event_id; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct kfd_process *VAR_1, struct kfd_event *VAR_2)
{
 FUNC_0(VAR_1->signal_page)[VAR_2->event_id] = VAR_0;
}
