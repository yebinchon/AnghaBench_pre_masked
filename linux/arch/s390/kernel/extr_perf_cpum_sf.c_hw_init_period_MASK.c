
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event {int sample_period; int period_left; int last_period; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct hw_perf_event *VAR_0, u64 VAR_1)
{
 VAR_0->sample_period = VAR_1;
 VAR_0->last_period = VAR_0->sample_period;
 FUNC_0(&VAR_0->period_left, VAR_0->sample_period);
}
