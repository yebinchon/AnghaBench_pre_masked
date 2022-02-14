
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int min_freq; int max_freq; } ;
struct cpufreq_policy {size_t cpu; int min; int max; int fast_switch_possible; TYPE_2__ cpuinfo; } ;
struct TYPE_4__ {int min_pstate; int scaling; int turbo_pstate; int max_pstate; unsigned int max_freq; unsigned int turbo_freq; } ;
struct cpudata {int max_perf_ratio; TYPE_1__ pstate; scalar_t__ min_perf_ratio; } ;
struct TYPE_6__ {scalar_t__ turbo_disabled; scalar_t__ turbo_disabled_mf; } ;


 struct cpudata** VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cpufreq_policy*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_3)
{
 struct cpudata *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->cpu);
 if (VAR_5)
  return VAR_5;

 VAR_4 = VAR_0[VAR_3->cpu];

 VAR_4->max_perf_ratio = 0xFF;
 VAR_4->min_perf_ratio = 0;

 VAR_3->min = VAR_4->pstate.min_pstate * VAR_4->pstate.scaling;
 VAR_3->max = VAR_4->pstate.turbo_pstate * VAR_4->pstate.scaling;


 VAR_3->cpuinfo.min_freq = VAR_4->pstate.min_pstate * VAR_4->pstate.scaling;
 FUNC_2();
 VAR_1.turbo_disabled_mf = VAR_1.turbo_disabled;
 VAR_3->cpuinfo.max_freq = VAR_1.turbo_disabled ?
   VAR_4->pstate.max_pstate : VAR_4->pstate.turbo_pstate;
 VAR_3->cpuinfo.max_freq *= VAR_4->pstate.scaling;

 if (VAR_2) {
  unsigned int VAR_6;

  VAR_6 = VAR_1.turbo_disabled ?
   VAR_4->pstate.max_freq : VAR_4->pstate.turbo_freq;
  if (VAR_6 < VAR_3->cpuinfo.max_freq)
   VAR_3->cpuinfo.max_freq = VAR_6;
 }

 FUNC_0(VAR_3);

 VAR_3->fast_switch_possible = 1;

 return 0;
}
