
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_scm_desc {int arginfo; int * args; int member_0; } ;
struct device {int dummy; } ;
struct arm_smccc_res {int a1; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int ,int ,struct qcom_scm_desc*,struct arm_smccc_res*) ;

int FUNC_2(struct device *VAR_2, u32 VAR_3)
{
 int VAR_4;
 struct qcom_scm_desc VAR_5 = {0};
 struct arm_smccc_res VAR_6;

 VAR_5.args[0] = VAR_3;
 VAR_5.arginfo = FUNC_0(1);

 VAR_4 = FUNC_1(VAR_2, VAR_1, VAR_0,
   &VAR_5, &VAR_6);

 return VAR_4 ? : VAR_6.a1;
}
