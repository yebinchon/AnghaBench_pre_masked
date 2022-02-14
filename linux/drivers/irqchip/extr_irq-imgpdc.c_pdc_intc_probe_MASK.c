
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {int start; } ;
struct TYPE_12__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct pdc_intc_priv {unsigned int nr_perips; unsigned int nr_syswakes; int* perip_irqs; int syswake_irq; int domain; scalar_t__ pdc_base; int lock; } ;
struct irq_chip_generic {int unused; TYPE_3__* chip_types; scalar_t__ reg_base; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {void* flags; void* irq_set_wake; void* irq_set_type; void* irq_unmask; void* irq_mask; void* irq_ack; } ;
struct TYPE_9__ {void* mask; void* ack; } ;
struct TYPE_11__ {TYPE_2__ chip; TYPE_1__ regs; int handler; int type; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (TYPE_4__*,char*,...) ;
 int FUNC_2 (TYPE_4__*,char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ,int ) ;
 int* FUNC_4 (TYPE_4__*,int,unsigned int,int ) ;
 struct pdc_intc_priv* FUNC_5 (TYPE_4__*,int,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int ,int,int,char*,int ,int ,int ,int ) ;
 int FUNC_7 (struct device_node*,int,int *,struct pdc_intc_priv*) ;
 int FUNC_8 (int ) ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 struct irq_chip_generic* FUNC_9 (int ,int) ;
 int FUNC_10 (int,int ,struct pdc_intc_priv*) ;
 int FUNC_11 (struct device_node*,char*,scalar_t__*) ;
 int VAR_20 ;
 int FUNC_12 (struct pdc_intc_priv*) ;
 int VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 int FUNC_13 (struct platform_device*,int) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct pdc_intc_priv*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct resource*) ;
 void* VAR_25 ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_26)
{
 struct pdc_intc_priv *VAR_27;
 struct device_node *VAR_28 = VAR_26->dev.of_node;
 struct resource *VAR_29;
 struct irq_chip_generic *VAR_30;
 unsigned int VAR_31;
 int VAR_32, VAR_33;
 u32 VAR_34;

 if (!VAR_28)
  return -VAR_2;


 VAR_29 = FUNC_14(VAR_26, VAR_5, 0);
 if (VAR_29 == ((void*)0)) {
  FUNC_1(&VAR_26->dev, "cannot find registers resource\n");
  return -VAR_2;
 }


 VAR_27 = FUNC_5(&VAR_26->dev, sizeof(*VAR_27), VAR_4);
 if (!VAR_27) {
  FUNC_1(&VAR_26->dev, "cannot allocate device data\n");
  return -VAR_3;
 }
 FUNC_16(&VAR_27->lock);
 FUNC_15(VAR_26, VAR_27);


 VAR_27->pdc_base = FUNC_3(&VAR_26->dev, VAR_29->start,
          FUNC_17(VAR_29));
 if (!VAR_27->pdc_base)
  return -VAR_1;


 VAR_33 = FUNC_11(VAR_28, "num-perips", &VAR_34);
 if (VAR_33) {
  FUNC_1(&VAR_26->dev, "No num-perips node property found\n");
  return -VAR_0;
 }
 if (VAR_34 > VAR_13) {
  FUNC_1(&VAR_26->dev, "num-perips (%u) out of range\n", VAR_34);
  return -VAR_0;
 }
 VAR_27->nr_perips = VAR_34;


 VAR_33 = FUNC_11(VAR_28, "num-syswakes", &VAR_34);
 if (VAR_33) {
  FUNC_1(&VAR_26->dev, "No num-syswakes node property found\n");
  return -VAR_0;
 }
 if (VAR_34 > VAR_13) {
  FUNC_1(&VAR_26->dev, "num-syswakes (%u) out of range\n", VAR_34);
  return -VAR_0;
 }
 VAR_27->nr_syswakes = VAR_34;


 VAR_27->perip_irqs = FUNC_4(&VAR_26->dev, 4, VAR_27->nr_perips,
     VAR_4);
 if (!VAR_27->perip_irqs) {
  FUNC_1(&VAR_26->dev, "cannot allocate perip IRQ list\n");
  return -VAR_3;
 }
 for (VAR_31 = 0; VAR_31 < VAR_27->nr_perips; ++VAR_31) {
  VAR_32 = FUNC_13(VAR_26, 1 + VAR_31);
  if (VAR_32 < 0)
   return VAR_32;
  VAR_27->perip_irqs[VAR_31] = VAR_32;
 }

 if (FUNC_13(VAR_26, 1 + VAR_31) >= 0) {
  FUNC_1(&VAR_26->dev, "surplus perip IRQs detected\n");
  return -VAR_0;
 }


 VAR_32 = FUNC_13(VAR_26, 0);
 if (VAR_32 < 0)
  return VAR_32;
 VAR_27->syswake_irq = VAR_32;


 VAR_27->domain = FUNC_7(VAR_28, 16, &VAR_19,
          VAR_27);
 if (FUNC_18(!VAR_27->domain)) {
  FUNC_1(&VAR_26->dev, "cannot add IRQ domain\n");
  return -VAR_3;
 }






 VAR_33 = FUNC_6(VAR_27->domain, 8, 2, "pdc",
          VAR_15, 0, 0,
          VAR_7);
 if (VAR_33)
  goto err_generic;



 VAR_30 = FUNC_9(VAR_27->domain, 0);
 VAR_30->unused = ~(FUNC_0(VAR_27->nr_perips) - 1);
 VAR_30->reg_base = VAR_27->pdc_base;




 VAR_30->chip_types[0].regs.mask = VAR_12;
 VAR_30->chip_types[0].chip.irq_mask = VAR_23;
 VAR_30->chip_types[0].chip.irq_unmask = VAR_24;
 VAR_30->chip_types[0].chip.irq_set_wake = VAR_22;



 VAR_30 = FUNC_9(VAR_27->domain, 8);
 VAR_30->unused = ~(FUNC_0(VAR_27->nr_syswakes) - 1);
 VAR_30->reg_base = VAR_27->pdc_base;


 VAR_30->chip_types[0].type = VAR_8;
 VAR_30->chip_types[0].handler = VAR_14;
 VAR_30->chip_types[0].regs.ack = VAR_10;
 VAR_30->chip_types[0].regs.mask = VAR_11;
 VAR_30->chip_types[0].chip.irq_ack = VAR_16;
 VAR_30->chip_types[0].chip.irq_mask = VAR_17;
 VAR_30->chip_types[0].chip.irq_unmask = VAR_18;
 VAR_30->chip_types[0].chip.irq_set_type = VAR_25;
 VAR_30->chip_types[0].chip.irq_set_wake = VAR_22;

 VAR_30->chip_types[0].chip.flags = VAR_6;


 VAR_30->chip_types[1].type = VAR_9;
 VAR_30->chip_types[1].handler = VAR_15;
 VAR_30->chip_types[1].regs.ack = VAR_10;
 VAR_30->chip_types[1].regs.mask = VAR_11;
 VAR_30->chip_types[1].chip.irq_ack = VAR_16;
 VAR_30->chip_types[1].chip.irq_mask = VAR_17;
 VAR_30->chip_types[1].chip.irq_unmask = VAR_18;
 VAR_30->chip_types[1].chip.irq_set_type = VAR_25;
 VAR_30->chip_types[1].chip.irq_set_wake = VAR_22;

 VAR_30->chip_types[1].chip.flags = VAR_6;


 FUNC_12(VAR_27);


 for (VAR_31 = 0; VAR_31 < VAR_27->nr_perips; ++VAR_31) {
  VAR_32 = VAR_27->perip_irqs[VAR_31];
  FUNC_10(VAR_32, VAR_20,
       VAR_27);
 }


 FUNC_10(VAR_27->syswake_irq,
      VAR_21, VAR_27);

 FUNC_2(&VAR_26->dev,
   "PDC IRQ controller initialised (%u perip IRQs, %u syswake IRQs)\n",
   VAR_27->nr_perips,
   VAR_27->nr_syswakes);

 return 0;
err_generic:
 FUNC_8(VAR_27->domain);
 return VAR_33;
}
