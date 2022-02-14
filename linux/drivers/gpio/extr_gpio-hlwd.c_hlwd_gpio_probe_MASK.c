
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct gpio_irq_chip {int num_parents; int* parents; int handler; int default_type; int parent_handler; TYPE_1__* chip; } ;
struct TYPE_13__ {int ngpio; struct gpio_irq_chip irq; } ;
struct TYPE_11__ {int irq_set_type; int irq_enable; int irq_unmask; int irq_mask; int name; } ;
struct hlwd_gpio {scalar_t__ irq; TYPE_5__ gpioc; TYPE_1__ irqc; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_5__*,TYPE_2__*,int,scalar_t__,scalar_t__,int *,scalar_t__,int *,int ) ;
 int FUNC_3 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_5__*,struct hlwd_gpio*) ;
 int* FUNC_7 (TYPE_2__*,int,int,int ) ;
 struct hlwd_gpio* FUNC_8 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (int,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,int*) ;
 scalar_t__ FUNC_13 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_16)
{
 struct hlwd_gpio *VAR_17;
 u32 VAR_18;
 int VAR_19;

 VAR_17 = FUNC_8(&VAR_16->dev, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 VAR_17->regs = FUNC_9(VAR_16, 0);
 if (FUNC_0(VAR_17->regs))
  return FUNC_1(VAR_17->regs);
 FUNC_10(0xffffffff, VAR_17->regs + VAR_8);

 VAR_19 = FUNC_2(&VAR_17->gpioc, &VAR_16->dev, 4,
   VAR_17->regs + VAR_4, VAR_17->regs + VAR_7,
   ((void*)0), VAR_17->regs + VAR_3, ((void*)0),
   VAR_0);
 if (VAR_19 < 0) {
  FUNC_5(&VAR_16->dev, "bgpio_init failed: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_12(VAR_16->dev.of_node, "ngpios", &VAR_18);
 if (VAR_19)
  VAR_18 = 32;
 VAR_17->gpioc.ngpio = VAR_18;


 FUNC_10(0, VAR_17->regs + VAR_6);
 FUNC_10(0xffffffff, VAR_17->regs + VAR_5);





 if (FUNC_11(VAR_16->dev.of_node, "interrupt-controller")) {
  struct gpio_irq_chip *VAR_20;

  VAR_17->irq = FUNC_13(VAR_16, 0);
  if (VAR_17->irq < 0) {
   FUNC_3(&VAR_16->dev, "platform_get_irq returned %d\n",
     VAR_17->irq);
   return VAR_17->irq;
  }

  VAR_17->irqc.name = FUNC_4(&VAR_16->dev);
  VAR_17->irqc.irq_mask = VAR_12;
  VAR_17->irqc.irq_unmask = VAR_14;
  VAR_17->irqc.irq_enable = VAR_11;
  VAR_17->irqc.irq_set_type = VAR_13;

  VAR_20 = &VAR_17->gpioc.irq;
  VAR_20->chip = &VAR_17->irqc;
  VAR_20->parent_handler = VAR_15;
  VAR_20->num_parents = 1;
  VAR_20->parents = FUNC_7(&VAR_16->dev, 1,
          sizeof(*VAR_20->parents),
          VAR_2);
  if (!VAR_20->parents)
   return -VAR_1;
  VAR_20->parents[0] = VAR_17->irq;
  VAR_20->default_type = VAR_9;
  VAR_20->handler = VAR_10;
 }

 return FUNC_6(&VAR_16->dev, &VAR_17->gpioc, VAR_17);
}
