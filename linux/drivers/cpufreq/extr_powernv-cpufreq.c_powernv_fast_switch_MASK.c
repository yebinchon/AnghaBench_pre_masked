
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct powernv_smp_call_data {int gpstate_id; int pstate_id; } ;
struct cpufreq_policy {int dummy; } ;
struct TYPE_2__ {unsigned int frequency; int driver_data; } ;


 int FUNC_0 (struct cpufreq_policy*,unsigned int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct powernv_smp_call_data*) ;

__attribute__((used)) static unsigned int FUNC_2(struct cpufreq_policy *VAR_1,
     unsigned int VAR_2)
{
 int VAR_3;
 struct powernv_smp_call_data VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 VAR_4.pstate_id = VAR_0[VAR_3].driver_data;
 VAR_4.gpstate_id = VAR_0[VAR_3].driver_data;
 FUNC_1(&VAR_4);

 return VAR_0[VAR_3].frequency;
}
