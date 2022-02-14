
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event {int config; int prev_count; int event_base; } ;
struct perf_event {int count; struct hw_perf_event hw; } ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static u64 FUNC_6(struct perf_event *VAR_1)
{
 struct hw_perf_event *VAR_2 = &VAR_1->hw;
 u64 VAR_3, VAR_4;
 s64 VAR_5, VAR_6;
 int VAR_7 = VAR_0;

again:
 VAR_3 = FUNC_3(&VAR_2->prev_count);
 FUNC_5(VAR_1->hw.event_base, VAR_4);

 if (FUNC_2(&VAR_2->prev_count, VAR_3,
       VAR_4) != VAR_3) {
  FUNC_0();
  goto again;
 }
 VAR_5 = (VAR_4 << VAR_7) - (VAR_3 << VAR_7);
 VAR_5 >>= VAR_7;

 VAR_6 = FUNC_4(VAR_5, VAR_1->hw.config);

 FUNC_1(VAR_6, &VAR_1->count);

 return VAR_4;
}
