
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xiic_i2c {int clk; int adap; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 struct xiic_i2c* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xiic_i2c*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct xiic_i2c *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;


 FUNC_3(&VAR_1->adap);

 VAR_2 = FUNC_1(VAR_1->clk);
 if (VAR_2) {
  FUNC_2(&VAR_0->dev, "Unable to enable clock.\n");
  return VAR_2;
 }
 FUNC_6(VAR_1);
 FUNC_0(VAR_1->clk);
 FUNC_5(&VAR_0->dev);

 return 0;
}
