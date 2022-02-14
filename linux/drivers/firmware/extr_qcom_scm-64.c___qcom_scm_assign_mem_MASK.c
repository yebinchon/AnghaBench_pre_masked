
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_scm_desc {size_t* args; int arginfo; int member_0; } ;
struct device {int dummy; } ;
struct arm_smccc_res {int a1; } ;
typedef void* phys_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,int ,int ,struct qcom_scm_desc*,struct arm_smccc_res*) ;

int FUNC_2(struct device *VAR_4, phys_addr_t VAR_5,
     size_t VAR_6, phys_addr_t VAR_7, size_t VAR_8,
     phys_addr_t VAR_9, size_t VAR_10)
{
 int VAR_11;
 struct qcom_scm_desc VAR_12 = {0};
 struct arm_smccc_res VAR_13;

 VAR_12.args[0] = VAR_5;
 VAR_12.args[1] = VAR_6;
 VAR_12.args[2] = VAR_7;
 VAR_12.args[3] = VAR_8;
 VAR_12.args[4] = VAR_9;
 VAR_12.args[5] = VAR_10;
 VAR_12.args[6] = 0;

 VAR_12.arginfo = FUNC_0(7, VAR_1, VAR_3,
         VAR_1, VAR_3, VAR_1,
         VAR_3, VAR_3);

 VAR_11 = FUNC_1(VAR_4, VAR_2,
       VAR_0,
       &VAR_12, &VAR_13);

 return VAR_11 ? : VAR_13.a1;
}
