
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_event {int dummy; } ;
struct hw_perf_event {int sample_period; int last_period; int prev_count; int period_left; } ;
typedef int s64 ;
struct TYPE_2__ {int (* write_pmc ) (int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct perf_event*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct perf_event *VAR_2,
           struct hw_perf_event *VAR_3, int VAR_4)
{
 s64 VAR_5 = FUNC_0(&VAR_3->period_left);
 s64 VAR_6 = VAR_3->sample_period;
 int VAR_7 = 0;


 if (FUNC_4(VAR_6 != VAR_3->last_period))
  VAR_5 = VAR_6 - (VAR_3->last_period - VAR_5);

 if (FUNC_4(VAR_5 <= -VAR_6)) {
  VAR_5 = VAR_6;
  FUNC_1(&VAR_3->period_left, VAR_5);
  VAR_3->last_period = VAR_6;
  VAR_7 = 1;
 }

 if (FUNC_4(VAR_5 <= 0)) {
  VAR_5 += VAR_6;
  FUNC_1(&VAR_3->period_left, VAR_5);
  VAR_3->last_period = VAR_6;
  VAR_7 = 1;
 }
 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;

 FUNC_1(&VAR_3->prev_count, (u64)-VAR_5);

 VAR_1->write_pmc(VAR_4, (u64)(-VAR_5) & 0xffffffff);

 FUNC_2(VAR_2);

 return VAR_7;
}
