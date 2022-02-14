
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_dbs_info {int update_mutex; } ;
struct cpufreq_policy {struct policy_dbs_info* governor_data; } ;


 int FUNC_0 (struct cpufreq_policy*) ;
 int VAR_0 ;
 int FUNC_1 (struct policy_dbs_info*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct cpufreq_policy *VAR_1)
{
 struct policy_dbs_info *VAR_2;


 FUNC_2(&VAR_0);
 VAR_2 = VAR_1->governor_data;
 if (!VAR_2)
  goto out;

 FUNC_2(&VAR_2->update_mutex);
 FUNC_0(VAR_1);
 FUNC_1(VAR_2, 0);
 FUNC_3(&VAR_2->update_mutex);

out:
 FUNC_3(&VAR_0);
}
