
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qcom_scm_hdcp_req {int val; int addr; } ;
struct qcom_scm_desc {int arginfo; int * args; int member_0; } ;
struct device {int dummy; } ;
struct arm_smccc_res {scalar_t__ a1; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,int ,int ,struct qcom_scm_desc*,struct arm_smccc_res*) ;

int FUNC_2(struct device *VAR_4, struct qcom_scm_hdcp_req *VAR_5,
   u32 VAR_6, u32 *VAR_7)
{
 int VAR_8;
 struct qcom_scm_desc VAR_9 = {0};
 struct arm_smccc_res VAR_10;

 if (VAR_6 > VAR_2)
  return -VAR_0;

 VAR_9.args[0] = VAR_5[0].addr;
 VAR_9.args[1] = VAR_5[0].val;
 VAR_9.args[2] = VAR_5[1].addr;
 VAR_9.args[3] = VAR_5[1].val;
 VAR_9.args[4] = VAR_5[2].addr;
 VAR_9.args[5] = VAR_5[2].val;
 VAR_9.args[6] = VAR_5[3].addr;
 VAR_9.args[7] = VAR_5[3].val;
 VAR_9.args[8] = VAR_5[4].addr;
 VAR_9.args[9] = VAR_5[4].val;
 VAR_9.arginfo = FUNC_0(10);

 VAR_8 = FUNC_1(VAR_4, VAR_3, VAR_1, &VAR_9,
       &VAR_10);
 *VAR_7 = VAR_10.a1;

 return VAR_8;
}
