
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {struct device* parent; } ;
struct lpc18xx_gpio_chip {int clk; TYPE_1__ gpio; int lock; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,int *) ;
 int FUNC_6 (struct device*,TYPE_1__*,struct lpc18xx_gpio_chip*) ;
 int FUNC_7 (struct device*,struct resource*) ;
 struct lpc18xx_gpio_chip* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct platform_device*,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_10 (struct lpc18xx_gpio_chip*) ;
 int FUNC_11 (int ,int,struct resource*) ;
 int FUNC_12 (int ,char*,char*) ;
 int FUNC_13 (struct platform_device*,struct lpc18xx_gpio_chip*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct lpc18xx_gpio_chip *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_8(VAR_4, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->gpio = VAR_2;
 FUNC_13(VAR_3, VAR_5);

 VAR_6 = FUNC_12(VAR_4->of_node, "reg-names", "gpio");
 if (VAR_6 < 0) {

  VAR_5->base = FUNC_9(VAR_3, 0);
 } else {
  struct resource VAR_8;

  VAR_7 = FUNC_11(VAR_4->of_node, VAR_6, &VAR_8);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_5->base = FUNC_7(VAR_4, &VAR_8);
 }
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 VAR_5->clk = FUNC_5(VAR_4, ((void*)0));
 if (FUNC_0(VAR_5->clk)) {
  FUNC_4(VAR_4, "input clock not found\n");
  return FUNC_1(VAR_5->clk);
 }

 VAR_7 = FUNC_3(VAR_5->clk);
 if (VAR_7) {
  FUNC_4(VAR_4, "unable to enable clock\n");
  return VAR_7;
 }

 FUNC_14(&VAR_5->lock);

 VAR_5->gpio.parent = VAR_4;

 VAR_7 = FUNC_6(VAR_4, &VAR_5->gpio, VAR_5);
 if (VAR_7) {
  FUNC_4(VAR_4, "failed to add gpio chip\n");
  FUNC_2(VAR_5->clk);
  return VAR_7;
 }


 FUNC_10(VAR_5);

 return 0;
}
