
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct arch_hw_breakpoint {int dummy; } ;
struct TYPE_2__ {int num_events; int (* enable ) (struct arch_hw_breakpoint*,int) ;int clk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int * VAR_1 ;
 int FUNC_1 (int ) ;
 struct arch_hw_breakpoint* FUNC_2 (struct perf_event*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct arch_hw_breakpoint*,int) ;
 struct perf_event** FUNC_4 (int *) ;

int FUNC_5(struct perf_event *VAR_3)
{
 struct arch_hw_breakpoint *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_events; VAR_5++) {
  struct perf_event **VAR_6 = FUNC_4(&VAR_1[VAR_5]);

  if (!*VAR_6) {
   *VAR_6 = VAR_3;
   break;
  }
 }

 if (FUNC_0(VAR_5 == VAR_2->num_events, "Can't find any breakpoint slot"))
  return -VAR_0;

 FUNC_1(VAR_2->clk);
 VAR_2->enable(VAR_4, VAR_5);

 return 0;
}
