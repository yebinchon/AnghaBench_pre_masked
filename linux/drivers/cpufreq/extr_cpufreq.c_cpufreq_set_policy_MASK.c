
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {struct cpufreq_governor* governor; int policy; void* max; void* min; int cached_target_freq; int constraints; int cpuinfo; int cpu; } ;
struct cpufreq_governor {int name; } ;
struct TYPE_2__ {int (* verify ) (struct cpufreq_policy*) ;int (* setpolicy ) (struct cpufreq_policy*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct cpufreq_policy*) ;
 int FUNC_1 (struct cpufreq_policy*) ;
 int FUNC_2 (struct cpufreq_policy*) ;
 int FUNC_3 (struct cpufreq_policy*) ;
 int FUNC_4 (struct cpufreq_policy*) ;
 void* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct cpufreq_policy*,struct cpufreq_governor*) ;
 int FUNC_9 (struct cpufreq_policy*) ;
 int FUNC_10 (struct cpufreq_policy*) ;
 int FUNC_11 (struct cpufreq_policy*) ;

int FUNC_12(struct cpufreq_policy *VAR_4,
         struct cpufreq_policy *VAR_5)
{
 struct cpufreq_governor *VAR_6;
 int VAR_7;

 FUNC_7("setting new policy for CPU %u: %u - %u kHz\n",
   VAR_5->cpu, VAR_5->min, VAR_5->max);

 FUNC_6(&VAR_5->cpuinfo, &VAR_4->cpuinfo, sizeof(VAR_4->cpuinfo));





 VAR_5->min = FUNC_5(&VAR_4->constraints, VAR_1);
 VAR_5->max = FUNC_5(&VAR_4->constraints, VAR_0);


 VAR_7 = VAR_3->verify(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_4->min = VAR_5->min;
 VAR_4->max = VAR_5->max;
 FUNC_11(VAR_4);

 VAR_4->cached_target_freq = VAR_2;

 FUNC_7("new min and max freqs are %u - %u kHz\n",
   VAR_4->min, VAR_4->max);

 if (VAR_3->setpolicy) {
  VAR_4->policy = VAR_5->policy;
  FUNC_7("setting range\n");
  return VAR_3->setpolicy(VAR_4);
 }

 if (VAR_5->governor == VAR_4->governor) {
  FUNC_7("governor limits update\n");
  FUNC_1(VAR_4);
  return 0;
 }

 FUNC_7("governor switch\n");


 VAR_6 = VAR_4->governor;

 if (VAR_6) {
  FUNC_4(VAR_4);
  FUNC_0(VAR_4);
 }


 VAR_4->governor = VAR_5->governor;
 VAR_7 = FUNC_2(VAR_4);
 if (!VAR_7) {
  VAR_7 = FUNC_3(VAR_4);
  if (!VAR_7) {
   FUNC_7("governor change\n");
   FUNC_8(VAR_4, VAR_6);
   return 0;
  }
  FUNC_0(VAR_4);
 }


 FUNC_7("starting governor %s failed\n", VAR_4->governor->name);
 if (VAR_6) {
  VAR_4->governor = VAR_6;
  if (FUNC_2(VAR_4))
   VAR_4->governor = ((void*)0);
  else
   FUNC_3(VAR_4);
 }

 return VAR_7;
}
