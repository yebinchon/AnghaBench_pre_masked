
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct irq_chip {char const* name; int flags; int irq_set_wake; int irq_set_type; int irq_unmask; int irq_mask; struct device* parent_device; } ;
struct gpio_chip {char const* label; int base; unsigned int ngpio; int owner; struct device* parent; int set_multiple; int set; int direction_output; int get; int direction_input; int get_direction; int free; int request; } ;
struct gpio_rcar_priv {int irq_parent; struct irq_chip irq_chip; struct gpio_chip gpio_chip; int base; int lock; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,unsigned int) ;
 char* FUNC_4 (struct device*) ;
 struct gpio_rcar_priv* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 scalar_t__ FUNC_7 (struct device*,int ,int ,int ,char const*,struct gpio_rcar_priv*) ;
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
 int FUNC_8 (struct gpio_rcar_priv*,unsigned int*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_9 (struct gpio_chip*,struct gpio_rcar_priv*) ;
 int FUNC_10 (struct gpio_chip*,struct irq_chip*,int ,int ,int ) ;
 int FUNC_11 (struct gpio_chip*) ;
 int VAR_23 ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct gpio_rcar_priv*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_24)
{
 struct gpio_rcar_priv *VAR_25;
 struct resource *VAR_26;
 struct gpio_chip *VAR_27;
 struct irq_chip *VAR_28;
 struct device *VAR_29 = &VAR_24->dev;
 const char *VAR_30 = FUNC_4(VAR_29);
 unsigned int VAR_31;
 int VAR_32;

 VAR_25 = FUNC_5(VAR_29, sizeof(*VAR_25), VAR_3);
 if (!VAR_25)
  return -VAR_2;

 VAR_25->dev = VAR_29;
 FUNC_16(&VAR_25->lock);


 VAR_32 = FUNC_8(VAR_25, &VAR_31);
 if (VAR_32 < 0)
  return VAR_32;

 FUNC_13(VAR_24, VAR_25);

 FUNC_15(VAR_29);

 VAR_26 = FUNC_12(VAR_24, VAR_4, 0);
 if (!VAR_26) {
  FUNC_2(VAR_29, "missing IRQ\n");
  VAR_32 = -VAR_0;
  goto err0;
 }

 VAR_25->base = FUNC_6(VAR_24, 0);
 if (FUNC_0(VAR_25->base)) {
  VAR_32 = FUNC_1(VAR_25->base);
  goto err0;
 }

 VAR_27 = &VAR_25->gpio_chip;
 VAR_27->request = VAR_20;
 VAR_27->free = VAR_12;
 VAR_27->get_direction = VAR_14;
 VAR_27->direction_input = VAR_10;
 VAR_27->get = VAR_13;
 VAR_27->direction_output = VAR_11;
 VAR_27->set = VAR_21;
 VAR_27->set_multiple = VAR_22;
 VAR_27->label = VAR_30;
 VAR_27->parent = VAR_29;
 VAR_27->owner = VAR_9;
 VAR_27->base = -1;
 VAR_27->ngpio = VAR_31;

 VAR_28 = &VAR_25->irq_chip;
 VAR_28->name = VAR_30;
 VAR_28->parent_device = VAR_29;
 VAR_28->irq_mask = VAR_15;
 VAR_28->irq_unmask = VAR_16;
 VAR_28->irq_set_type = VAR_18;
 VAR_28->irq_set_wake = VAR_19;
 VAR_28->flags = VAR_6 | VAR_5;

 VAR_32 = FUNC_9(VAR_27, VAR_25);
 if (VAR_32) {
  FUNC_2(VAR_29, "failed to add GPIO controller\n");
  goto err0;
 }

 VAR_32 = FUNC_10(VAR_27, VAR_28, 0, VAR_23,
       VAR_8);
 if (VAR_32) {
  FUNC_2(VAR_29, "cannot add irqchip\n");
  goto err1;
 }

 VAR_25->irq_parent = VAR_26->start;
 if (FUNC_7(VAR_29, VAR_26->start, VAR_17,
        VAR_7, VAR_30, VAR_25)) {
  FUNC_2(VAR_29, "failed to request IRQ\n");
  VAR_32 = -VAR_1;
  goto err1;
 }

 FUNC_3(VAR_29, "driving %d GPIOs\n", VAR_31);

 return 0;

err1:
 FUNC_11(VAR_27);
err0:
 FUNC_14(VAR_29);
 return VAR_32;
}
