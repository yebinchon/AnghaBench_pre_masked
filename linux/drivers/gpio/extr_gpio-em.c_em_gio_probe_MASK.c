
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct irq_chip {char const* name; int flags; int irq_release_resources; int irq_request_resources; int irq_set_type; int irq_unmask; int irq_mask; } ;
struct gpio_chip {char const* label; int base; unsigned int ngpio; int owner; struct device* parent; int free; int request; int to_irq; int set; int direction_output; int get; int direction_input; int of_node; } ;
struct em_gio_priv {int irq_domain; struct irq_chip irq_chip; struct gpio_chip gpio_chip; void* base1; void* base0; int sense_lock; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*) ;
 char* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int ,int ) ;
 int FUNC_3 (struct device*,struct gpio_chip*,struct em_gio_priv*) ;
 void* FUNC_4 (struct device*,int ,int ) ;
 struct em_gio_priv* FUNC_5 (struct device*,int,int ) ;
 scalar_t__ FUNC_6 (struct device*,int ,int ,int ,char const*,struct em_gio_priv*) ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (int ,unsigned int,int ,int *,struct em_gio_priv*) ;
 scalar_t__ FUNC_8 (int ,char*,unsigned int*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int) ;
 int FUNC_10 (struct platform_device*,struct em_gio_priv*) ;
 int FUNC_11 (struct resource*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_25)
{
 struct em_gio_priv *VAR_26;
 struct resource *VAR_27[2], *VAR_28[2];
 struct gpio_chip *VAR_29;
 struct irq_chip *VAR_30;
 struct device *VAR_31 = &VAR_25->dev;
 const char *VAR_32 = FUNC_1(VAR_31);
 unsigned int VAR_33;
 int VAR_34;

 VAR_26 = FUNC_5(VAR_31, sizeof(*VAR_26), VAR_4);
 if (!VAR_26)
  return -VAR_2;

 VAR_26->pdev = VAR_25;
 FUNC_10(VAR_25, VAR_26);
 FUNC_12(&VAR_26->sense_lock);

 VAR_27[0] = FUNC_9(VAR_25, VAR_6, 0);
 VAR_27[1] = FUNC_9(VAR_25, VAR_6, 1);
 VAR_28[0] = FUNC_9(VAR_25, VAR_5, 0);
 VAR_28[1] = FUNC_9(VAR_25, VAR_5, 1);

 if (!VAR_27[0] || !VAR_27[1] || !VAR_28[0] || !VAR_28[1]) {
  FUNC_0(VAR_31, "missing IRQ or IOMEM\n");
  return -VAR_0;
 }

 VAR_26->base0 = FUNC_4(VAR_31, VAR_27[0]->start,
     FUNC_11(VAR_27[0]));
 if (!VAR_26->base0)
  return -VAR_2;

 VAR_26->base1 = FUNC_4(VAR_31, VAR_27[1]->start,
       FUNC_11(VAR_27[1]));
 if (!VAR_26->base1)
  return -VAR_2;

 if (FUNC_8(VAR_31->of_node, "ngpios", &VAR_33)) {
  FUNC_0(VAR_31, "Missing ngpios OF property\n");
  return -VAR_0;
 }

 VAR_29 = &VAR_26->gpio_chip;
 VAR_29->of_node = VAR_31->of_node;
 VAR_29->direction_input = VAR_10;
 VAR_29->get = VAR_13;
 VAR_29->direction_output = VAR_11;
 VAR_29->set = VAR_23;
 VAR_29->to_irq = VAR_24;
 VAR_29->request = VAR_22;
 VAR_29->free = VAR_12;
 VAR_29->label = VAR_32;
 VAR_29->parent = VAR_31;
 VAR_29->owner = VAR_9;
 VAR_29->base = -1;
 VAR_29->ngpio = VAR_33;

 VAR_30 = &VAR_26->irq_chip;
 VAR_30->name = VAR_32;
 VAR_30->irq_mask = VAR_14;
 VAR_30->irq_unmask = VAR_17;
 VAR_30->irq_set_type = VAR_21;
 VAR_30->irq_request_resources = VAR_20;
 VAR_30->irq_release_resources = VAR_19;
 VAR_30->flags = VAR_8 | VAR_7;

 VAR_26->irq_domain = FUNC_7(VAR_31->of_node, VAR_33, 0,
           &VAR_15, VAR_26);
 if (!VAR_26->irq_domain) {
  FUNC_0(VAR_31, "cannot initialize irq domain\n");
  return -VAR_3;
 }

 VAR_34 = FUNC_2(VAR_31, VAR_16,
           VAR_26->irq_domain);
 if (VAR_34)
  return VAR_34;

 if (FUNC_6(VAR_31, VAR_28[0]->start,
        VAR_18, 0, VAR_32, VAR_26)) {
  FUNC_0(VAR_31, "failed to request low IRQ\n");
  return -VAR_1;
 }

 if (FUNC_6(VAR_31, VAR_28[1]->start,
        VAR_18, 0, VAR_32, VAR_26)) {
  FUNC_0(VAR_31, "failed to request high IRQ\n");
  return -VAR_1;
 }

 VAR_34 = FUNC_3(VAR_31, VAR_29, VAR_26);
 if (VAR_34) {
  FUNC_0(VAR_31, "failed to add GPIO controller\n");
  return VAR_34;
 }

 return 0;
}
