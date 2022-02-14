
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rc5t583_platform_data {int gpio_base; } ;
struct TYPE_5__ {char* label; int can_sleep; int base; TYPE_1__* parent; int ngpio; int to_irq; int get; int set; int direction_output; int direction_input; int free; int owner; } ;
struct rc5t583_gpio {TYPE_3__ gpio_chip; struct rc5t583* rc5t583; } ;
struct rc5t583 {int dev; } ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rc5t583* FUNC_0 (int ) ;
 struct rc5t583_platform_data* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,struct rc5t583_gpio*) ;
 struct rc5t583_gpio* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct platform_device*,struct rc5t583_gpio*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_10)
{
 struct rc5t583 *VAR_11 = FUNC_0(VAR_10->dev.parent);
 struct rc5t583_platform_data *VAR_12 = FUNC_1(VAR_11->dev);
 struct rc5t583_gpio *VAR_13;

 VAR_13 = FUNC_3(&VAR_10->dev, sizeof(*VAR_13),
     VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->gpio_chip.label = "gpio-rc5t583",
 VAR_13->gpio_chip.owner = VAR_3,
 VAR_13->gpio_chip.free = VAR_6,
 VAR_13->gpio_chip.direction_input = VAR_4,
 VAR_13->gpio_chip.direction_output = VAR_5,
 VAR_13->gpio_chip.set = VAR_8,
 VAR_13->gpio_chip.get = VAR_7,
 VAR_13->gpio_chip.to_irq = VAR_9,
 VAR_13->gpio_chip.ngpio = VAR_2,
 VAR_13->gpio_chip.can_sleep = 1,
 VAR_13->gpio_chip.parent = &VAR_10->dev;
 VAR_13->gpio_chip.base = -1;
 VAR_13->rc5t583 = VAR_11;

 if (VAR_12 && VAR_12->gpio_base)
  VAR_13->gpio_chip.base = VAR_12->gpio_base;

 FUNC_4(VAR_10, VAR_13);

 return FUNC_2(&VAR_10->dev, &VAR_13->gpio_chip,
          VAR_13);
}
