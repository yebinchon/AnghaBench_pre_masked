
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int prev_count; } ;
struct perf_event {TYPE_1__ hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (struct perf_event*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static u64 FUNC_4(struct perf_event *VAR_0)
{
 u64 *VAR_1, VAR_2;







 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = FUNC_1(FUNC_0(*VAR_1));
 FUNC_3(&VAR_0->hw.prev_count, VAR_2);

 return VAR_2;
}
