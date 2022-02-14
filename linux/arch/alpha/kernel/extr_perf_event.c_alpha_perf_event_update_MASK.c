
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int count; } ;
struct hw_perf_event {int period_left; int prev_count; } ;
struct TYPE_2__ {long* pmc_count_mask; scalar_t__* pmc_max_period; } ;


 TYPE_1__* VAR_0 ;
 long FUNC_0 (int) ;
 int FUNC_1 (long,int *) ;
 long FUNC_2 (int *,long,long) ;
 long FUNC_3 (int *) ;
 int FUNC_4 (long,int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static unsigned long FUNC_6(struct perf_event *VAR_1,
     struct hw_perf_event *VAR_2, int VAR_3, long VAR_4)
{
 long VAR_5, VAR_6;
 long VAR_7;

again:
 VAR_5 = FUNC_3(&VAR_2->prev_count);
 VAR_6 = FUNC_0(VAR_3);

 if (FUNC_2(&VAR_2->prev_count, VAR_5,
        VAR_6) != VAR_5)
  goto again;

 VAR_7 = (VAR_6 - (VAR_5 & VAR_0->pmc_count_mask[VAR_3])) + VAR_4;




 if (FUNC_5(VAR_7 < 0)) {
  VAR_7 += VAR_0->pmc_max_period[VAR_3] + 1;
 }

 FUNC_1(VAR_7, &VAR_1->count);
 FUNC_4(VAR_7, &VAR_2->period_left);

 return VAR_6;
}
