
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_chip {int irq_set_type; int irq_set_affinity; int irq_eoi; int irq_unmask; int irq_mask; void* name; } ;
struct gpio_chip {int base; int ngpio; int to_irq; int set_multiple; int set; int get; int direction_output; int direction_input; int get_direction; int free; int request; struct device* parent; void* label; } ;
struct uniphier_gpio_priv {int domain; struct irq_chip irq_chip; struct gpio_chip chip; int lock; int regs; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 void* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,struct gpio_chip*,struct uniphier_gpio_priv*) ;
 struct uniphier_gpio_priv* FUNC_4 (struct device*,int ,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct irq_domain*,int ,int ,int ,int *,struct uniphier_gpio_priv*) ;
 struct irq_domain* FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (int ) ;
 int FUNC_9 (struct device_node*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int *) ;
 int FUNC_12 (struct platform_device*,struct uniphier_gpio_priv*) ;
 int VAR_9 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct uniphier_gpio_priv*,int ,unsigned int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct uniphier_gpio_priv*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_21)
{
 struct device *VAR_22 = &VAR_21->dev;
 struct device_node *VAR_23;
 struct irq_domain *VAR_24;
 struct uniphier_gpio_priv *VAR_25;
 struct gpio_chip *VAR_26;
 struct irq_chip *VAR_27;
 unsigned int VAR_28;
 u32 VAR_29;
 int VAR_30;

 VAR_23 = FUNC_8(VAR_22->of_node);
 if (!VAR_23)
  return -VAR_1;

 VAR_24 = FUNC_7(VAR_23);
 FUNC_9(VAR_23);
 if (!VAR_24)
  return -VAR_2;

 VAR_30 = FUNC_11(VAR_22->of_node, "ngpios", &VAR_29);
 if (VAR_30)
  return VAR_30;

 VAR_28 = FUNC_15(VAR_29) * 2 + 3;
 VAR_25 = FUNC_4(VAR_22, FUNC_14(VAR_25, VAR_9, VAR_28),
       VAR_3);
 if (!VAR_25)
  return -VAR_0;

 VAR_25->regs = FUNC_5(VAR_21, 0);
 if (FUNC_0(VAR_25->regs))
  return FUNC_1(VAR_25->regs);

 FUNC_13(&VAR_25->lock);

 VAR_26 = &VAR_25->chip;
 VAR_26->label = FUNC_2(VAR_22);
 VAR_26->parent = VAR_22;
 VAR_26->request = VAR_6;
 VAR_26->free = VAR_5;
 VAR_26->get_direction = VAR_13;
 VAR_26->direction_input = VAR_10;
 VAR_26->direction_output = VAR_11;
 VAR_26->get = VAR_12;
 VAR_26->set = VAR_18;
 VAR_26->set_multiple = VAR_19;
 VAR_26->to_irq = VAR_20;
 VAR_26->base = -1;
 VAR_26->ngpio = VAR_29;

 VAR_27 = &VAR_25->irq_chip;
 VAR_27->name = FUNC_2(VAR_22);
 VAR_27->irq_mask = VAR_15;
 VAR_27->irq_unmask = VAR_17;
 VAR_27->irq_eoi = VAR_7;
 VAR_27->irq_set_affinity = VAR_8;
 VAR_27->irq_set_type = VAR_16;

 FUNC_16(VAR_25);

 VAR_30 = FUNC_3(VAR_22, VAR_26, VAR_25);
 if (VAR_30)
  return VAR_30;

 VAR_25->domain = FUNC_6(
     VAR_24, 0,
     VAR_4,
     FUNC_10(VAR_22->of_node),
     &VAR_14, VAR_25);
 if (!VAR_25->domain)
  return -VAR_0;

 FUNC_12(VAR_21, VAR_25);

 return 0;
}
