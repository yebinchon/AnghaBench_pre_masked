
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct arch_hw_breakpoint {int dummy; } ;
struct TYPE_3__ {struct perf_event* last_hit_ubp; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int FUNC_0 (struct arch_hw_breakpoint*) ;
 int VAR_0 ;
 struct arch_hw_breakpoint* FUNC_1 (struct perf_event*) ;
 TYPE_2__* VAR_1 ;
 struct perf_event** FUNC_2 (int *) ;

int FUNC_3(struct perf_event *VAR_2)
{
 struct arch_hw_breakpoint *VAR_3 = FUNC_1(VAR_2);
 struct perf_event **VAR_4 = FUNC_2(&VAR_0);

 *VAR_4 = VAR_2;





 if (VAR_1->thread.last_hit_ubp != VAR_2)
  FUNC_0(VAR_3);

 return 0;
}
