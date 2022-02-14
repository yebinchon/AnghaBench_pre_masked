
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int precise_ip; } ;
struct hw_perf_event {unsigned long long idx; scalar_t__ config_base; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; } ;
struct cpu_hw_events {unsigned long long intel_ctrl_guest_mask; unsigned long long intel_ctrl_host_mask; unsigned long long intel_cp_status; } ;


 unsigned long long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct hw_perf_event*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct perf_event*) ;
 struct cpu_hw_events* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct perf_event*) ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_3->hw;
 struct cpu_hw_events *VAR_5 = FUNC_4(&VAR_2);

 if (FUNC_5(VAR_4->idx == VAR_0)) {
  FUNC_0();
  FUNC_2();
  return;
 }

 VAR_5->intel_ctrl_guest_mask &= ~(1ull << VAR_4->idx);
 VAR_5->intel_ctrl_host_mask &= ~(1ull << VAR_4->idx);
 VAR_5->intel_cp_status &= ~(1ull << VAR_4->idx);

 if (FUNC_5(VAR_4->config_base == VAR_1))
  FUNC_1(VAR_4);
 else
  FUNC_6(VAR_3);





 if (FUNC_5(VAR_3->attr.precise_ip))
  FUNC_3(VAR_3);
}
