
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_scm_desc {int* args; int arginfo; int member_0; } ;
struct device {int dummy; } ;
struct arm_smccc_res {int a1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,int ,int ,struct qcom_scm_desc*,struct arm_smccc_res*) ;

int FUNC_3(struct device *VAR_4, u32 VAR_5, u32 VAR_6)
{
 int VAR_7;
 struct qcom_scm_desc VAR_8 = {0};
 struct arm_smccc_res VAR_9;

 VAR_8.arginfo = FUNC_0(1);
 VAR_8.args[0] = FUNC_1(VAR_5, VAR_6) |
   (VAR_1 << VAR_0);

 VAR_7 = FUNC_2(VAR_4, VAR_3, VAR_2,
       &VAR_8, &VAR_9);

 return VAR_7 ? : VAR_9.a1;
}
