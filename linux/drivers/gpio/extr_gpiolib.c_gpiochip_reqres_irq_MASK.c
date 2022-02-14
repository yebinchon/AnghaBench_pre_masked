
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {TYPE_1__* gpiodev; } ;
struct TYPE_2__ {int owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct gpio_chip*,char*,unsigned int) ;
 int FUNC_1 (struct gpio_chip*,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 if (!FUNC_3(VAR_1->gpiodev->owner))
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_1, "unable to lock HW IRQ %u for IRQ\n", VAR_2);
  FUNC_2(VAR_1->gpiodev->owner);
  return VAR_3;
 }
 return 0;
}
