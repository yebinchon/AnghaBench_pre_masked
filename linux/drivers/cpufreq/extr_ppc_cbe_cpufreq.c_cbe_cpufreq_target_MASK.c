
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int cpu; } ;
struct TYPE_2__ {int driver_data; int frequency; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_1,
         unsigned int VAR_2)
{
 FUNC_0("setting frequency for cpu %d to %d kHz, " "1/%d of max frequency\n",

   VAR_1->cpu,
   VAR_0[VAR_2].frequency,
   VAR_0[VAR_2].driver_data);

 return FUNC_1(VAR_1->cpu, VAR_2);
}
