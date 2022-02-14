
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*,struct regmap*) ;
 struct regmap* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct regmap *VAR_2;

 VAR_2 = FUNC_3(&VAR_0->dev);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);
 FUNC_2(VAR_1, VAR_2);

 return 0;
}
