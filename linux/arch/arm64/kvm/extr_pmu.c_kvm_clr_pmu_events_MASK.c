
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int events_guest; int events_host; } ;
struct kvm_host_data {TYPE_1__ pmu_events; } ;


 int VAR_0 ;
 struct kvm_host_data* FUNC_0 (int *) ;

void FUNC_1(u32 VAR_1)
{
 struct kvm_host_data *VAR_2 = FUNC_0(&VAR_0);

 VAR_2->pmu_events.events_host &= ~VAR_1;
 VAR_2->pmu_events.events_guest &= ~VAR_1;
}
