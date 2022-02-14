
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_freq; } ;
struct cpufreq_policy {size_t cpu; TYPE_1__ cpuinfo; } ;
struct cpudata {int dummy; } ;


 struct cpudata** VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*,int ,int ) ;
 int FUNC_1 (struct cpufreq_policy*,struct cpudata*) ;
 int FUNC_2 (struct cpudata*) ;
 int FUNC_3 (struct cpufreq_policy*,struct cpudata*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct cpufreq_policy *VAR_1)
{
 struct cpudata *VAR_2 = VAR_0[VAR_1->cpu];

 FUNC_4();
 FUNC_0(VAR_1, VAR_1->cpuinfo.min_freq,
         FUNC_2(VAR_2));

 FUNC_1(VAR_1, VAR_2);

 FUNC_3(VAR_1, VAR_2);

 return 0;
}
