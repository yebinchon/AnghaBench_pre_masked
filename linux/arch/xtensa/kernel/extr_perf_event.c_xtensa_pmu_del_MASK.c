
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xtensa_pmu_events {int used_mask; } ;
struct TYPE_2__ {int idx; } ;
struct perf_event {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct perf_event*) ;
 struct xtensa_pmu_events* FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct perf_event*,int ) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_2, int VAR_3)
{
 struct xtensa_pmu_events *VAR_4 = FUNC_2(&VAR_1);

 FUNC_3(VAR_2, VAR_0);
 FUNC_0(VAR_2->hw.idx, VAR_4->used_mask);
 FUNC_1(VAR_2);
}
