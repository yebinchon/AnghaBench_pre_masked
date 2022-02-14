
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef void* u32 ;
struct qcom_scm_desc {int arginfo; void** args; int member_0; } ;
struct device {int dummy; } ;
struct arm_smccc_res {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,int ,int ,struct qcom_scm_desc*,struct arm_smccc_res*) ;

int FUNC_2(struct device *VAR_5, u64 VAR_6, u32 VAR_7,
          u32 VAR_8)
{
 struct qcom_scm_desc VAR_9 = {0};
 struct arm_smccc_res VAR_10;
 int VAR_11;

 VAR_9.args[0] = VAR_6;
 VAR_9.args[1] = VAR_7;
 VAR_9.args[2] = VAR_8;
 VAR_9.arginfo = FUNC_0(3, VAR_2, VAR_4,
         VAR_4);

 VAR_11 = FUNC_1(VAR_5, VAR_3,
       VAR_1, &VAR_9, &VAR_10);


 if (VAR_11 == -VAR_0)
  VAR_11 = 0;

 return VAR_11;
}
