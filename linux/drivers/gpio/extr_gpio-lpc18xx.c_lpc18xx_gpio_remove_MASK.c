
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct lpc18xx_gpio_chip {int clk; TYPE_1__* pin_ic; } ;
struct TYPE_2__ {int domain; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct lpc18xx_gpio_chip* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct lpc18xx_gpio_chip *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->pin_ic)
  FUNC_1(VAR_1->pin_ic->domain);

 FUNC_0(VAR_1->clk);

 return 0;
}
