
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int precise_ip; scalar_t__ exclude_guest; scalar_t__ exclude_host; } ;
struct hw_perf_event {unsigned long long idx; scalar_t__ config_base; int config; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; } ;
struct cpu_hw_events {unsigned long long intel_ctrl_guest_mask; unsigned long long intel_ctrl_host_mask; unsigned long long intel_cp_status; } ;
struct TYPE_5__ {int enabled; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hw_perf_event*,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct perf_event*) ;
 struct cpu_hw_events* FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct perf_event *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_4->hw;
 struct cpu_hw_events *VAR_6 = FUNC_6(&VAR_3);

 if (FUNC_7(VAR_5->idx == VAR_1)) {
  if (!FUNC_0(VAR_3.enabled))
   return;

  FUNC_3(VAR_5->config);
  return;
 }

 if (VAR_4->attr.exclude_host)
  VAR_6->intel_ctrl_guest_mask |= (1ull << VAR_5->idx);
 if (VAR_4->attr.exclude_guest)
  VAR_6->intel_ctrl_host_mask |= (1ull << VAR_5->idx);

 if (FUNC_7(FUNC_2(VAR_4)))
  VAR_6->intel_cp_status |= (1ull << VAR_5->idx);

 if (FUNC_7(VAR_4->attr.precise_ip))
  FUNC_5(VAR_4);

 if (FUNC_7(VAR_5->config_base == VAR_2)) {
  FUNC_4(VAR_4);
  return;
 }

 FUNC_1(VAR_5, VAR_0);
}
