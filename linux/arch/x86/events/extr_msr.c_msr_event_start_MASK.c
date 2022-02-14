
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int prev_count; } ;
struct perf_event {TYPE_1__ hw; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct perf_event*) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_0, int VAR_1)
{
 u64 VAR_2 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->hw.prev_count, VAR_2);
}
