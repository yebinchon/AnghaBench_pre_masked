
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct arch_hw_breakpoint {int dummy; } ;
struct TYPE_2__ {int num_events; int clk; int (* disable ) (struct arch_hw_breakpoint*,int) ;} ;


 scalar_t__ FUNC_0 (int,char*) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 struct arch_hw_breakpoint* FUNC_2 (struct perf_event*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (struct arch_hw_breakpoint*,int) ;
 struct perf_event** FUNC_4 (int *) ;

void FUNC_5(struct perf_event *VAR_2)
{
 struct arch_hw_breakpoint *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_events; VAR_4++) {
  struct perf_event **VAR_5 = FUNC_4(&VAR_0[VAR_4]);

  if (*VAR_5 == VAR_2) {
   *VAR_5 = ((void*)0);
   break;
  }
 }

 if (FUNC_0(VAR_4 == VAR_1->num_events, "Can't find any breakpoint slot"))
  return;

 VAR_1->disable(VAR_3, VAR_4);
 FUNC_1(VAR_1->clk);
}
