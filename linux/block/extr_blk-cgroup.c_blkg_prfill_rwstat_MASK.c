
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_file {int dummy; } ;
struct blkg_rwstat_sample {int dummy; } ;
struct blkg_policy_data {int dummy; } ;


 int FUNC_0 (struct seq_file*,struct blkg_policy_data*,struct blkg_rwstat_sample*) ;
 int FUNC_1 (void*,struct blkg_rwstat_sample*) ;

u64 FUNC_2(struct seq_file *VAR_0, struct blkg_policy_data *VAR_1,
         int VAR_2)
{
 struct blkg_rwstat_sample VAR_3 = { };

 FUNC_1((void *)VAR_1 + VAR_2, &VAR_3);
 return FUNC_0(VAR_0, VAR_1, &VAR_3);
}
