
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct palmas_platform_data {int gpio_base; } ;
struct TYPE_8__ {int can_sleep; int base; int of_node; TYPE_1__* parent; int get; int set; int to_irq; int direction_output; int direction_input; int ngpio; int label; int owner; } ;
struct palmas_gpio {TYPE_4__ gpio_chip; struct palmas* palmas; } ;
struct palmas_device_data {int ngpio; } ;
struct palmas {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 struct palmas* FUNC_1 (int ) ;
 struct palmas_platform_data* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_4__*,struct palmas_gpio*) ;
 struct palmas_gpio* FUNC_5 (TYPE_1__*,int,int ) ;
 struct palmas_device_data* FUNC_6 (TYPE_1__*) ;
 struct palmas_device_data VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct platform_device*,struct palmas_gpio*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_9)
{
 struct palmas *VAR_10 = FUNC_1(VAR_9->dev.parent);
 struct palmas_platform_data *VAR_11;
 struct palmas_gpio *VAR_12;
 int VAR_13;
 const struct palmas_device_data *VAR_14;

 VAR_14 = FUNC_6(&VAR_9->dev);
 if (!VAR_14)
  VAR_14 = &VAR_3;

 VAR_12 = FUNC_5(&VAR_9->dev,
    sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->palmas = VAR_10;
 VAR_12->gpio_chip.owner = VAR_2;
 VAR_12->gpio_chip.label = FUNC_3(&VAR_9->dev);
 VAR_12->gpio_chip.ngpio = VAR_14->ngpio;
 VAR_12->gpio_chip.can_sleep = 1;
 VAR_12->gpio_chip.direction_input = VAR_5;
 VAR_12->gpio_chip.direction_output = VAR_6;
 VAR_12->gpio_chip.to_irq = VAR_8;
 VAR_12->gpio_chip.set = VAR_7;
 VAR_12->gpio_chip.get = VAR_4;
 VAR_12->gpio_chip.parent = &VAR_9->dev;



 VAR_11 = FUNC_2(VAR_10->dev);
 if (VAR_11 && VAR_11->gpio_base)
  VAR_12->gpio_chip.base = VAR_11->gpio_base;
 else
  VAR_12->gpio_chip.base = -1;

 VAR_13 = FUNC_4(&VAR_9->dev, &VAR_12->gpio_chip,
         VAR_12);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_9->dev, "Could not register gpiochip, %d\n", VAR_13);
  return VAR_13;
 }

 FUNC_7(VAR_9, VAR_12);
 return VAR_13;
}
