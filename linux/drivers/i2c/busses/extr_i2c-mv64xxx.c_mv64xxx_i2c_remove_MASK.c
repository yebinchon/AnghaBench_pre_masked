
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mv64xxx_i2c_data {int clk; int reg_clk; int rstc; int irq; int adapter; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct mv64xxx_i2c_data*) ;
 int FUNC_2 (int *) ;
 struct mv64xxx_i2c_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct platform_device *VAR_0)
{
 struct mv64xxx_i2c_data *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(&VAR_1->adapter);
 FUNC_1(VAR_1->irq, VAR_1);
 FUNC_4(VAR_1->rstc);
 FUNC_0(VAR_1->reg_clk);
 FUNC_0(VAR_1->clk);

 return 0;
}
