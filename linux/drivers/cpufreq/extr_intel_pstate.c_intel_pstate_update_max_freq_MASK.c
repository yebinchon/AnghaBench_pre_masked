
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max_freq; } ;
struct cpufreq_policy {TYPE_1__ cpuinfo; } ;
struct TYPE_5__ {int turbo_freq; int max_freq; } ;
struct cpudata {TYPE_2__ pstate; } ;
struct TYPE_6__ {scalar_t__ turbo_disabled_mf; } ;


 struct cpudata** VAR_0 ;
 struct cpufreq_policy* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct cpufreq_policy*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_2 (struct cpufreq_policy*) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_2)
{
 struct cpufreq_policy *VAR_3 = FUNC_0(VAR_2);
 struct cpudata *VAR_4;

 if (!VAR_3)
  return;

 VAR_4 = VAR_0[VAR_2];
 VAR_3->cpuinfo.max_freq = VAR_1.turbo_disabled_mf ?
   VAR_4->pstate.max_freq : VAR_4->pstate.turbo_freq;

 FUNC_2(VAR_3);

 FUNC_1(VAR_3);
}
