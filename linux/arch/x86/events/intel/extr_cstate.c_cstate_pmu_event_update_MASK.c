
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hw_perf_event {int prev_count; } ;
struct perf_event {int count; struct hw_perf_event hw; } ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_0)
{
 struct hw_perf_event *VAR_1 = &VAR_0->hw;
 u64 VAR_2, VAR_3;

again:
 VAR_2 = FUNC_3(&VAR_1->prev_count);
 VAR_3 = FUNC_0(VAR_0);

 if (FUNC_2(&VAR_1->prev_count, VAR_2,
       VAR_3) != VAR_2)
  goto again;

 FUNC_1(VAR_3 - VAR_2, &VAR_0->count);
}
