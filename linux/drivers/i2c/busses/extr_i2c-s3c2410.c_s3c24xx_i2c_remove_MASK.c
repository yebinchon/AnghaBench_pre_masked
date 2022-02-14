
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {int adap; int clk; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct s3c24xx_i2c* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct s3c24xx_i2c*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct s3c24xx_i2c *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->clk);

 FUNC_3(&VAR_0->dev);

 FUNC_4(VAR_1);

 FUNC_1(&VAR_1->adap);

 return 0;
}
