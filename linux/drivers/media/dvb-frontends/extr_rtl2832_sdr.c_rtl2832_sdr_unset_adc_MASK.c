
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl2832_sdr_dev {int regmap; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int,char*,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct rtl2832_sdr_dev *VAR_0)
{
 struct platform_device *VAR_1 = VAR_0->pdev;
 int VAR_2;

 FUNC_0(&VAR_1->dev, "\n");


 VAR_2 = FUNC_2(VAR_0->regmap, 0x061, 0xe0);
 if (VAR_2)
  goto err;


 VAR_2 = FUNC_2(VAR_0->regmap, 0x019, 0x20);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_1(VAR_0->regmap, 0x017, "\x11\x10", 2);
 if (VAR_2)
  goto err;


 VAR_2 = FUNC_1(VAR_0->regmap, 0x192, "\x00\x0f\xff", 3);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_1(VAR_0->regmap, 0x13e, "\x40\x00", 2);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_1(VAR_0->regmap, 0x115, "\x06\x3f\xce\xcc", 4);
 if (VAR_2)
  goto err;
err:
 return;
}
