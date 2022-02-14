
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct perf_event_attr {int exclude_guest; int exclude_host; } ;
struct TYPE_2__ {int events_guest; int events_host; } ;
struct kvm_host_data {TYPE_1__ pmu_events; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event_attr*) ;
 struct kvm_host_data* FUNC_1 (int *) ;

void FUNC_2(u32 VAR_1, struct perf_event_attr *VAR_2)
{
 struct kvm_host_data *VAR_3 = FUNC_1(&VAR_0);

 if (!FUNC_0(VAR_2))
  return;

 if (!VAR_2->exclude_host)
  VAR_3->pmu_events.events_host |= VAR_1;
 if (!VAR_2->exclude_guest)
  VAR_3->pmu_events.events_guest |= VAR_1;
}
