
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_irq_chip {int num_parents; int* parents; int handler; int default_type; int parent_handler; int * chip; } ;
struct TYPE_2__ {int base; int ngpio; struct gpio_irq_chip irq; int owner; struct device* parent; int label; int set; int get; int direction_output; int direction_input; int free; int request; } ;
struct zx_gpio {TYPE_1__ gc; scalar_t__ base; int lock; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 int* FUNC_4 (struct device*,int,int,int ) ;
 struct zx_gpio* FUNC_5 (struct device*,int,int ) ;
 scalar_t__ FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (TYPE_1__*,struct zx_gpio*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (int ,char*) ;
 int FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (struct platform_device*,struct zx_gpio*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_16)
{
 struct device *VAR_17 = &VAR_16->dev;
 struct zx_gpio *VAR_18;
 struct gpio_irq_chip *VAR_19;
 int VAR_20, VAR_21, VAR_22;

 VAR_18 = FUNC_5(VAR_17, sizeof(*VAR_18), VAR_1);
 if (!VAR_18)
  return -VAR_0;

 VAR_18->base = FUNC_6(VAR_16, 0);
 if (FUNC_0(VAR_18->base))
  return FUNC_1(VAR_18->base);

 FUNC_12(&VAR_18->lock);
 if (FUNC_9(VAR_17->of_node, "gpio-ranges")) {
  VAR_18->gc.request = VAR_8;
  VAR_18->gc.free = VAR_7;
 }

 VAR_21 = FUNC_8(VAR_17->of_node, "gpio");
 VAR_18->gc.direction_input = VAR_10;
 VAR_18->gc.direction_output = VAR_11;
 VAR_18->gc.get = VAR_12;
 VAR_18->gc.set = VAR_15;
 VAR_18->gc.base = VAR_6 * VAR_21;
 VAR_18->gc.ngpio = VAR_6;
 VAR_18->gc.label = FUNC_3(VAR_17);
 VAR_18->gc.parent = VAR_17;
 VAR_18->gc.owner = VAR_3;




 FUNC_13(0xffff, VAR_18->base + VAR_5);
 FUNC_13(0, VAR_18->base + VAR_4);
 VAR_20 = FUNC_10(VAR_16, 0);
 if (VAR_20 < 0)
  return VAR_20;
 VAR_19 = &VAR_18->gc.irq;
 VAR_19->chip = &VAR_14;
 VAR_19->parent_handler = VAR_13;
 VAR_19->num_parents = 1;
 VAR_19->parents = FUNC_4(&VAR_16->dev, 1,
         sizeof(*VAR_19->parents),
         VAR_1);
 if (!VAR_19->parents)
  return -VAR_0;
 VAR_19->parents[0] = VAR_20;
 VAR_19->default_type = VAR_2;
 VAR_19->handler = VAR_9;

 VAR_22 = FUNC_7(&VAR_18->gc, VAR_18);
 if (VAR_22)
  return VAR_22;

 FUNC_11(VAR_16, VAR_18);
 FUNC_2(VAR_17, "ZX GPIO chip registered\n");

 return 0;
}
