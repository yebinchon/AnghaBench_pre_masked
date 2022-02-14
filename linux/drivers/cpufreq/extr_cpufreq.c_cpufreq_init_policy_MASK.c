
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {scalar_t__ last_policy; scalar_t__ policy; struct cpufreq_governor* governor; int cpu; int last_governor; } ;
struct cpufreq_governor {int name; } ;


 int VAR_0 ;
 struct cpufreq_governor* FUNC_0 () ;
 int FUNC_1 (int ,struct cpufreq_policy*) ;
 int FUNC_2 (struct cpufreq_policy*,struct cpufreq_policy*) ;
 struct cpufreq_governor* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct cpufreq_policy*,struct cpufreq_policy*,int) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct cpufreq_policy *VAR_1)
{
 struct cpufreq_governor *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
 struct cpufreq_policy VAR_4;

 FUNC_5(&VAR_4, VAR_1, sizeof(*VAR_1));

 VAR_3 = FUNC_0();

 if (FUNC_4()) {




  VAR_2 = FUNC_3(VAR_1->last_governor);
  if (VAR_2) {
   FUNC_6("Restoring governor %s for cpu %d\n",
    VAR_1->governor->name, VAR_1->cpu);
  } else {
   if (!VAR_3)
    return -VAR_0;
   VAR_2 = VAR_3;
  }
  VAR_4.governor = VAR_2;
 } else {

  if (VAR_1->last_policy) {
   VAR_4.policy = VAR_1->last_policy;
  } else {
   if (!VAR_3)
    return -VAR_0;
   FUNC_1(VAR_3->name, &VAR_4);
  }
 }

 return FUNC_2(VAR_1, &VAR_4);
}
