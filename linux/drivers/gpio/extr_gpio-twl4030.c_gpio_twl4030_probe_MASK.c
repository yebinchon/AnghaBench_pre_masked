
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct twl4030_gpio_platform_data {int (* setup ) (TYPE_1__*,int,scalar_t__) ;scalar_t__ use_leds; int mmc_cd; int debounce; int pulldowns; int pullups; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_12__ {int base; scalar_t__ ngpio; TYPE_1__* parent; } ;
struct gpio_twl4030_priv {int irq_base; TYPE_2__ gpio_chip; int mutex; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*,int,...) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 struct twl4030_gpio_platform_data* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int ,scalar_t__,int ) ;
 struct gpio_twl4030_priv* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (TYPE_2__*,struct gpio_twl4030_priv*) ;
 int FUNC_9 (struct device_node*,scalar_t__,int,int ,int *,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int *) ;
 struct twl4030_gpio_platform_data* FUNC_12 (TYPE_1__*,struct twl4030_gpio_platform_data*) ;
 int FUNC_13 (struct platform_device*,struct gpio_twl4030_priv*) ;
 int FUNC_14 (TYPE_1__*,int,scalar_t__) ;
 TYPE_2__ VAR_6 ;
 int FUNC_15 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_7)
{
 struct twl4030_gpio_platform_data *VAR_8 = FUNC_2(&VAR_7->dev);
 struct device_node *VAR_9 = VAR_7->dev.of_node;
 struct gpio_twl4030_priv *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_4(&VAR_7->dev, sizeof(struct gpio_twl4030_priv),
       VAR_2);
 if (!VAR_10)
  return -VAR_0;


 if (FUNC_10()) {
  FUNC_1(&VAR_7->dev, "can't dispatch IRQs from modules\n");
  goto no_irqs;
 }

 VAR_12 = FUNC_3(&VAR_7->dev, -1,
     0, VAR_3, 0);
 if (VAR_12 < 0) {
  FUNC_1(&VAR_7->dev, "Failed to alloc irq_descs\n");
  return VAR_12;
 }

 FUNC_9(VAR_9, VAR_3, VAR_12, 0,
         &VAR_5, ((void*)0));

 VAR_11 = FUNC_15(&VAR_7->dev, VAR_4, VAR_12);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10->irq_base = VAR_12;

no_irqs:
 VAR_10->gpio_chip = VAR_6;
 VAR_10->gpio_chip.base = -1;
 VAR_10->gpio_chip.ngpio = VAR_3;
 VAR_10->gpio_chip.parent = &VAR_7->dev;

 FUNC_11(&VAR_10->mutex);

 if (VAR_9)
  VAR_8 = FUNC_12(&VAR_7->dev, VAR_8);

 if (VAR_8 == ((void*)0)) {
  FUNC_1(&VAR_7->dev, "Platform data is missing\n");
  return -VAR_1;
 }







 VAR_11 = FUNC_6(VAR_8->pullups, VAR_8->pulldowns);
 if (VAR_11)
  FUNC_0(&VAR_7->dev, "pullups %.05x %.05x --> %d\n",
   VAR_8->pullups, VAR_8->pulldowns, VAR_11);

 VAR_11 = FUNC_5(VAR_8->debounce, VAR_8->mmc_cd);
 if (VAR_11)
  FUNC_0(&VAR_7->dev, "debounce %.03x %.01x --> %d\n",
   VAR_8->debounce, VAR_8->mmc_cd, VAR_11);





 if (VAR_8->use_leds)
  VAR_10->gpio_chip.ngpio += 2;

 VAR_11 = FUNC_8(&VAR_10->gpio_chip, VAR_10);
 if (VAR_11 < 0) {
  FUNC_1(&VAR_7->dev, "could not register gpiochip, %d\n", VAR_11);
  VAR_10->gpio_chip.ngpio = 0;
  FUNC_7(VAR_7);
  goto out;
 }

 FUNC_13(VAR_7, VAR_10);

 if (VAR_8->setup) {
  int VAR_13;

  VAR_13 = VAR_8->setup(&VAR_7->dev, VAR_10->gpio_chip.base,
          VAR_3);
  if (VAR_13)
   FUNC_0(&VAR_7->dev, "setup --> %d\n", VAR_13);
 }

out:
 return VAR_11;
}
