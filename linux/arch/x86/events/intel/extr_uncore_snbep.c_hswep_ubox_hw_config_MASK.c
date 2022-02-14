
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int config1; } ;
struct hw_perf_event_extra {int config; scalar_t__ idx; int reg; } ;
struct TYPE_3__ {struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__ hw; } ;
struct intel_uncore_box {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct intel_uncore_box *VAR_2, struct perf_event *VAR_3)
{
 struct hw_perf_event_extra *VAR_4 = &VAR_3->hw.extra_reg;
 VAR_4->reg = VAR_1;
 VAR_4->config = VAR_3->attr.config1 & VAR_0;
 VAR_4->idx = 0;
 return 0;
}
