
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct cpumf_ctr_info {int auth_ctl; int csvn; int cfvn; } ;
typedef int ci ;


 int FUNC_0 (struct cpumf_ctr_info*,int ,int) ;
 scalar_t__ FUNC_1 (struct cpumf_ctr_info*) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0)
{
 struct cpumf_ctr_info VAR_1;

 FUNC_0(&VAR_1, 0, sizeof(VAR_1));
 if (FUNC_1(&VAR_1))
  return;

 FUNC_2(VAR_0, "CPU-MF: Counter facility: version=%u.%u "
     "authorization=%04x\n", VAR_1.cfvn, VAR_1.csvn, VAR_1.auth_ctl);
}
