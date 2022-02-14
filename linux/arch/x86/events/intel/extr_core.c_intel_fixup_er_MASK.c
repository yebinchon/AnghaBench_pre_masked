
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int idx; int reg; } ;
struct TYPE_7__ {TYPE_2__ extra_reg; int config; } ;
struct perf_event {TYPE_3__ hw; } ;
struct TYPE_8__ {TYPE_1__* extra_regs; } ;
struct TYPE_5__ {int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;

__attribute__((used)) static void FUNC_0(struct perf_event *VAR_6, int VAR_7)
{
 VAR_6->hw.extra_reg.idx = VAR_7;

 if (VAR_7 == VAR_0) {
  VAR_6->hw.config &= ~VAR_2;
  VAR_6->hw.config |= VAR_5.extra_regs[VAR_0].event;
  VAR_6->hw.extra_reg.reg = VAR_3;
 } else if (VAR_7 == VAR_1) {
  VAR_6->hw.config &= ~VAR_2;
  VAR_6->hw.config |= VAR_5.extra_regs[VAR_1].event;
  VAR_6->hw.extra_reg.reg = VAR_4;
 }
}
