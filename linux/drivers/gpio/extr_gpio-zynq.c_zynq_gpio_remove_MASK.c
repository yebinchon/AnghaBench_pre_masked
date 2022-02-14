
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynq_gpio {int clk; int chip; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct zynq_gpio* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct zynq_gpio *VAR_1 = FUNC_3(VAR_0);

 FUNC_5(&VAR_0->dev);
 FUNC_2(&VAR_1->chip);
 FUNC_0(VAR_1->clk);
 FUNC_1(&VAR_0->dev, 0);
 FUNC_4(&VAR_0->dev);
 return 0;
}
