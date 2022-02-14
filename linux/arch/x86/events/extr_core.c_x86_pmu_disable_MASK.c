
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmu {int dummy; } ;
struct cpu_hw_events {scalar_t__ enabled; scalar_t__ n_added; } ;
struct TYPE_2__ {int (* disable_all ) () ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 struct cpu_hw_events* FUNC_2 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct pmu *VAR_2)
{
 struct cpu_hw_events *VAR_3 = FUNC_2(&VAR_0);

 if (!FUNC_3())
  return;

 if (!VAR_3->enabled)
  return;

 VAR_3->n_added = 0;
 VAR_3->enabled = 0;
 FUNC_0();

 VAR_1.disable_all();
}
