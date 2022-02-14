
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct clk {int dummy; } ;
struct bcm2835_i2c_dev {int adapter; int irq; int dev; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,struct bcm2835_i2c_dev*) ;
 int FUNC_4 (int *) ;
 struct bcm2835_i2c_dev* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct bcm2835_i2c_dev *VAR_1 = FUNC_5(VAR_0);
 struct clk *VAR_2 = FUNC_2(VAR_1->dev, "div");

 FUNC_1(VAR_2);
 FUNC_0(VAR_2);

 FUNC_3(VAR_1->irq, VAR_1);
 FUNC_4(&VAR_1->adapter);

 return 0;
}
