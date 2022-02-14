
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct TYPE_2__ {int enabled; } ;
struct arch_hw_breakpoint {unsigned long trigger; TYPE_1__ step_ctrl; } ;


 int VAR_0 ;
 struct arch_hw_breakpoint* FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct perf_event** FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_2)
{
 int VAR_3;
 struct perf_event *VAR_4, **VAR_5;
 struct arch_hw_breakpoint *VAR_6;

 VAR_5 = FUNC_4(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  FUNC_2();

  VAR_4 = VAR_5[VAR_3];

  if (VAR_4 == ((void*)0))
   goto unlock;

  VAR_6 = FUNC_0(VAR_4);
  if (!VAR_6->step_ctrl.enabled)
   goto unlock;





  if (VAR_6->trigger != VAR_2)
   FUNC_1(VAR_4);

unlock:
  FUNC_3();
 }
}
