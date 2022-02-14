
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event {int prev_count; int event_base_rdpmc; } ;
struct perf_event {int count; struct hw_perf_event hw; } ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_1)
{
 struct hw_perf_event *VAR_2 = &VAR_1->hw;
 u64 VAR_3, VAR_4;
 s64 VAR_5;






 VAR_3 = FUNC_1(&VAR_2->prev_count);
 FUNC_3(VAR_2->event_base_rdpmc, VAR_4);
 FUNC_2(&VAR_2->prev_count, VAR_4);
 VAR_5 = (VAR_4 << VAR_0) - (VAR_3 << VAR_0);
 VAR_5 >>= VAR_0;
 FUNC_0(VAR_5, &VAR_1->count);
}
