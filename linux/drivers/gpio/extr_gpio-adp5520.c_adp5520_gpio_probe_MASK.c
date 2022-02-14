
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct platform_device {scalar_t__ id; TYPE_1__ dev; int name; } ;
struct gpio_chip {int can_sleep; int ngpio; int owner; int label; int base; int set; int get; int direction_output; int direction_input; } ;
struct adp5520_gpio_platform_data {int gpio_en_mask; unsigned char gpio_pullup_mask; int gpio_start; } ;
struct adp5520_gpio {int* lut; struct gpio_chip gpio_chip; int master; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,int ,unsigned char) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct adp5520_gpio_platform_data* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct gpio_chip*,struct adp5520_gpio*) ;
 struct adp5520_gpio* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct platform_device*,struct adp5520_gpio*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_18)
{
 struct adp5520_gpio_platform_data *VAR_19 = FUNC_3(&VAR_18->dev);
 struct adp5520_gpio *VAR_20;
 struct gpio_chip *VAR_21;
 int VAR_22, VAR_23, VAR_24;
 unsigned char VAR_25 = 0;

 if (VAR_19 == ((void*)0)) {
  FUNC_2(&VAR_18->dev, "missing platform data\n");
  return -VAR_9;
 }

 if (VAR_18->id != VAR_12) {
  FUNC_2(&VAR_18->dev, "only ADP5520 supports GPIO\n");
  return -VAR_9;
 }

 VAR_20 = FUNC_5(&VAR_18->dev, sizeof(*VAR_20), VAR_11);
 if (VAR_20 == ((void*)0))
  return -VAR_10;

 VAR_20->master = VAR_18->dev.parent;

 for (VAR_24 = 0, VAR_23 = 0; VAR_23 < VAR_6; VAR_23++)
  if (VAR_19->gpio_en_mask & (1 << VAR_23))
   VAR_20->lut[VAR_24++] = 1 << VAR_23;

 if (VAR_24 < 1) {
  VAR_22 = -VAR_8;
  goto err;
 }

 VAR_21 = &VAR_20->gpio_chip;
 VAR_21->direction_input = VAR_14;
 VAR_21->direction_output = VAR_15;
 VAR_21->get = VAR_16;
 VAR_21->set = VAR_17;
 VAR_21->can_sleep = 1;

 VAR_21->base = VAR_19->gpio_start;
 VAR_21->ngpio = VAR_24;
 VAR_21->label = VAR_18->name;
 VAR_21->owner = VAR_13;

 VAR_22 = FUNC_0(VAR_20->master, VAR_2,
  VAR_19->gpio_en_mask);

 if (VAR_19->gpio_en_mask & VAR_1)
  VAR_25 |= VAR_0;

 if (VAR_19->gpio_en_mask & VAR_4)
  VAR_25 |= VAR_7;

 if (VAR_25)
  VAR_22 = FUNC_1(VAR_20->master, VAR_5,
   VAR_25);

 VAR_22 |= FUNC_1(VAR_20->master, VAR_3,
  VAR_19->gpio_pullup_mask);

 if (VAR_22) {
  FUNC_2(&VAR_18->dev, "failed to write\n");
  goto err;
 }

 VAR_22 = FUNC_4(&VAR_18->dev, &VAR_20->gpio_chip, VAR_20);
 if (VAR_22)
  goto err;

 FUNC_6(VAR_18, VAR_20);
 return 0;

err:
 return VAR_22;
}
