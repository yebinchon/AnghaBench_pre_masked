
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct hw_perf_event {long sample_period; long last_period; int prev_count; int period_left; } ;
struct TYPE_2__ {long* pmc_left; long* pmc_max_period; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,unsigned long) ;
 long FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct perf_event*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct perf_event *VAR_1,
    struct hw_perf_event *VAR_2, int VAR_3)
{
 long VAR_4 = FUNC_1(&VAR_2->period_left);
 long VAR_5 = VAR_2->sample_period;
 int VAR_6 = 0;

 if (FUNC_4(VAR_4 <= -VAR_5)) {
  VAR_4 = VAR_5;
  FUNC_2(&VAR_2->period_left, VAR_4);
  VAR_2->last_period = VAR_5;
  VAR_6 = 1;
 }

 if (FUNC_4(VAR_4 <= 0)) {
  VAR_4 += VAR_5;
  FUNC_2(&VAR_2->period_left, VAR_4);
  VAR_2->last_period = VAR_5;
  VAR_6 = 1;
 }





 if (FUNC_4(VAR_4 < VAR_0->pmc_left[VAR_3]))
  VAR_4 = VAR_0->pmc_left[VAR_3];

 if (VAR_4 > (long)VAR_0->pmc_max_period[VAR_3])
  VAR_4 = VAR_0->pmc_max_period[VAR_3];

 FUNC_2(&VAR_2->prev_count, (unsigned long)(-VAR_4));

 FUNC_0(VAR_3, (unsigned long)(-VAR_4));

 FUNC_3(VAR_1);

 return VAR_6;
}
