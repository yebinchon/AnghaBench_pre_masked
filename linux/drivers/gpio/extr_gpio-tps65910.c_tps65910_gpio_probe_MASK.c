
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int ngpio; int can_sleep; int base; scalar_t__ of_node; TYPE_2__* parent; int get; int set; int direction_output; int direction_input; int label; int owner; } ;
struct tps65910_gpio {TYPE_5__ gpio_chip; struct tps65910* tps65910; } ;
struct tps65910_board {int gpio_base; int * en_gpio_sleep; } ;
struct tps65910 {TYPE_6__* dev; TYPE_1__* i2c_client; } ;
struct TYPE_10__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_12__ {scalar_t__ of_node; } ;
struct TYPE_9__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 scalar_t__ VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 struct tps65910* FUNC_1 (int ) ;
 struct tps65910_board* FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,char*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_5__*,struct tps65910_gpio*) ;
 struct tps65910_gpio* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (struct platform_device*,struct tps65910_gpio*) ;
 int FUNC_7 (struct tps65910*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct tps65910_board* FUNC_8 (TYPE_2__*,struct tps65910*,int) ;
 int FUNC_9 (struct tps65910*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_12)
{
 struct tps65910 *VAR_13 = FUNC_1(VAR_12->dev.parent);
 struct tps65910_board *VAR_14 = FUNC_2(VAR_13->dev);
 struct tps65910_gpio *VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_15 = FUNC_5(&VAR_12->dev,
    sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->tps65910 = VAR_13;

 VAR_15->gpio_chip.owner = VAR_4;
 VAR_15->gpio_chip.label = VAR_13->i2c_client->name;

 switch (FUNC_7(VAR_13)) {
 case 129:
  VAR_15->gpio_chip.ngpio = VAR_6;
  break;
 case 128:
  VAR_15->gpio_chip.ngpio = VAR_7;
  break;
 default:
  return -VAR_0;
 }
 VAR_15->gpio_chip.can_sleep = 1;
 VAR_15->gpio_chip.direction_input = VAR_9;
 VAR_15->gpio_chip.direction_output = VAR_10;
 VAR_15->gpio_chip.set = VAR_11;
 VAR_15->gpio_chip.get = VAR_8;
 VAR_15->gpio_chip.parent = &VAR_12->dev;



 if (VAR_14 && VAR_14->gpio_base)
  VAR_15->gpio_chip.base = VAR_14->gpio_base;
 else
  VAR_15->gpio_chip.base = -1;

 if (!VAR_14 && VAR_13->dev->of_node)
  VAR_14 = FUNC_8(&VAR_12->dev, VAR_13,
   VAR_15->gpio_chip.ngpio);

 if (!VAR_14)
  goto skip_init;


 for (VAR_17 = 0; VAR_17 < VAR_15->gpio_chip.ngpio; ++VAR_17) {
  if (!VAR_14->en_gpio_sleep[VAR_17])
   continue;

  VAR_16 = FUNC_9(VAR_13,
   VAR_5 + VAR_17, VAR_3);
  if (VAR_16 < 0)
   FUNC_3(VAR_13->dev,
    "GPIO Sleep setting failed with err %d\n", VAR_16);
 }

skip_init:
 VAR_16 = FUNC_4(&VAR_12->dev, &VAR_15->gpio_chip,
         VAR_15);
 if (VAR_16 < 0) {
  FUNC_0(&VAR_12->dev, "Could not register gpiochip, %d\n", VAR_16);
  return VAR_16;
 }

 FUNC_6(VAR_12, VAR_15);

 return VAR_16;
}
