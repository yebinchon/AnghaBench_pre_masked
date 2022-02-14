
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int transition_latency; } ;
struct cpufreq_policy {unsigned int transition_delay_us; TYPE_1__ cpuinfo; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;

unsigned int FUNC_1(struct cpufreq_policy *VAR_2)
{
 unsigned int VAR_3;

 if (VAR_2->transition_delay_us)
  return VAR_2->transition_delay_us;

 VAR_3 = VAR_2->cpuinfo.transition_latency / VAR_1;
 if (VAR_3) {
  return FUNC_0(VAR_3 * VAR_0, (unsigned int)10000);
 }

 return VAR_0;
}
