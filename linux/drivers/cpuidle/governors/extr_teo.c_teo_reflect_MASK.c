
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct teo_cpu {scalar_t__ sleep_length_ns; scalar_t__ time_span_ns; } ;
struct cpuidle_device {int last_state_idx; int poll_time_limit; int cpu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 struct teo_cpu* FUNC_1 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct cpuidle_device *VAR_2, int VAR_3)
{
 struct teo_cpu *VAR_4 = FUNC_1(&VAR_1, VAR_2->cpu);

 VAR_2->last_state_idx = VAR_3;





 if (VAR_2->poll_time_limit ||
     (FUNC_2() && VAR_4->sleep_length_ns > VAR_0)) {
  VAR_2->poll_time_limit = 0;
  VAR_4->time_span_ns = VAR_4->sleep_length_ns;
 } else {
  VAR_4->time_span_ns = FUNC_0() - VAR_4->time_span_ns;
 }
}
