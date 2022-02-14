
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct regmap* FUNC_3 (struct platform_device*,int *) ;
 int FUNC_4 (struct platform_device*,int *,struct regmap*) ;
 int FUNC_5 (struct regmap*,int ,int ) ;
 int FUNC_6 (struct regmap*,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct regmap *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_2, &VAR_1);
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);


 FUNC_6(VAR_3, 0x09ffc, 0x3, 0x3);
 FUNC_6(VAR_3, 0x71028, 0x3, 0x3);

 VAR_4 = FUNC_5(VAR_3, VAR_0,
     FUNC_0(VAR_0));
 if (VAR_4)
  return VAR_4;

 return FUNC_4(VAR_2, &VAR_1, VAR_3);
}
