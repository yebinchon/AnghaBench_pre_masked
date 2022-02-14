
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tps6586x_platform_data {int gpio_base; } ;
struct TYPE_7__ {int ngpio; int can_sleep; int base; int of_node; int to_irq; int get; int set; int direction_output; TYPE_1__* parent; int label; int owner; } ;
struct tps6586x_gpio {TYPE_3__ gpio_chip; TYPE_4__* parent; } ;
struct TYPE_6__ {TYPE_4__* parent; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct TYPE_8__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 struct tps6586x_platform_data* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,struct tps6586x_gpio*) ;
 struct tps6586x_gpio* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct platform_device*,struct tps6586x_gpio*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_7)
{
 struct tps6586x_platform_data *VAR_8;
 struct tps6586x_gpio *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_1(VAR_7->dev.parent);
 VAR_9 = FUNC_3(&VAR_7->dev,
    sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->parent = VAR_7->dev.parent;

 VAR_9->gpio_chip.owner = VAR_2;
 VAR_9->gpio_chip.label = VAR_7->name;
 VAR_9->gpio_chip.parent = &VAR_7->dev;
 VAR_9->gpio_chip.ngpio = 4;
 VAR_9->gpio_chip.can_sleep = 1;


 VAR_9->gpio_chip.direction_output = VAR_4;
 VAR_9->gpio_chip.set = VAR_5;
 VAR_9->gpio_chip.get = VAR_3;
 VAR_9->gpio_chip.to_irq = VAR_6;




 if (VAR_8 && VAR_8->gpio_base)
  VAR_9->gpio_chip.base = VAR_8->gpio_base;
 else
  VAR_9->gpio_chip.base = -1;

 VAR_10 = FUNC_2(&VAR_7->dev, &VAR_9->gpio_chip,
         VAR_9);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_7->dev, "Could not register gpiochip, %d\n", VAR_10);
  return VAR_10;
 }

 FUNC_4(VAR_7, VAR_9);

 return VAR_10;
}
