
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long config; int config2; int config1; } ;
struct hw_perf_event_extra {int idx; int config; } ;
struct hw_perf_event {int config; struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; } ;
struct intel_uncore_box {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct intel_uncore_box *VAR_3, struct perf_event *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_4->hw;
 struct hw_perf_event_extra *VAR_6 = &VAR_4->hw.extra_reg;
 struct hw_perf_event_extra *VAR_7 = &VAR_4->hw.branch_reg;
 int VAR_8;

 VAR_8 = (VAR_4->hw.config & VAR_1) >>
  VAR_2;
 if (VAR_8 >= 0x18)
  return -VAR_0;

 VAR_6->idx = VAR_8;
 VAR_6->config = VAR_4->attr.config1;

 switch (VAR_8 % 6) {
 case 4:
 case 5:
  VAR_5->config |= VAR_4->attr.config & (~0ULL << 32);
  VAR_7->config = VAR_4->attr.config2;
  break;
 }
 return 0;
}
