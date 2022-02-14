
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mpc_i2c {int base; scalar_t__ irq; scalar_t__ clk_per; int adap; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,struct mpc_i2c*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct mpc_i2c*) ;
 struct mpc_i2c* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct mpc_i2c *VAR_1 = FUNC_6(VAR_0);

 FUNC_2(&VAR_1->adap);

 if (VAR_1->clk_per)
  FUNC_0(VAR_1->clk_per);

 if (VAR_1->irq)
  FUNC_1(VAR_1->irq, VAR_1);

 FUNC_4(VAR_1->irq);
 FUNC_3(VAR_1->base);
 FUNC_5(VAR_1);
 return 0;
}
