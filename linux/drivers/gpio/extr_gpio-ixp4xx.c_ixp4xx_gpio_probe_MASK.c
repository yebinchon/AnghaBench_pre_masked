
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct gpio_irq_chip {int default_type; int handler; int child_to_parent_hwirq; struct irq_domain* parent_domain; scalar_t__ fwnode; int * chip; } ;
struct TYPE_3__ {int ngpio; char* label; struct gpio_irq_chip irq; int owner; struct device* parent; scalar_t__ base; } ;
struct ixp4xx_gpio {TYPE_1__ gc; scalar_t__ fwnode; scalar_t__ base; struct device* dev; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,struct device*,int,scalar_t__,scalar_t__,int *,int *,scalar_t__,unsigned long) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,TYPE_1__*,struct ixp4xx_gpio*) ;
 scalar_t__ FUNC_7 (struct device*,struct resource*) ;
 struct ixp4xx_gpio* FUNC_8 (struct device*,int,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_9 (int *) ;
 struct irq_domain* FUNC_10 (struct device_node*) ;
 struct irq_domain* FUNC_11 () ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 struct device_node* FUNC_14 (struct device_node*) ;
 scalar_t__ FUNC_15 (struct device_node*) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct ixp4xx_gpio*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_14)
{
 unsigned long VAR_15;
 struct device *VAR_16 = &VAR_14->dev;
 struct device_node *VAR_17 = VAR_16->of_node;
 struct irq_domain *VAR_18;
 struct resource *VAR_19;
 struct ixp4xx_gpio *VAR_20;
 struct gpio_irq_chip *VAR_21;
 int VAR_22;

 VAR_20 = FUNC_8(VAR_16, sizeof(*VAR_20), VAR_3);
 if (!VAR_20)
  return -VAR_2;
 VAR_20->dev = VAR_16;

 VAR_19 = FUNC_16(VAR_14, VAR_4, 0);
 VAR_20->base = FUNC_7(VAR_16, VAR_19);
 if (FUNC_0(VAR_20->base))
  return FUNC_1(VAR_20->base);







 if (VAR_17) {
  struct device_node *VAR_23;

  VAR_23 = FUNC_14(VAR_17);
  if (!VAR_23) {
   FUNC_4(VAR_16, "no IRQ parent node\n");
   return -VAR_1;
  }
  VAR_18 = FUNC_10(VAR_23);
  if (!VAR_18) {
   FUNC_4(VAR_16, "no IRQ parent domain\n");
   return -VAR_1;
  }
  VAR_20->fwnode = FUNC_15(VAR_17);
 } else {
  VAR_18 = FUNC_11();
  VAR_20->fwnode = FUNC_9(&VAR_19->start);
  if (!VAR_20->fwnode) {
   FUNC_4(VAR_16, "no domain base\n");
   return -VAR_1;
  }
 }





 if (FUNC_12() || FUNC_13())
  FUNC_2(0x0, VAR_20->base + VAR_6);
 VAR_15 = 0;



 VAR_22 = FUNC_3(&VAR_20->gc, VAR_16, 4,
    VAR_20->base + VAR_7,
    VAR_20->base + VAR_9,
    ((void*)0),
    ((void*)0),
    VAR_20->base + VAR_8,
    VAR_15);
 if (VAR_22) {
  FUNC_4(VAR_16, "unable to init generic GPIO\n");
  return VAR_22;
 }
 VAR_20->gc.ngpio = 16;
 VAR_20->gc.label = "IXP4XX_GPIO_CHIP";





 VAR_20->gc.base = 0;
 VAR_20->gc.parent = &VAR_14->dev;
 VAR_20->gc.owner = VAR_10;

 VAR_21 = &VAR_20->gc.irq;
 VAR_21->chip = &VAR_13;
 VAR_21->fwnode = VAR_20->fwnode;
 VAR_21->parent_domain = VAR_18;
 VAR_21->child_to_parent_hwirq = VAR_12;
 VAR_21->handler = VAR_11;
 VAR_21->default_type = VAR_5;

 VAR_22 = FUNC_6(VAR_16, &VAR_20->gc, VAR_20);
 if (VAR_22) {
  FUNC_4(VAR_16, "failed to add SoC gpiochip\n");
  return VAR_22;
 }

 FUNC_17(VAR_14, VAR_20);
 FUNC_5(VAR_16, "IXP4 GPIO registered\n");

 return 0;
}
