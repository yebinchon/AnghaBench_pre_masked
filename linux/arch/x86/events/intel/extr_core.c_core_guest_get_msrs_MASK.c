
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_guest_switch_msr {int host; int guest; int msr; } ;
struct TYPE_5__ {scalar_t__ exclude_guest; scalar_t__ exclude_host; } ;
struct TYPE_4__ {int config; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__ hw; } ;
struct cpu_hw_events {int active_mask; struct perf_event** events; struct perf_guest_switch_msr* guest_switch_msrs; } ;
struct TYPE_6__ {int num_counters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 struct cpu_hw_events* FUNC_1 (int *) ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static struct perf_guest_switch_msr *FUNC_3(int *VAR_3)
{
 struct cpu_hw_events *VAR_4 = FUNC_1(&VAR_1);
 struct perf_guest_switch_msr *VAR_5 = VAR_4->guest_switch_msrs;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2.num_counters; VAR_6++) {
  struct perf_event *VAR_7 = VAR_4->events[VAR_6];

  VAR_5[VAR_6].msr = FUNC_2(VAR_6);
  VAR_5[VAR_6].host = VAR_5[VAR_6].guest = 0;

  if (!FUNC_0(VAR_6, VAR_4->active_mask))
   continue;

  VAR_5[VAR_6].host = VAR_5[VAR_6].guest =
   VAR_7->hw.config | VAR_0;

  if (VAR_7->attr.exclude_host)
   VAR_5[VAR_6].host &= ~VAR_0;
  else if (VAR_7->attr.exclude_guest)
   VAR_5[VAR_6].guest &= ~VAR_0;
 }

 *VAR_3 = VAR_2.num_counters;
 return VAR_5;
}
