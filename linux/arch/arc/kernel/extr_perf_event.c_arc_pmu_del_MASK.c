
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t idx; } ;
struct perf_event {TYPE_1__ hw; } ;
struct arc_pmu_cpu {scalar_t__* act_counter; int used_mask; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct perf_event*,int ) ;
 int FUNC_2 (struct perf_event*) ;
 struct arc_pmu_cpu* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_2, int VAR_3)
{
 struct arc_pmu_cpu *VAR_4 = FUNC_3(&VAR_1);

 FUNC_1(VAR_2, VAR_0);
 FUNC_0(VAR_2->hw.idx, VAR_4->used_mask);

 VAR_4->act_counter[VAR_2->hw.idx] = 0;

 FUNC_2(VAR_2);
}
