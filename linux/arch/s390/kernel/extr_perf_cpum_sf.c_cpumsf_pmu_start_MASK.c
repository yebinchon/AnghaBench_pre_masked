
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
struct perf_event {int pmu; TYPE_2__ hw; } ;
struct TYPE_3__ {int cs; int cd; } ;
struct cpu_hw_sf {TYPE_1__ lsctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct cpu_hw_sf* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_4, int VAR_5)
{
 struct cpu_hw_sf *VAR_6 = FUNC_4(&VAR_3);

 if (FUNC_1(!(VAR_4->hw.state & VAR_1)))
  return;

 if (VAR_5 & VAR_0)
  FUNC_1(!(VAR_4->hw.state & VAR_2));

 FUNC_2(VAR_4->pmu);
 VAR_4->hw.state = 0;
 VAR_6->lsctl.cs = 1;
 if (FUNC_0(&VAR_4->hw))
  VAR_6->lsctl.cd = 1;
 FUNC_3(VAR_4->pmu);
}
