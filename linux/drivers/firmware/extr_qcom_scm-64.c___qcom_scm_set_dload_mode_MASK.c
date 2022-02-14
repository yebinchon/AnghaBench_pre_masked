
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_scm_desc {int arginfo; void** args; int member_0; } ;
struct device {int dummy; } ;
struct arm_smccc_res {int dummy; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int ,void*,struct qcom_scm_desc*,struct arm_smccc_res*) ;

int FUNC_2(struct device *VAR_2, bool VAR_3)
{
 struct qcom_scm_desc VAR_4 = {0};
 struct arm_smccc_res VAR_5;

 VAR_4.args[0] = VAR_0;
 VAR_4.args[1] = VAR_3 ? VAR_0 : 0;
 VAR_4.arginfo = FUNC_0(2);

 return FUNC_1(VAR_2, VAR_1, VAR_0,
        &VAR_4, &VAR_5);
}
