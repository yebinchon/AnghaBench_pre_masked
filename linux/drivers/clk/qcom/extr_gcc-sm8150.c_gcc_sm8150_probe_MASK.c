
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct platform_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_0 ;
 struct regmap* FUNC_2 (struct platform_device*,int *) ;
 int FUNC_3 (struct platform_device*,int *,struct regmap*) ;
 int FUNC_4 (struct regmap*,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct regmap *VAR_2;

 VAR_2 = FUNC_2(VAR_1, &VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);


 FUNC_4(VAR_2, 0x4d110, 0x3, 0x3);
 FUNC_4(VAR_2, 0x71028, 0x3, 0x3);

 return FUNC_3(VAR_1, &VAR_0, VAR_2);
}
