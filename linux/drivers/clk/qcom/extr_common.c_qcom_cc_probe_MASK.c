
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct qcom_cc_desc {int dummy; } ;
struct platform_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct regmap* FUNC_2 (struct platform_device*,struct qcom_cc_desc const*) ;
 int FUNC_3 (struct platform_device*,struct qcom_cc_desc const*,struct regmap*) ;

int FUNC_4(struct platform_device *VAR_0, const struct qcom_cc_desc *VAR_1)
{
 struct regmap *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 return FUNC_3(VAR_0, VAR_1, VAR_2);
}
