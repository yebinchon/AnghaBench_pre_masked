
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_ps2data {int reg_base; int clk; int irq; int serio; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct sun4i_ps2data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sun4i_ps2data*) ;
 struct sun4i_ps2data* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct sun4i_ps2data *VAR_1 = FUNC_5(VAR_0);

 FUNC_6(VAR_1->serio);

 FUNC_2(VAR_1->irq, VAR_1);

 FUNC_0(VAR_1->clk);
 FUNC_1(VAR_1->clk);

 FUNC_3(VAR_1->reg_base);

 FUNC_4(VAR_1);

 return 0;
}
