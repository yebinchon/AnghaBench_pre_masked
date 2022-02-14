
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int config1; } ;
struct hw_perf_event_extra {int config; scalar_t__ reg; int idx; } ;
struct TYPE_5__ {struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_1__ attr; TYPE_2__ hw; } ;
struct extra_reg {int event; int config_mask; int valid_mask; scalar_t__ msr; int idx; int extra_msr_access; } ;
struct TYPE_6__ {struct extra_reg* extra_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static int FUNC_0(u64 VAR_3, struct perf_event *VAR_4)
{
 struct hw_perf_event_extra *VAR_5;
 struct extra_reg *VAR_6;

 VAR_5 = &VAR_4->hw.extra_reg;

 if (!VAR_2.extra_regs)
  return 0;

 for (VAR_6 = VAR_2.extra_regs; VAR_6->msr; VAR_6++) {
  if (VAR_6->event != (VAR_3 & VAR_6->config_mask))
   continue;
  if (VAR_4->attr.config1 & ~VAR_6->valid_mask)
   return -VAR_0;

  if (!VAR_6->extra_msr_access)
   return -VAR_1;

  VAR_5->idx = VAR_6->idx;
  VAR_5->config = VAR_4->attr.config1;
  VAR_5->reg = VAR_6->msr;
  break;
 }
 return 0;
}
