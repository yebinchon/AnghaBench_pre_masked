
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_scm_desc {int* args; int arginfo; int member_0; } ;
struct device {int dummy; } ;
struct arm_smccc_res {int a1; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int ,int ,struct qcom_scm_desc*,struct arm_smccc_res*) ;

int FUNC_2(struct device *VAR_2, bool VAR_3)
{
 struct qcom_scm_desc VAR_4 = {0};
 struct arm_smccc_res VAR_5;
 int VAR_6;

 VAR_4.args[0] = VAR_3;
 VAR_4.args[1] = 0;
 VAR_4.arginfo = FUNC_0(2);

 VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_0, &VAR_4,
       &VAR_5);

 return VAR_6 ? : VAR_5.a1;
}
