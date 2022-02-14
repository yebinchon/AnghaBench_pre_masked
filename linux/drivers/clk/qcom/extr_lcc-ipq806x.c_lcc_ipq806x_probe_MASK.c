
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct platform_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,struct regmap*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct regmap* FUNC_3 (struct platform_device*,int *) ;
 int FUNC_4 (struct platform_device*,int *,struct regmap*) ;
 int FUNC_5 (struct regmap*,int,int *) ;
 int FUNC_6 (struct regmap*,int,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 u32 VAR_4;
 struct regmap *VAR_5;

 VAR_5 = FUNC_3(VAR_3, &VAR_0);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);


 FUNC_5(VAR_5, 0x0, &VAR_4);
 if (!VAR_4)
  FUNC_2(&VAR_1, VAR_5, &VAR_2, 1);

 FUNC_6(VAR_5, 0xc4, 0x1);

 return FUNC_4(VAR_3, &VAR_0, VAR_5);
}
