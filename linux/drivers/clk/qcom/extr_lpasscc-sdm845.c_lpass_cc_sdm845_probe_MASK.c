
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_cc_desc {int dummy; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {char* name; } ;


 struct qcom_cc_desc VAR_0 ;
 struct qcom_cc_desc VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct platform_device*,int,struct qcom_cc_desc const*) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_3)
{
 const struct qcom_cc_desc *VAR_4;
 int VAR_5;

 VAR_2.name = "cc";
 VAR_4 = &VAR_0;

 VAR_5 = FUNC_0(VAR_3, 0, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_2.name = "qdsp6ss";
 VAR_4 = &VAR_1;

 return FUNC_0(VAR_3, 1, VAR_4);
}
