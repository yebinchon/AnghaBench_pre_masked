
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int VAR_0 ;
 struct regmap* FUNC_3 (struct platform_device*,int *) ;
 int FUNC_4 (struct platform_device*,int *,struct regmap*) ;
 int FUNC_5 (struct regmap*,int,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 int VAR_2;
 struct regmap *VAR_3;

 VAR_3 = FUNC_3(VAR_1, &VAR_0);
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);





 VAR_2 = FUNC_5(VAR_3, 0x52008, FUNC_0(21), FUNC_0(21));
 if (VAR_2)
  return VAR_2;

 return FUNC_4(VAR_1, &VAR_0, VAR_3);
}
