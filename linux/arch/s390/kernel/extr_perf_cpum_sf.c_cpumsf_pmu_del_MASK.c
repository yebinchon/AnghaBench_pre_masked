
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int pmu; int hw; } ;
struct TYPE_2__ {scalar_t__ ed; scalar_t__ es; } ;
struct cpu_hw_sf {int handle; int * event; int flags; TYPE_1__ lsctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct perf_event*,int ) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct cpu_hw_sf* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_3, int VAR_4)
{
 struct cpu_hw_sf *VAR_5 = FUNC_6(&VAR_2);

 FUNC_4(VAR_3->pmu);
 FUNC_2(VAR_3, VAR_0);

 VAR_5->lsctl.es = 0;
 VAR_5->lsctl.ed = 0;
 VAR_5->flags &= ~VAR_1;
 VAR_5->event = ((void*)0);

 if (FUNC_0(&VAR_3->hw))
  FUNC_1(&VAR_5->handle);
 FUNC_3(VAR_3);
 FUNC_5(VAR_3->pmu);
}
