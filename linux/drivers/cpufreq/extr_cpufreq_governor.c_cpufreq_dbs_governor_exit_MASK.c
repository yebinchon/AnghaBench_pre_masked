
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_dbs_info {int list; struct dbs_data* dbs_data; } ;
struct dbs_governor {int (* exit ) (struct dbs_data*) ;int * gdbs_data; } ;
struct dbs_data {int attr_set; } ;
struct cpufreq_policy {struct policy_dbs_info* governor_data; } ;


 struct dbs_governor* FUNC_0 (struct cpufreq_policy*) ;
 int FUNC_1 (struct policy_dbs_info*,struct dbs_governor*) ;
 unsigned int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (struct dbs_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dbs_data*) ;

void FUNC_8(struct cpufreq_policy *VAR_1)
{
 struct dbs_governor *VAR_2 = FUNC_0(VAR_1);
 struct policy_dbs_info *VAR_3 = VAR_1->governor_data;
 struct dbs_data *VAR_4 = VAR_3->dbs_data;
 unsigned int VAR_5;


 FUNC_5(&VAR_0);

 VAR_5 = FUNC_2(&VAR_4->attr_set, &VAR_3->list);

 VAR_1->governor_data = ((void*)0);

 if (!VAR_5) {
  if (!FUNC_3())
   VAR_2->gdbs_data = ((void*)0);

  VAR_2->exit(VAR_4);
  FUNC_4(VAR_4);
 }

 FUNC_1(VAR_3, VAR_2);

 FUNC_6(&VAR_0);
}
