
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_scm_hdcp_req {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int ,int ,struct qcom_scm_hdcp_req*,int,int*,int) ;

int FUNC_1(struct device *VAR_4, struct qcom_scm_hdcp_req *VAR_5,
   u32 VAR_6, u32 *VAR_7)
{
 if (VAR_6 > VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_3, VAR_1,
  VAR_5, VAR_6 * sizeof(*VAR_5), VAR_7, sizeof(*VAR_7));
}
