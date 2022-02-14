
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct irq_chip {char* name; void (* irq_mask ) (struct irq_data*) ;void (* irq_unmask ) (struct irq_data*) ;int flags; int irq_set_wake; int irq_set_type; struct device* parent_device; } ;
struct intc_irqpin_priv {int sense_bitfield_width; int requested_irq; int shared_irqs; int irq_domain; struct intc_irqpin_priv* irq; struct irq_chip irq_chip; struct intc_irqpin_iomem* iomem; struct intc_irqpin_priv* p; struct platform_device* pdev; } ;
struct intc_irqpin_iomem {int width; int iomem; int write; int read; } ;
struct intc_irqpin_config {int irlm_bit; scalar_t__ needs_irlm; } ;
typedef int io ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,unsigned int) ;
 char* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int,int) ;
 struct intc_irqpin_priv* FUNC_5 (struct device*,int,int ) ;
 scalar_t__ FUNC_6 (struct device*,int,int ,int ,char const*,struct intc_irqpin_priv*) ;
 void FUNC_7 (struct irq_data*) ;
 void FUNC_8 (struct irq_data*) ;
 int VAR_14 ;
 void FUNC_9 (struct irq_data*) ;
 void FUNC_10 (struct irq_data*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (struct intc_irqpin_priv*,int,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_12 (struct intc_irqpin_priv*,size_t,int ,int,int) ;
 void FUNC_13 (struct irq_data*) ;
 void FUNC_14 (struct irq_data*) ;
 int VAR_20 ;
 int FUNC_15 (struct intc_irqpin_priv*,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_16 (int ,unsigned int,int ,int *,struct intc_irqpin_priv*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct resource**,int ,int) ;
 struct intc_irqpin_config* FUNC_19 (struct device*) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (int ,char*,int*) ;
 struct resource* FUNC_22 (struct platform_device*,int ,int) ;
 int FUNC_23 (struct platform_device*,struct intc_irqpin_priv*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (struct device*) ;
 int FUNC_27 (struct device*) ;
 int FUNC_28 (struct resource*) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_23)
{
 const struct intc_irqpin_config *VAR_24;
 struct device *VAR_25 = &VAR_23->dev;
 struct intc_irqpin_priv *VAR_26;
 struct intc_irqpin_iomem *VAR_27;
 struct resource *VAR_28[VAR_7];
 struct resource *VAR_29;
 struct irq_chip *VAR_30;
 void (*VAR_31)(struct irq_data *VAR_32);
 void (*VAR_33)(struct irq_data *VAR_34);
 const char *VAR_35 = FUNC_2(VAR_25);
 bool VAR_36;
 unsigned int VAR_37;
 int VAR_38;
 int VAR_39;
 int VAR_40;

 VAR_26 = FUNC_5(VAR_25, sizeof(*VAR_26), VAR_4);
 if (!VAR_26)
  return -VAR_2;


 FUNC_21(VAR_25->of_node, "sense-bitfield-width",
        &VAR_26->sense_bitfield_width);
 VAR_36 = FUNC_20(VAR_25->of_node, "control-parent");
 if (!VAR_26->sense_bitfield_width)
  VAR_26->sense_bitfield_width = 4;

 VAR_26->pdev = VAR_23;
 FUNC_23(VAR_23, VAR_26);

 VAR_24 = FUNC_19(VAR_25);

 FUNC_25(VAR_25);
 FUNC_26(VAR_25);


 FUNC_18(VAR_28, 0, sizeof(VAR_28));
 for (VAR_40 = 0; VAR_40 < VAR_7; VAR_40++) {
  VAR_28[VAR_40] = FUNC_22(VAR_23, VAR_11, VAR_40);
  if (!VAR_28[VAR_40] && VAR_40 < VAR_8) {
   FUNC_0(VAR_25, "not enough IOMEM resources\n");
   VAR_39 = -VAR_0;
   goto err0;
  }
 }


 for (VAR_40 = 0; VAR_40 < VAR_5; VAR_40++) {
  VAR_29 = FUNC_22(VAR_23, VAR_10, VAR_40);
  if (!VAR_29)
   break;

  VAR_26->irq[VAR_40].p = VAR_26;
  VAR_26->irq[VAR_40].requested_irq = VAR_29->start;
 }

 VAR_37 = VAR_40;
 if (VAR_37 < 1) {
  FUNC_0(VAR_25, "not enough IRQ resources\n");
  VAR_39 = -VAR_0;
  goto err0;
 }


 for (VAR_40 = 0; VAR_40 < VAR_7; VAR_40++) {
  VAR_27 = &VAR_26->iomem[VAR_40];


  if (!VAR_28[VAR_40])
   continue;

  switch (FUNC_28(VAR_28[VAR_40])) {
  case 1:
   VAR_27->width = 8;
   VAR_27->read = VAR_19;
   VAR_27->write = VAR_22;
   break;
  case 4:
   VAR_27->width = 32;
   VAR_27->read = VAR_18;
   VAR_27->write = VAR_21;
   break;
  default:
   FUNC_0(VAR_25, "IOMEM size mismatch\n");
   VAR_39 = -VAR_0;
   goto err0;
  }

  VAR_27->iomem = FUNC_4(VAR_25, VAR_28[VAR_40]->start,
      FUNC_28(VAR_28[VAR_40]));
  if (!VAR_27->iomem) {
   FUNC_0(VAR_25, "failed to remap IOMEM\n");
   VAR_39 = -VAR_3;
   goto err0;
  }
 }


 if (VAR_24 && VAR_24->needs_irlm) {
  if (VAR_28[VAR_6])
   FUNC_12(VAR_26, VAR_6,
            VAR_24->irlm_bit, 1, 1);
  else
   FUNC_3(VAR_25, "unable to select IRLM mode\n");
 }


 for (VAR_40 = 0; VAR_40 < VAR_37; VAR_40++)
  FUNC_11(VAR_26, VAR_40, 1);


 FUNC_15(VAR_26, VAR_9, 0x0);


 VAR_38 = VAR_26->irq[0].requested_irq;
 VAR_26->shared_irqs = 1;
 for (VAR_40 = 1; VAR_40 < VAR_37; VAR_40++) {
  if (VAR_38 != VAR_26->irq[VAR_40].requested_irq) {
   VAR_26->shared_irqs = 0;
   break;
  }
 }


 if (VAR_36) {
  VAR_31 = FUNC_10;
  VAR_33 = FUNC_8;
 } else if (!VAR_26->shared_irqs) {
  VAR_31 = FUNC_9;
  VAR_33 = FUNC_7;
 } else {
  VAR_31 = FUNC_14;
  VAR_33 = FUNC_13;
 }

 VAR_30 = &VAR_26->irq_chip;
 VAR_30->name = "intc-irqpin";
 VAR_30->parent_device = VAR_25;
 VAR_30->irq_mask = VAR_33;
 VAR_30->irq_unmask = VAR_31;
 VAR_30->irq_set_type = VAR_16;
 VAR_30->irq_set_wake = VAR_17;
 VAR_30->flags = VAR_12;

 VAR_26->irq_domain = FUNC_16(VAR_25->of_node, VAR_37, 0,
           &VAR_14, VAR_26);
 if (!VAR_26->irq_domain) {
  VAR_39 = -VAR_3;
  FUNC_0(VAR_25, "cannot initialize irq domain\n");
  goto err0;
 }

 if (VAR_26->shared_irqs) {

  if (FUNC_6(VAR_25, VAR_26->irq[0].requested_irq,
    VAR_20,
    VAR_13, VAR_35, VAR_26)) {
   FUNC_0(VAR_25, "failed to request low IRQ\n");
   VAR_39 = -VAR_1;
   goto err1;
  }
 } else {

  for (VAR_40 = 0; VAR_40 < VAR_37; VAR_40++) {
   if (FUNC_6(VAR_25, VAR_26->irq[VAR_40].requested_irq,
          VAR_15, 0, VAR_35,
          &VAR_26->irq[VAR_40])) {
    FUNC_0(VAR_25, "failed to request low IRQ\n");
    VAR_39 = -VAR_1;
    goto err1;
   }
  }
 }


 for (VAR_40 = 0; VAR_40 < VAR_37; VAR_40++)
  FUNC_11(VAR_26, VAR_40, 0);

 FUNC_1(VAR_25, "driving %d irqs\n", VAR_37);

 return 0;

err1:
 FUNC_17(VAR_26->irq_domain);
err0:
 FUNC_27(VAR_25);
 FUNC_24(VAR_25);
 return VAR_39;
}
