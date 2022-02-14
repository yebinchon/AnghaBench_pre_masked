
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ftgpio_gpio {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ftgpio_gpio* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct ftgpio_gpio *VAR_1 = FUNC_2(VAR_0);

 if (!FUNC_0(VAR_1->clk))
  FUNC_1(VAR_1->clk);
 return 0;
}
