
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpufreq_policy {int cpu; } ;
struct TYPE_3__ {int lowest_perf; } ;
struct TYPE_4__ {int desired_perf; } ;
struct cppc_cpudata {TYPE_1__ perf_caps; TYPE_2__ perf_ctrls; } ;


 struct cppc_cpudata** VAR_0 ;
 int FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (char*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct cpufreq_policy *VAR_1)
{
 int VAR_2 = VAR_1->cpu;
 struct cppc_cpudata *VAR_3 = VAR_0[VAR_2];
 int VAR_4;

 VAR_3->perf_ctrls.desired_perf = VAR_3->perf_caps.lowest_perf;

 VAR_4 = FUNC_0(VAR_2, &VAR_3->perf_ctrls);
 if (VAR_4)
  FUNC_1("Err setting perf value:%d on CPU:%d. ret:%d\n",
    VAR_3->perf_caps.lowest_perf, VAR_2, VAR_4);
}
