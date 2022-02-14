
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmu_hw_events {int used_mask; } ;
struct TYPE_2__ {int idx; } ;
struct perf_event {TYPE_1__ hw; } ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct pmu_hw_events *VAR_0,
         struct perf_event *VAR_1)
{
 int VAR_2 = VAR_1->hw.idx;

 FUNC_1(VAR_2, VAR_0->used_mask);
 if (FUNC_0(VAR_1))
  FUNC_1(VAR_2 - 1, VAR_0->used_mask);
}
