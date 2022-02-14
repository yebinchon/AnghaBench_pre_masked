
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timbgpio_platform_data {int nr_pins; scalar_t__ irq_base; int gpio_base; } ;
struct gpio_chip {int ngpio; int can_sleep; int base; int * dbg_show; int * to_irq; int set; int direction_output; int get; int direction_input; struct device* parent; int owner; int label; } ;
struct timbgpio {scalar_t__ irq_base; scalar_t__ membase; struct gpio_chip gpio; int lock; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*) ;
 struct timbgpio_platform_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,struct gpio_chip*,struct timbgpio*) ;
 struct timbgpio* FUNC_6 (struct device*,int,int ) ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 int VAR_6 ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (int,int ,struct timbgpio*) ;
 int FUNC_11 (scalar_t__,int *,int ) ;
 int FUNC_12 (scalar_t__,struct timbgpio*) ;
 int FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct platform_device*,struct timbgpio*) ;
 int FUNC_15 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_14)
{
 int VAR_15, VAR_16;
 struct device *VAR_17 = &VAR_14->dev;
 struct gpio_chip *VAR_18;
 struct timbgpio *VAR_19;
 struct timbgpio_platform_data *VAR_20 = FUNC_3(&VAR_14->dev);
 int VAR_21 = FUNC_13(VAR_14, 0);

 if (!VAR_20 || VAR_20->nr_pins > 32) {
  FUNC_2(VAR_17, "Invalid platform data\n");
  return -VAR_0;
 }

 VAR_19 = FUNC_6(VAR_17, sizeof(*VAR_19), VAR_1);
 if (!VAR_19)
  return -VAR_0;

 VAR_19->irq_base = VAR_20->irq_base;

 FUNC_15(&VAR_19->lock);

 VAR_19->membase = FUNC_7(VAR_14, 0);
 if (FUNC_0(VAR_19->membase))
  return FUNC_1(VAR_19->membase);

 VAR_18 = &VAR_19->gpio;

 VAR_18->label = FUNC_4(&VAR_14->dev);
 VAR_18->owner = VAR_5;
 VAR_18->parent = &VAR_14->dev;
 VAR_18->direction_input = VAR_7;
 VAR_18->get = VAR_9;
 VAR_18->direction_output = VAR_8;
 VAR_18->set = VAR_10;
 VAR_18->to_irq = (VAR_21 >= 0 && VAR_19->irq_base > 0) ? VAR_13 : ((void*)0);
 VAR_18->dbg_show = ((void*)0);
 VAR_18->base = VAR_20->gpio_base;
 VAR_18->ngpio = VAR_20->nr_pins;
 VAR_18->can_sleep = 0;

 VAR_15 = FUNC_5(&VAR_14->dev, VAR_18, VAR_19);
 if (VAR_15)
  return VAR_15;

 FUNC_14(VAR_14, VAR_19);


 FUNC_8(0x0, VAR_19->membase + VAR_4);

 if (VAR_21 < 0 || VAR_19->irq_base <= 0)
  return 0;

 for (VAR_16 = 0; VAR_16 < VAR_20->nr_pins; VAR_16++) {
  FUNC_11(VAR_19->irq_base + VAR_16,
   &VAR_12, VAR_6);
  FUNC_12(VAR_19->irq_base + VAR_16, VAR_19);
  FUNC_9(VAR_19->irq_base + VAR_16, VAR_3 | VAR_2);
 }

 FUNC_10(VAR_21, VAR_11, VAR_19);

 return 0;
}
