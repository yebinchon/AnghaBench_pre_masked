
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct cpufreq_policy {size_t cpu; int cur; } ;
struct cpufreq_freqs {unsigned int new; int old; } ;
struct TYPE_2__ {scalar_t__ desired_perf; } ;
struct cppc_cpudata {int cpu; TYPE_1__ perf_ctrls; } ;


 struct cppc_cpudata** VAR_0 ;
 scalar_t__ FUNC_0 (struct cppc_cpudata*,unsigned int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (struct cpufreq_policy*,struct cpufreq_freqs*) ;
 int FUNC_3 (struct cpufreq_policy*,struct cpufreq_freqs*,int) ;
 int FUNC_4 (char*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct cpufreq_policy *VAR_1,
  unsigned int VAR_2,
  unsigned int VAR_3)
{
 struct cppc_cpudata *VAR_4;
 struct cpufreq_freqs VAR_5;
 u32 VAR_6;
 int VAR_7 = 0;

 VAR_4 = VAR_0[VAR_1->cpu];

 VAR_6 = FUNC_0(VAR_4, VAR_2);

 if (VAR_6 == VAR_4->perf_ctrls.desired_perf)
  return VAR_7;

 VAR_4->perf_ctrls.desired_perf = VAR_6;
 VAR_5.old = VAR_1->cur;
 VAR_5.new = VAR_2;

 FUNC_2(VAR_1, &VAR_5);
 VAR_7 = FUNC_1(VAR_4->cpu, &VAR_4->perf_ctrls);
 FUNC_3(VAR_1, &VAR_5, VAR_7 != 0);

 if (VAR_7)
  FUNC_4("Failed to set target on CPU:%d. ret:%d\n",
    VAR_4->cpu, VAR_7);

 return VAR_7;
}
