
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct ep93xx_keypad {int mmio_base; int input_dev; int clk; scalar_t__ enabled; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,struct ep93xx_keypad*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ep93xx_keypad*) ;
 struct ep93xx_keypad* FUNC_7 (struct platform_device*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct resource*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_1)
{
 struct ep93xx_keypad *VAR_2 = FUNC_7(VAR_1);
 struct resource *VAR_3;

 FUNC_3(VAR_2->irq, VAR_2);

 if (VAR_2->enabled)
  FUNC_0(VAR_2->clk);
 FUNC_1(VAR_2->clk);

 FUNC_4(VAR_2->input_dev);

 FUNC_2(VAR_1);

 FUNC_5(VAR_2->mmio_base);

 VAR_3 = FUNC_8(VAR_1, VAR_0, 0);
 FUNC_9(VAR_3->start, FUNC_10(VAR_3));

 FUNC_6(VAR_2);

 return 0;
}
