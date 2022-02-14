
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct powernv_smp_call_data {void* gpstate_id; void* pstate_id; } ;
struct global_pstate_info {int timer; } ;
struct cpufreq_policy {int cpu; struct global_pstate_info* driver_data; } ;
struct TYPE_2__ {int min; } ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,struct powernv_smp_call_data*,int) ;

__attribute__((used)) static void FUNC_3(struct cpufreq_policy *VAR_2)
{
 struct powernv_smp_call_data VAR_3;
 struct global_pstate_info *VAR_4 = VAR_2->driver_data;

 VAR_3.pstate_id = FUNC_1(VAR_0.min);
 VAR_3.gpstate_id = FUNC_1(VAR_0.min);
 FUNC_2(VAR_2->cpu, VAR_1, &VAR_3, 1);
 if (VAR_4)
  FUNC_0(&VAR_4->timer);
}
