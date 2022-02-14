
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 struct regmap* FUNC_0 (struct device*,int *) ;
 int VAR_1 ;
 int FUNC_1 (struct platform_device*,int *) ;
 int FUNC_2 (struct device*,char*,char*,int) ;
 int FUNC_3 (struct regmap*,int,int,int) ;
 int FUNC_4 (struct regmap*,int,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct regmap *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, "cxo_board", "cxo", 25000000);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_3, "pxo_board", "pxo", 25000000);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2, &VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_0(VAR_3, ((void*)0));
 if (!VAR_4)
  return -VAR_0;


 FUNC_3(VAR_4, 0x31a4, 0xffffffc0, 0x40000400);
 FUNC_4(VAR_4, 0x31b0, 0x3080);


 FUNC_4(VAR_4, 0x3cb8, 8);
 FUNC_4(VAR_4, 0x3cd8, 8);
 FUNC_4(VAR_4, 0x3cf8, 8);
 FUNC_4(VAR_4, 0x3d18, 8);

 return 0;
}
