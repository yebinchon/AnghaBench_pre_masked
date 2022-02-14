
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct platform_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,struct regmap*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct regmap* FUNC_3 (struct platform_device*,int *) ;
 int FUNC_4 (struct platform_device*,int *,struct regmap*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct regmap *VAR_4;

 VAR_4 = FUNC_3(VAR_3, &VAR_0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_2(&VAR_2, VAR_4, &VAR_1);

 return FUNC_4(VAR_3, &VAR_0, VAR_4);
}
