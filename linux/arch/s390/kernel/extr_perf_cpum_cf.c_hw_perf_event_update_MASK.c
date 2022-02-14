
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_2__ {int config; int prev_count; } ;
struct perf_event {int count; TYPE_1__ hw; } ;


 int FUNC_0 (int ,unsigned long long*) ;
 int FUNC_1 (unsigned long long,int *) ;
 unsigned long long FUNC_2 (int *,unsigned long long,unsigned long long) ;
 unsigned long long FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_0)
{
 u64 VAR_1, VAR_2, VAR_3;
 int VAR_4;

 do {
  VAR_1 = FUNC_3(&VAR_0->hw.prev_count);
  VAR_4 = FUNC_0(VAR_0->hw.config, &VAR_2);
  if (VAR_4)
   return;
 } while (FUNC_2(&VAR_0->hw.prev_count, VAR_1, VAR_2) != VAR_1);

 VAR_3 = (VAR_1 <= VAR_2) ? VAR_2 - VAR_1
         : (-1ULL - VAR_1) + VAR_2 + 1;
 FUNC_1(VAR_3, &VAR_0->count);
}
