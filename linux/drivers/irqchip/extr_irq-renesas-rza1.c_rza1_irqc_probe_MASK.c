
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int flags; int irq_set_type; int irq_retrigger; int irq_eoi; int irq_unmask; int irq_mask; } ;
struct rza1_irqc_priv {int irq_domain; TYPE_1__ chip; int base; struct device* dev; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct rza1_irqc_priv* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct platform_device*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct irq_domain*,int ,int ,struct device_node*,int *,struct rza1_irqc_priv*) ;
 struct irq_domain* FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*) ;
 int FUNC_9 (struct platform_device*,struct rza1_irqc_priv*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (struct rza1_irqc_priv*,struct device_node*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct device_node *VAR_14 = VAR_13->of_node;
 struct irq_domain *VAR_15 = ((void*)0);
 struct device_node *VAR_16;
 struct rza1_irqc_priv *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_3(VAR_13, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 FUNC_9(VAR_12, VAR_17);
 VAR_17->dev = VAR_13;

 VAR_17->base = FUNC_4(VAR_12, 0);
 if (FUNC_0(VAR_17->base))
  return FUNC_1(VAR_17->base);

 VAR_16 = FUNC_7(VAR_14);
 if (VAR_16)
  VAR_15 = FUNC_6(VAR_16);

 if (!VAR_15) {
  FUNC_2(VAR_13, "cannot find parent domain\n");
  VAR_18 = -VAR_0;
  goto out_put_node;
 }

 VAR_18 = FUNC_10(VAR_17, VAR_16);
 if (VAR_18) {
  FUNC_2(VAR_13, "cannot parse %s: %d\n", "interrupt-map", VAR_18);
  goto out_put_node;
 }

 VAR_17->chip.name = "rza1-irqc",
 VAR_17->chip.irq_mask = VAR_6,
 VAR_17->chip.irq_unmask = VAR_8,
 VAR_17->chip.irq_eoi = VAR_10,
 VAR_17->chip.irq_retrigger = VAR_7,
 VAR_17->chip.irq_set_type = VAR_11,
 VAR_17->chip.flags = VAR_3 | VAR_4;

 VAR_17->irq_domain = FUNC_5(VAR_15, 0, VAR_5,
          VAR_14, &VAR_9,
          VAR_17);
 if (!VAR_17->irq_domain) {
  FUNC_2(VAR_13, "cannot initialize irq domain\n");
  VAR_18 = -VAR_1;
 }

out_put_node:
 FUNC_8(VAR_16);
 return VAR_18;
}
