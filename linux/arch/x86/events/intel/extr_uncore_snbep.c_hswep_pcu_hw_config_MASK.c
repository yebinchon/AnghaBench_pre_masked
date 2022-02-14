
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config1; } ;
struct hw_perf_event_extra {int idx; int config; int reg; } ;
struct hw_perf_event {int config; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; } ;
struct intel_uncore_box {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct intel_uncore_box *VAR_2, struct perf_event *VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_3->hw;
 struct hw_perf_event_extra *VAR_5 = &VAR_4->extra_reg;
 int VAR_6 = VAR_4->config & VAR_1;

 if (VAR_6 >= 0xb && VAR_6 <= 0xe) {
  VAR_5->reg = VAR_0;
  VAR_5->idx = VAR_6 - 0xb;
  VAR_5->config = VAR_3->attr.config1 & (0xff << VAR_5->idx);
 }
 return 0;
}
