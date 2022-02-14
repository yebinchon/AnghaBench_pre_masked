
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_file {int dummy; } ;
struct ioc_gq {scalar_t__ cfg_weight; } ;
struct blkg_policy_data {int blkg; } ;


 char* FUNC_0 (int ) ;
 struct ioc_gq* FUNC_1 (struct blkg_policy_data*) ;
 int FUNC_2 (struct seq_file*,char*,char const*,scalar_t__) ;

__attribute__((used)) static u64 FUNC_3(struct seq_file *VAR_0, struct blkg_policy_data *VAR_1,
        int VAR_2)
{
 const char *VAR_3 = FUNC_0(VAR_1->blkg);
 struct ioc_gq *VAR_4 = FUNC_1(VAR_1);

 if (VAR_3 && VAR_4->cfg_weight)
  FUNC_2(VAR_0, "%s %u\n", VAR_3, VAR_4->cfg_weight);
 return 0;
}
