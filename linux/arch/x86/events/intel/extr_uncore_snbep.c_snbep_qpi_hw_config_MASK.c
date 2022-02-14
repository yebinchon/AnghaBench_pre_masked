
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config2; int config1; } ;
struct hw_perf_event_extra {int config; int reg; scalar_t__ idx; } ;
struct hw_perf_event {int config; struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; } ;
struct intel_uncore_box {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct intel_uncore_box *VAR_3, struct perf_event *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_4->hw;
 struct hw_perf_event_extra *VAR_6 = &VAR_5->extra_reg;
 struct hw_perf_event_extra *VAR_7 = &VAR_5->branch_reg;

 if ((VAR_5->config & VAR_0) == 0x38) {
  VAR_6->idx = 0;
  VAR_6->reg = VAR_2;
  VAR_6->config = VAR_4->attr.config1;
  VAR_7->reg = VAR_1;
  VAR_7->config = VAR_4->attr.config2;
 }
 return 0;
}
