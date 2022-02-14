
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp55xx_platform_data {int enable_gpio; } ;
struct lp55xx_chip {scalar_t__ clk; struct lp55xx_platform_data* pdata; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct lp55xx_chip *VAR_0)
{
 struct lp55xx_platform_data *VAR_1 = VAR_0->pdata;

 if (VAR_0->clk)
  FUNC_0(VAR_0->clk);

 if (FUNC_1(VAR_1->enable_gpio))
  FUNC_2(VAR_1->enable_gpio, 0);
}
