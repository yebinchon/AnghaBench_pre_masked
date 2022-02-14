
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_event {int count; } ;
struct hw_perf_event {int period_left; int prev_count; } ;
typedef int s64 ;
struct TYPE_2__ {int (* read_pmc ) (int) ;} ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (int) ;

__attribute__((used)) static u64 FUNC_5(struct perf_event *VAR_1,
       struct hw_perf_event *VAR_2, int VAR_3)
{
 int VAR_4 = 64 - 32;
 u64 VAR_5, VAR_6;
 s64 VAR_7;

again:
 VAR_5 = FUNC_2(&VAR_2->prev_count);
 VAR_6 = VAR_0->read_pmc(VAR_3);

 if (FUNC_1(&VAR_2->prev_count, VAR_5,
        VAR_6) != VAR_5)
  goto again;

 VAR_7 = (VAR_6 << VAR_4) - (VAR_5 << VAR_4);
 VAR_7 >>= VAR_4;

 FUNC_0(VAR_7, &VAR_1->count);
 FUNC_3(VAR_7, &VAR_2->period_left);

 return VAR_6;
}
