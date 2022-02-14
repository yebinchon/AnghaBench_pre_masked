
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct perf_event {int pmu; TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct perf_event *VAR_1)
{
 FUNC_0(!(VAR_1->hw.flags & VAR_0));

 FUNC_2(VAR_1->pmu);
 FUNC_1();
 FUNC_3(VAR_1->pmu);
}
