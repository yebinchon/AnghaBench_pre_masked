
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct irqc_priv {int number_of_irqs; int irq_domain; TYPE_5__* irq; TYPE_4__* gc; scalar_t__ cpu_int_base; scalar_t__ iomem; struct device* dev; } ;
struct TYPE_10__ {int hw_irq; int requested_irq; struct irqc_priv* p; } ;
struct TYPE_9__ {TYPE_3__* chip_types; scalar_t__ reg_base; } ;
struct TYPE_7__ {int flags; int irq_set_wake; int irq_set_type; int irq_unmask; int irq_mask; struct device* parent_device; } ;
struct TYPE_6__ {int disable; int enable; } ;
struct TYPE_8__ {TYPE_2__ chip; TYPE_1__ regs; } ;


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
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,int) ;
 char* FUNC_5 (struct device*) ;
 struct irqc_priv* FUNC_6 (struct device*,int,int ) ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 scalar_t__ FUNC_8 (struct device*,int ,int ,int ,char const*,TYPE_5__*) ;
 int VAR_11 ;
 int FUNC_9 (int ,int,int,char*,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int,int *,struct irqc_priv*) ;
 int FUNC_11 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_4__* FUNC_12 (int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct resource* FUNC_13 (struct platform_device*,int ,int) ;
 int FUNC_14 (struct platform_device*,struct irqc_priv*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_18)
{
 struct device *VAR_19 = &VAR_18->dev;
 const char *VAR_20 = FUNC_5(VAR_19);
 struct irqc_priv *VAR_21;
 struct resource *VAR_22;
 int VAR_23;
 int VAR_24;

 VAR_21 = FUNC_6(VAR_19, sizeof(*VAR_21), VAR_4);
 if (!VAR_21)
  return -VAR_2;

 VAR_21->dev = VAR_19;
 FUNC_14(VAR_18, VAR_21);

 FUNC_16(VAR_19);
 FUNC_17(VAR_19);


 for (VAR_24 = 0; VAR_24 < VAR_9; VAR_24++) {
  VAR_22 = FUNC_13(VAR_18, VAR_5, VAR_24);
  if (!VAR_22)
   break;

  VAR_21->irq[VAR_24].p = VAR_21;
  VAR_21->irq[VAR_24].hw_irq = VAR_24;
  VAR_21->irq[VAR_24].requested_irq = VAR_22->start;
 }

 VAR_21->number_of_irqs = VAR_24;
 if (VAR_21->number_of_irqs < 1) {
  FUNC_3(VAR_19, "not enough IRQ resources\n");
  VAR_23 = -VAR_0;
  goto err_runtime_pm_disable;
 }


 VAR_21->iomem = FUNC_7(VAR_18, 0);
 if (FUNC_1(VAR_21->iomem)) {
  VAR_23 = FUNC_2(VAR_21->iomem);
  goto err_runtime_pm_disable;
 }

 VAR_21->cpu_int_base = VAR_21->iomem + FUNC_0(0);

 VAR_21->irq_domain = FUNC_10(VAR_19->of_node, VAR_21->number_of_irqs,
           &VAR_14, VAR_21);
 if (!VAR_21->irq_domain) {
  VAR_23 = -VAR_3;
  FUNC_3(VAR_19, "cannot initialize irq domain\n");
  goto err_runtime_pm_disable;
 }

 VAR_23 = FUNC_9(VAR_21->irq_domain, VAR_21->number_of_irqs,
          1, "irqc", VAR_11,
          0, 0, VAR_10);
 if (VAR_23) {
  FUNC_3(VAR_19, "cannot allocate generic chip\n");
  goto err_remove_domain;
 }

 VAR_21->gc = FUNC_12(VAR_21->irq_domain, 0);
 VAR_21->gc->reg_base = VAR_21->cpu_int_base;
 VAR_21->gc->chip_types[0].regs.enable = VAR_7;
 VAR_21->gc->chip_types[0].regs.disable = VAR_8;
 VAR_21->gc->chip_types[0].chip.parent_device = VAR_19;
 VAR_21->gc->chip_types[0].chip.irq_mask = VAR_12;
 VAR_21->gc->chip_types[0].chip.irq_unmask = VAR_13;
 VAR_21->gc->chip_types[0].chip.irq_set_type = VAR_16;
 VAR_21->gc->chip_types[0].chip.irq_set_wake = VAR_17;
 VAR_21->gc->chip_types[0].chip.flags = VAR_6;


 for (VAR_24 = 0; VAR_24 < VAR_21->number_of_irqs; VAR_24++) {
  if (FUNC_8(VAR_19, VAR_21->irq[VAR_24].requested_irq,
         VAR_15, 0, VAR_20, &VAR_21->irq[VAR_24])) {
   FUNC_3(VAR_19, "failed to request IRQ\n");
   VAR_23 = -VAR_1;
   goto err_remove_domain;
  }
 }

 FUNC_4(VAR_19, "driving %d irqs\n", VAR_21->number_of_irqs);

 return 0;

err_remove_domain:
 FUNC_11(VAR_21->irq_domain);
err_runtime_pm_disable:
 FUNC_18(VAR_19);
 FUNC_15(VAR_19);
 return VAR_23;
}
