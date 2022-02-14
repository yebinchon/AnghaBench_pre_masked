
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_policy_dbs_info {int requested_freq; scalar_t__ down_skip; } ;
struct cpufreq_policy {int cur; int governor_data; } ;


 struct cs_policy_dbs_info* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct cpufreq_policy *VAR_0)
{
 struct cs_policy_dbs_info *VAR_1 = FUNC_0(VAR_0->governor_data);

 VAR_1->down_skip = 0;
 VAR_1->requested_freq = VAR_0->cur;
}
