
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct seq_file {int dummy; } ;
struct blkg_policy_data {int blkg; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,char const*,unsigned long long) ;

u64 FUNC_2(struct seq_file *VAR_0, struct blkg_policy_data *VAR_1, u64 VAR_2)
{
 const char *VAR_3 = FUNC_0(VAR_1->blkg);

 if (!VAR_3)
  return 0;

 FUNC_1(VAR_0, "%s %llu\n", VAR_3, (unsigned long long)VAR_2);
 return VAR_2;
}
