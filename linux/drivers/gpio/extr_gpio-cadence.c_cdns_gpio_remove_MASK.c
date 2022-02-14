
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct cdns_gpio_chip {int pclk; scalar_t__ regs; int bypass_orig; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct cdns_gpio_chip* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct cdns_gpio_chip *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2->bypass_orig, VAR_2->regs + VAR_0);
 FUNC_0(VAR_2->pclk);

 return 0;
}
