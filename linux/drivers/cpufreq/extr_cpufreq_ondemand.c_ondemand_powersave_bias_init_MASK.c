
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct od_policy_dbs_info {scalar_t__ freq_lo; } ;
struct cpufreq_policy {int governor_data; } ;


 struct od_policy_dbs_info* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct cpufreq_policy *VAR_0)
{
 struct od_policy_dbs_info *VAR_1 = FUNC_0(VAR_0->governor_data);

 VAR_1->freq_lo = 0;
}
