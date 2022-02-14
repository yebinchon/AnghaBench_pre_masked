
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct perf_event {int dummy; } ;
struct die_args {struct pt_regs* regs; } ;
struct arch_hw_breakpoint {int type; } ;
struct TYPE_3__ {struct perf_event* last_hit_ubp; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct arch_hw_breakpoint*) ;
 struct arch_hw_breakpoint* FUNC_1 (struct perf_event*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (struct perf_event*,struct pt_regs*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct die_args *VAR_5)
{
 struct pt_regs *VAR_6 = VAR_5->regs;
 struct perf_event *VAR_7 = ((void*)0);
 struct arch_hw_breakpoint *VAR_8;

 VAR_7 = VAR_4->thread.last_hit_ubp;




 if (!VAR_7)
  return VAR_1;

 VAR_8 = FUNC_1(VAR_7);





 if (!(VAR_8->type & VAR_0))
  FUNC_2(VAR_7, VAR_6);

 FUNC_0(VAR_8);
 VAR_4->thread.last_hit_ubp = ((void*)0);





 if (FUNC_3(VAR_3))
  return VAR_1;

 return VAR_2;
}
