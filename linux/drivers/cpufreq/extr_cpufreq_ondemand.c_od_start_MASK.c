
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct od_policy_dbs_info {int sample_type; } ;
struct cpufreq_policy {int governor_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*) ;
 struct od_policy_dbs_info* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct cpufreq_policy *VAR_1)
{
 struct od_policy_dbs_info *VAR_2 = FUNC_1(VAR_1->governor_data);

 VAR_2->sample_type = VAR_0;
 FUNC_0(VAR_1);
}
