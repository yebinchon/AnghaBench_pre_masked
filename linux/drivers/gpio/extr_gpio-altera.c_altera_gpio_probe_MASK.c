
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct gpio_irq_chip {int num_parents; scalar_t__* parents; int handler; int default_type; int parent_handler; TYPE_2__* chip; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {int ngpio; struct gpio_irq_chip irq; TYPE_4__* parent; int owner; int set; int get; int direction_output; int direction_input; } ;
struct TYPE_10__ {TYPE_1__ gc; } ;
struct TYPE_9__ {char* name; void* irq_shutdown; int irq_startup; int irq_set_type; int irq_unmask; void* irq_mask; } ;
struct altera_gpio_chip {scalar_t__ mapped_irq; int interrupt_trigger; TYPE_3__ mmchip; TYPE_2__ irq_chip; int gpio_lock; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_4__*,char*,void*,void*) ;
 scalar_t__* FUNC_2 (TYPE_4__*,int,int,int ) ;
 struct altera_gpio_chip* FUNC_3 (TYPE_4__*,int,int ) ;
 int VAR_17 ;
 int FUNC_4 (struct device_node*,TYPE_3__*,struct altera_gpio_chip*) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (struct platform_device*,struct altera_gpio_chip*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_18)
{
 struct device_node *VAR_19 = VAR_18->dev.of_node;
 int VAR_20, VAR_21;
 struct altera_gpio_chip *VAR_22;
 struct gpio_irq_chip *VAR_23;

 VAR_22 = FUNC_3(&VAR_18->dev, sizeof(*VAR_22), VAR_3);
 if (!VAR_22)
  return -VAR_2;

 FUNC_8(&VAR_22->gpio_lock);

 if (FUNC_5(VAR_19, "altr,ngpio", &VAR_20))

  VAR_22->mmchip.gc.ngpio = VAR_0;
 else
  VAR_22->mmchip.gc.ngpio = VAR_20;

 if (VAR_22->mmchip.gc.ngpio > VAR_0) {
  FUNC_1(&VAR_18->dev,
   "ngpio is greater than %d, defaulting to %d\n",
   VAR_0, VAR_0);
  VAR_22->mmchip.gc.ngpio = VAR_0;
 }

 VAR_22->mmchip.gc.direction_input = VAR_7;
 VAR_22->mmchip.gc.direction_output = VAR_8;
 VAR_22->mmchip.gc.get = VAR_9;
 VAR_22->mmchip.gc.set = VAR_16;
 VAR_22->mmchip.gc.owner = VAR_6;
 VAR_22->mmchip.gc.parent = &VAR_18->dev;

 VAR_22->mapped_irq = FUNC_6(VAR_18, 0);

 if (VAR_22->mapped_irq < 0)
  goto skip_irq;

 if (FUNC_5(VAR_19, "altr,interrupt-type", &VAR_20)) {
  FUNC_0(&VAR_18->dev,
   "altr,interrupt-type value not set in device tree\n");
  return -VAR_1;
 }
 VAR_22->interrupt_trigger = VAR_20;

 VAR_22->irq_chip.name = "altera-gpio";
 VAR_22->irq_chip.irq_mask = VAR_12;
 VAR_22->irq_chip.irq_unmask = VAR_15;
 VAR_22->irq_chip.irq_set_type = VAR_13;
 VAR_22->irq_chip.irq_startup = VAR_14;
 VAR_22->irq_chip.irq_shutdown = VAR_12;

 VAR_23 = &VAR_22->mmchip.gc.irq;
 VAR_23->chip = &VAR_22->irq_chip;
 if (VAR_22->interrupt_trigger == VAR_4)
  VAR_23->parent_handler = VAR_11;
 else
  VAR_23->parent_handler = VAR_10;
 VAR_23->num_parents = 1;
 VAR_23->parents = FUNC_2(&VAR_18->dev, 1, sizeof(*VAR_23->parents),
         VAR_3);
 if (!VAR_23->parents)
  return -VAR_2;
 VAR_23->default_type = VAR_5;
 VAR_23->handler = VAR_17;
 VAR_23->parents[0] = VAR_22->mapped_irq;

skip_irq:
 VAR_21 = FUNC_4(VAR_19, &VAR_22->mmchip, VAR_22);
 if (VAR_21) {
  FUNC_0(&VAR_18->dev, "Failed adding memory mapped gpiochip\n");
  return VAR_21;
 }

 FUNC_7(VAR_18, VAR_22);

 return 0;
}
