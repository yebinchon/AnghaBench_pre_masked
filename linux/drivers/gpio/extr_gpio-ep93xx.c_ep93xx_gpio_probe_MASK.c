
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct gpio_chip {int dummy; } ;
struct ep93xx_gpio_bank {int label; } ;
struct ep93xx_gpio {struct gpio_chip* gc; int base; } ;


 int FUNC_0 (struct ep93xx_gpio_bank*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ) ;
 struct ep93xx_gpio* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 scalar_t__ FUNC_6 (struct gpio_chip*,struct platform_device*,struct ep93xx_gpio*,struct ep93xx_gpio_bank*) ;
 struct ep93xx_gpio_bank* VAR_2 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct ep93xx_gpio *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->base = FUNC_5(VAR_3, 0);
 if (FUNC_1(VAR_4->base))
  return FUNC_2(VAR_4->base);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  struct gpio_chip *VAR_6 = &VAR_4->gc[VAR_5];
  struct ep93xx_gpio_bank *VAR_7 = &VAR_2[VAR_5];

  if (FUNC_6(VAR_6, VAR_3, VAR_4, VAR_7))
   FUNC_3(&VAR_3->dev, "Unable to add gpio bank %s\n",
     VAR_7->label);
 }

 return 0;
}
