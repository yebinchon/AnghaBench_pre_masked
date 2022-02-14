
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_dbs_info {int work_in_progress; int work_count; int work; int irq_work; int policy; } ;
struct cpufreq_policy {struct policy_dbs_info* governor_data; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct cpufreq_policy *VAR_0)
{
 struct policy_dbs_info *VAR_1 = VAR_0->governor_data;

 FUNC_2(VAR_1->policy);
 FUNC_3(&VAR_1->irq_work);
 FUNC_1(&VAR_1->work);
 FUNC_0(&VAR_1->work_count, 0);
 VAR_1->work_in_progress = 0;
}
