
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct cdns_i2c {int clk; int clk_rate_change_nb; int adap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 struct cdns_i2c* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct cdns_i2c *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(&VAR_1->adap);
 FUNC_1(VAR_1->clk, &VAR_1->clk_rate_change_nb);
 FUNC_0(VAR_1->clk);
 FUNC_4(&VAR_0->dev);

 return 0;
}
