
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct platform_device {int dummy; } ;
struct alpha_pll_config {int l; int alpha; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,struct regmap*,struct alpha_pll_config*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct regmap* FUNC_3 (struct platform_device*,int *) ;
 int FUNC_4 (struct platform_device*,int *,struct regmap*) ;
 int FUNC_5 (struct regmap*,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct regmap *VAR_3;
 struct alpha_pll_config VAR_4 = {};

 VAR_3 = FUNC_3(VAR_2, &VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4.l = 0x2c;
 VAR_4.alpha = 0xcaaa;

 FUNC_2(&VAR_0, VAR_3, &VAR_4);


 FUNC_5(VAR_3, 0x8000, 0x7f0, 0x7f0);

 return FUNC_4(VAR_2, &VAR_1, VAR_3);
}
