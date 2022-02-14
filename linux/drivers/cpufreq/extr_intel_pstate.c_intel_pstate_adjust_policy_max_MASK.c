
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max_freq; } ;
struct cpufreq_policy {scalar_t__ max; TYPE_1__ cpuinfo; } ;
struct TYPE_4__ {scalar_t__ max_pstate_physical; scalar_t__ max_pstate; scalar_t__ max_freq; } ;
struct cpudata {TYPE_2__ pstate; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct cpufreq_policy *VAR_1,
      struct cpudata *VAR_2)
{
 if (!VAR_0 &&
     VAR_2->pstate.max_pstate_physical > VAR_2->pstate.max_pstate &&
     VAR_1->max < VAR_1->cpuinfo.max_freq &&
     VAR_1->max > VAR_2->pstate.max_freq) {
  FUNC_0("policy->max > max non turbo frequency\n");
  VAR_1->max = VAR_1->cpuinfo.max_freq;
 }
}
