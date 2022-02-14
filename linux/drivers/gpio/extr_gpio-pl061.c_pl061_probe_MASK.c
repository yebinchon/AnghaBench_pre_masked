
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_irq_chip {int num_parents; int* parents; int handler; int default_type; int parent_handler; TYPE_1__* chip; } ;
struct TYPE_4__ {int base; struct gpio_irq_chip irq; int owner; struct device* parent; void* label; int ngpio; int set; int get; int direction_output; int direction_input; int get_direction; int free; int request; } ;
struct TYPE_3__ {int irq_set_wake; int irq_set_type; int irq_unmask; int irq_mask; int irq_ack; void* name; } ;
struct pl061 {int parent_irq; TYPE_2__ gc; TYPE_1__ irq_chip; scalar_t__ base; int lock; } ;
struct device {int of_node; } ;
struct amba_id {int dummy; } ;
struct amba_device {int* irq; struct device dev; int res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_2 (struct amba_device*,struct pl061*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,TYPE_2__*,struct pl061*) ;
 scalar_t__ FUNC_7 (struct device*,int *) ;
 int* FUNC_8 (struct device*,int,int,int ) ;
 struct pl061* FUNC_9 (struct device*,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (int ,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct amba_device *VAR_21, const struct amba_id *VAR_22)
{
 struct device *VAR_23 = &VAR_21->dev;
 struct pl061 *VAR_24;
 struct gpio_irq_chip *VAR_25;
 int VAR_26, VAR_27;

 VAR_24 = FUNC_9(VAR_23, sizeof(*VAR_24), VAR_2);
 if (VAR_24 == ((void*)0))
  return -VAR_1;

 VAR_24->base = FUNC_7(VAR_23, &VAR_21->res);
 if (FUNC_0(VAR_24->base))
  return FUNC_1(VAR_24->base);

 FUNC_11(&VAR_24->lock);
 if (FUNC_10(VAR_23->of_node, "gpio-ranges")) {
  VAR_24->gc.request = VAR_8;
  VAR_24->gc.free = VAR_7;
 }

 VAR_24->gc.base = -1;
 VAR_24->gc.get_direction = VAR_12;
 VAR_24->gc.direction_input = VAR_10;
 VAR_24->gc.direction_output = VAR_11;
 VAR_24->gc.get = VAR_13;
 VAR_24->gc.set = VAR_20;
 VAR_24->gc.ngpio = VAR_5;
 VAR_24->gc.label = FUNC_5(VAR_23);
 VAR_24->gc.parent = VAR_23;
 VAR_24->gc.owner = VAR_6;




 VAR_24->irq_chip.name = FUNC_5(VAR_23);
 VAR_24->irq_chip.irq_ack = VAR_14;
 VAR_24->irq_chip.irq_mask = VAR_16;
 VAR_24->irq_chip.irq_unmask = VAR_19;
 VAR_24->irq_chip.irq_set_type = VAR_18;
 VAR_24->irq_chip.irq_set_wake = VAR_17;

 FUNC_12(0, VAR_24->base + VAR_3);
 VAR_27 = VAR_21->irq[0];
 if (VAR_27 < 0) {
  FUNC_3(&VAR_21->dev, "invalid IRQ\n");
  return -VAR_0;
 }
 VAR_24->parent_irq = VAR_27;

 VAR_25 = &VAR_24->gc.irq;
 VAR_25->chip = &VAR_24->irq_chip;
 VAR_25->parent_handler = VAR_15;
 VAR_25->num_parents = 1;
 VAR_25->parents = FUNC_8(VAR_23, 1, sizeof(*VAR_25->parents),
         VAR_2);
 if (!VAR_25->parents)
  return -VAR_1;
 VAR_25->parents[0] = VAR_27;
 VAR_25->default_type = VAR_4;
 VAR_25->handler = VAR_9;

 VAR_26 = FUNC_6(VAR_23, &VAR_24->gc, VAR_24);
 if (VAR_26)
  return VAR_26;

 FUNC_2(VAR_21, VAR_24);
 FUNC_4(VAR_23, "PL061 GPIO chip registered\n");

 return 0;
}
