
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct freq_qos_request {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int min_freq; int transition_latency; } ;
struct cpufreq_policy {size_t cpu; struct freq_qos_request* driver_data; int constraints; TYPE_1__ cpuinfo; int cur; int transition_delay_us; } ;
struct TYPE_5__ {int turbo_pstate; int scaling; } ;
struct cpudata {TYPE_2__ pstate; } ;
struct TYPE_6__ {int min_perf_pct; int max_perf_pct; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct cpufreq_policy*) ;
 struct cpudata** VAR_7 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int *,struct freq_qos_request*,int ,int) ;
 int FUNC_4 (struct freq_qos_request*) ;
 struct device* FUNC_5 (size_t) ;
 TYPE_3__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (struct cpufreq_policy*) ;
 int FUNC_7 (size_t,int*,int*) ;
 struct freq_qos_request* FUNC_8 (int,int,int ) ;
 int FUNC_9 (struct freq_qos_request*) ;

__attribute__((used)) static int FUNC_10(struct cpufreq_policy *VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 struct freq_qos_request *VAR_16;
 struct cpudata *VAR_17;
 struct device *VAR_18;

 VAR_18 = FUNC_5(VAR_10->cpu);
 if (!VAR_18)
  return -VAR_0;

 VAR_15 = FUNC_1(VAR_10);
 if (VAR_15)
  return VAR_15;

 VAR_10->cpuinfo.transition_latency = VAR_6;
 VAR_10->transition_delay_us = VAR_5;

 VAR_10->cur = VAR_10->cpuinfo.min_freq;

 VAR_16 = FUNC_8(2, sizeof(*VAR_16), VAR_4);
 if (!VAR_16) {
  VAR_15 = -VAR_1;
  goto pstate_exit;
 }

 VAR_17 = VAR_7[VAR_10->cpu];

 if (VAR_9)
  FUNC_7(VAR_10->cpu, &VAR_12, &VAR_11);
 else
  VAR_12 = VAR_17->pstate.turbo_pstate;

 VAR_13 = FUNC_0(VAR_12 * VAR_8.min_perf_pct, 100);
 VAR_13 *= VAR_17->pstate.scaling;
 VAR_14 = FUNC_0(VAR_12 * VAR_8.max_perf_pct, 100);
 VAR_14 *= VAR_17->pstate.scaling;

 VAR_15 = FUNC_3(&VAR_10->constraints, VAR_16, VAR_3,
       VAR_13);
 if (VAR_15 < 0) {
  FUNC_2(VAR_18, "Failed to add min-freq constraint (%d)\n", VAR_15);
  goto free_req;
 }

 VAR_15 = FUNC_3(&VAR_10->constraints, VAR_16 + 1, VAR_2,
       VAR_14);
 if (VAR_15 < 0) {
  FUNC_2(VAR_18, "Failed to add max-freq constraint (%d)\n", VAR_15);
  goto remove_min_req;
 }

 VAR_10->driver_data = VAR_16;

 return 0;

remove_min_req:
 FUNC_4(VAR_16);
free_req:
 FUNC_9(VAR_16);
pstate_exit:
 FUNC_6(VAR_10);

 return VAR_15;
}
