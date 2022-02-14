
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int dummy; } ;
struct ftgpio_gpio {scalar_t__ base; int dev; int clk; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned long,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,unsigned long) ;
 struct ftgpio_gpio* FUNC_4 (struct gpio_chip*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct gpio_chip *VAR_4, unsigned int VAR_5,
      unsigned long VAR_6)
{
 enum pin_config_param VAR_7 = FUNC_6(VAR_6);
 u32 VAR_8 = FUNC_5(VAR_6);
 struct ftgpio_gpio *VAR_9 = FUNC_4(VAR_4);
 unsigned long VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 if (VAR_7 != VAR_3)
  return -VAR_0;
 VAR_10 = FUNC_2(VAR_9->clk);
 VAR_11 = FUNC_1(VAR_10, VAR_8);


 if (VAR_11 > (1 << 24))
  return -VAR_0;

 FUNC_3(VAR_9->dev, "prescale divisor: %08x, resulting frequency %lu Hz\n",
  VAR_11, (VAR_10/VAR_11));

 VAR_12 = FUNC_7(VAR_9->base + VAR_2);
 if (VAR_12 == VAR_11) {







  VAR_12 = FUNC_7(VAR_9->base + VAR_1);
  VAR_12 |= FUNC_0(VAR_5);
  FUNC_8(VAR_12, VAR_9->base + VAR_1);
  return 0;
 }

 VAR_12 = FUNC_7(VAR_9->base + VAR_1);
 if (VAR_12) {




  return -VAR_0;
 }


 FUNC_8(VAR_11, VAR_9->base + VAR_2);

 VAR_12 |= FUNC_0(VAR_5);
 FUNC_8(VAR_12, VAR_9->base + VAR_1);

 return 0;
}
