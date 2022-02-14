
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; int prev_count; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_0)
{
 struct hw_perf_event *VAR_1 = &VAR_0->hw;
 FUNC_1(&VAR_1->prev_count, 0);
 FUNC_0(VAR_1->idx, 0);
}
