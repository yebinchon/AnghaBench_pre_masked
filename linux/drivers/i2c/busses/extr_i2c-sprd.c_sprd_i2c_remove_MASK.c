
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_i2c {int dev; int clk; int adap; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct sprd_i2c* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct sprd_i2c *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_4(VAR_1->dev);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_1(&VAR_1->adap);
 FUNC_0(VAR_1->clk);

 FUNC_5(VAR_1->dev);
 FUNC_3(VAR_1->dev);

 return 0;
}
