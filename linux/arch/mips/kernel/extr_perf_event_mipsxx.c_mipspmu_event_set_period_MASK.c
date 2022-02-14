
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct perf_event {int dummy; } ;
struct hw_perf_event {unsigned long long sample_period; unsigned long long last_period; int prev_count; int period_left; } ;
struct TYPE_2__ {unsigned long long max_period; unsigned long long overflow; int (* write_counter ) (int,unsigned long long) ;} ;


 unsigned long long FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long long) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (int,unsigned long long) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct perf_event *VAR_1,
        struct hw_perf_event *VAR_2,
        int VAR_3)
{
 u64 VAR_4 = FUNC_0(&VAR_2->period_left);
 u64 VAR_5 = VAR_2->sample_period;
 int VAR_6 = 0;

 if (FUNC_4((VAR_4 + VAR_5) & (1ULL << 63))) {

  VAR_4 = VAR_5;
  FUNC_1(&VAR_2->period_left, VAR_4);
  VAR_2->last_period = VAR_5;
  VAR_6 = 1;
 } else if (FUNC_4((VAR_4 + VAR_5) <= VAR_5)) {

  VAR_4 += VAR_5;
  FUNC_1(&VAR_2->period_left, VAR_4);
  VAR_2->last_period = VAR_5;
  VAR_6 = 1;
 }

 if (VAR_4 > VAR_0.max_period) {
  VAR_4 = VAR_0.max_period;
  FUNC_1(&VAR_2->period_left, VAR_4);
 }

 FUNC_1(&VAR_2->prev_count, VAR_0.overflow - VAR_4);

 VAR_0.write_counter(VAR_3, VAR_0.overflow - VAR_4);

 FUNC_2(VAR_1);

 return VAR_6;
}
