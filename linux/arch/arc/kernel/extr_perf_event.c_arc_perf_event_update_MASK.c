
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct perf_event {int count; } ;
struct hw_perf_event {int period_left; int prev_count; } ;
typedef scalar_t__ s64 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_0,
      struct hw_perf_event *VAR_1, int VAR_2)
{
 u64 VAR_3 = FUNC_2(&VAR_1->prev_count);
 u64 VAR_4 = FUNC_0(VAR_2);
 s64 VAR_5 = VAR_4 - VAR_3;





 FUNC_3(&VAR_1->prev_count, VAR_4);
 FUNC_1(VAR_5, &VAR_0->count);
 FUNC_4(VAR_5, &VAR_1->period_left);
}
