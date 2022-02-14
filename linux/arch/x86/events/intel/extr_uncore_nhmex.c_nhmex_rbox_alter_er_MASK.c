
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event_extra {int idx; int config; } ;
struct hw_perf_event {int config; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct intel_uncore_box *VAR_1, struct perf_event *VAR_2)
{
 struct hw_perf_event *VAR_3 = &VAR_2->hw;
 struct hw_perf_event_extra *VAR_4 = &VAR_3->extra_reg;


 if (VAR_4->idx % 2) {
  VAR_4->idx--;
  VAR_3->config -= 1 << VAR_0;
 } else {
  VAR_4->idx++;
  VAR_3->config += 1 << VAR_0;
 }


 switch (VAR_4->idx % 6) {
 case 2:

  VAR_4->config >>= 8;
  break;
 case 3:

  VAR_4->config <<= 8;
  break;
 }
}
