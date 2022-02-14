
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diag2fc_data {int lcpus; } ;
struct dentry {int lcpus; } ;


 scalar_t__ FUNC_0 (struct diag2fc_data*) ;
 int FUNC_1 (struct diag2fc_data*) ;
 int FUNC_2 (struct diag2fc_data*) ;
 struct diag2fc_data* FUNC_3 (int ,unsigned int*,int ) ;
 int VAR_0 ;
 struct diag2fc_data* FUNC_4 (struct diag2fc_data*,char*,char*) ;
 struct diag2fc_data* FUNC_5 (struct diag2fc_data*,char*,int ) ;
 struct diag2fc_data* FUNC_6 (struct diag2fc_data*,char*) ;
 int FUNC_7 (struct diag2fc_data*,struct diag2fc_data*) ;

int FUNC_8(struct dentry *VAR_1)
{
 struct dentry *VAR_2, *VAR_3;
 struct diag2fc_data *VAR_4;
 unsigned int VAR_5 = 0;
 int VAR_6, VAR_7;

 VAR_4 = FUNC_3(VAR_0, &VAR_5, 0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);


 VAR_2 = FUNC_6(VAR_1, "hyp");
 if (FUNC_0(VAR_2)) {
  VAR_6 = FUNC_1(VAR_2);
  goto failed;
 }
 VAR_3 = FUNC_4(VAR_2, "type", "z/VM Hypervisor");
 if (FUNC_0(VAR_3)) {
  VAR_6 = FUNC_1(VAR_3);
  goto failed;
 }


 VAR_2 = FUNC_6(VAR_1, "cpus");
 if (FUNC_0(VAR_2)) {
  VAR_6 = FUNC_1(VAR_2);
  goto failed;
 }
 VAR_3 = FUNC_5(VAR_2, "count", VAR_4->lcpus);
 if (FUNC_0(VAR_3)) {
  VAR_6 = FUNC_1(VAR_3);
  goto failed;
 }


 VAR_2 = FUNC_6(VAR_1, "systems");
 if (FUNC_0(VAR_2)) {
  VAR_6 = FUNC_1(VAR_2);
  goto failed;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = FUNC_7(VAR_2, &(VAR_4[VAR_7]));
  if (VAR_6)
   goto failed;
 }
 FUNC_2(VAR_4);
 return 0;

failed:
 FUNC_2(VAR_4);
 return VAR_6;
}
