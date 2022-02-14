
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct kempld_platform_data {int gpio_base; } ;
struct gpio_chip {char* label; int can_sleep; int base; scalar_t__ ngpio; int set; int get; int get_direction; int direction_output; int direction_input; struct device* parent; int owner; } ;
struct kempld_gpio_data {struct gpio_chip chip; struct kempld_device_data* pld; } ;
struct TYPE_2__ {int spec_major; } ;
struct kempld_device_data {TYPE_1__ info; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 struct kempld_device_data* FUNC_1 (int ) ;
 struct kempld_platform_data* FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,scalar_t__) ;
 int FUNC_4 (struct device*,struct gpio_chip*,struct kempld_gpio_data*) ;
 struct kempld_gpio_data* FUNC_5 (struct device*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (struct kempld_device_data*) ;
 int VAR_8 ;
 int FUNC_7 (struct platform_device*,struct kempld_gpio_data*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct kempld_device_data *VAR_11 = FUNC_1(VAR_10->parent);
 struct kempld_platform_data *VAR_12 = FUNC_2(VAR_11->dev);
 struct kempld_gpio_data *VAR_13;
 struct gpio_chip *VAR_14;
 int VAR_15;

 if (VAR_11->info.spec_major < 2) {
  FUNC_0(VAR_10,
   "Driver only supports GPIO devices compatible to PLD spec. rev. 2.0 or higher\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_5(VAR_10, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->pld = VAR_11;

 FUNC_7(VAR_9, VAR_13);

 VAR_14 = &VAR_13->chip;
 VAR_14->label = "gpio-kempld";
 VAR_14->owner = VAR_3;
 VAR_14->parent = VAR_10;
 VAR_14->can_sleep = 1;
 if (VAR_12 && VAR_12->gpio_base)
  VAR_14->base = VAR_12->gpio_base;
 else
  VAR_14->base = -1;
 VAR_14->direction_input = VAR_4;
 VAR_14->direction_output = VAR_5;
 VAR_14->get_direction = VAR_7;
 VAR_14->get = VAR_6;
 VAR_14->set = VAR_8;
 VAR_14->ngpio = FUNC_6(VAR_11);
 if (VAR_14->ngpio == 0) {
  FUNC_0(VAR_10, "No GPIO pins detected\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_4(VAR_10, VAR_14, VAR_13);
 if (VAR_15) {
  FUNC_0(VAR_10, "Could not register GPIO chip\n");
  return VAR_15;
 }

 FUNC_3(VAR_10, "GPIO functionality initialized with %d pins\n",
   VAR_14->ngpio);

 return 0;
}
