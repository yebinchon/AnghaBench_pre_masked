
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct throtl_grp {int dummy; } ;
struct seq_file {int dummy; } ;
struct blkg_policy_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct seq_file*,struct blkg_policy_data*,scalar_t__) ;
 struct throtl_grp* FUNC_1 (struct blkg_policy_data*) ;

__attribute__((used)) static u64 FUNC_2(struct seq_file *VAR_1, struct blkg_policy_data *VAR_2,
         int VAR_3)
{
 struct throtl_grp *VAR_4 = FUNC_1(VAR_2);
 u64 VAR_5 = *(u64 *)((void *)VAR_4 + VAR_3);

 if (VAR_5 == VAR_0)
  return 0;
 return FUNC_0(VAR_1, VAR_2, VAR_5);
}
