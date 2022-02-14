
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_file {int dummy; } ;
struct iolatency_grp {int min_lat_nsec; } ;
struct blkg_policy_data {int blkg; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct iolatency_grp* FUNC_2 (struct blkg_policy_data*) ;
 int FUNC_3 (struct seq_file*,char*,char const*,int ) ;

__attribute__((used)) static u64 FUNC_4(struct seq_file *VAR_1,
      struct blkg_policy_data *VAR_2, int VAR_3)
{
 struct iolatency_grp *VAR_4 = FUNC_2(VAR_2);
 const char *VAR_5 = FUNC_0(VAR_2->blkg);

 if (!VAR_5 || !VAR_4->min_lat_nsec)
  return 0;
 FUNC_3(VAR_1, "%s target=%llu\n",
     VAR_5, FUNC_1(VAR_4->min_lat_nsec, VAR_0));
 return 0;
}
