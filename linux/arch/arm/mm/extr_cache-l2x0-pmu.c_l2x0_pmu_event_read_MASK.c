
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hw_perf_event {int idx; int prev_count; } ;
struct perf_event {int count; struct hw_perf_event hw; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_0)
{
 struct hw_perf_event *VAR_1 = &VAR_0->hw;
 u64 VAR_2, VAR_3, VAR_4;

 do {
   VAR_2 = FUNC_3(&VAR_1->prev_count);
   VAR_3 = FUNC_1(VAR_1->idx);
 } while (FUNC_4(&VAR_1->prev_count, VAR_3) != VAR_2);

 VAR_4 = FUNC_0(31, 0);
 FUNC_2((VAR_3 - VAR_2) & VAR_4, &VAR_0->count);

 FUNC_5(VAR_3);
}
