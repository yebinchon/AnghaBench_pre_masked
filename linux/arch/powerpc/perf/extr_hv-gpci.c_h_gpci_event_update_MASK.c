
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int prev_count; } ;
struct perf_event {int count; TYPE_1__ hw; } ;
typedef scalar_t__ s64 ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_0)
{
 s64 VAR_1;
 u64 VAR_2 = FUNC_0(VAR_0);
 VAR_1 = FUNC_2(&VAR_0->hw.prev_count, VAR_2);
 FUNC_1(VAR_2 - VAR_1, &VAR_0->count);
}
