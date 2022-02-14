
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct throtl_grp {int dummy; } ;
struct seq_file {int dummy; } ;
struct blkg_policy_data {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct seq_file*,struct blkg_policy_data*,unsigned int) ;
 struct throtl_grp* FUNC_1 (struct blkg_policy_data*) ;

__attribute__((used)) static u64 FUNC_2(struct seq_file *VAR_1, struct blkg_policy_data *VAR_2,
          int VAR_3)
{
 struct throtl_grp *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5 = *(unsigned int *)((void *)VAR_4 + VAR_3);

 if (VAR_5 == VAR_0)
  return 0;
 return FUNC_0(VAR_1, VAR_2, VAR_5);
}
