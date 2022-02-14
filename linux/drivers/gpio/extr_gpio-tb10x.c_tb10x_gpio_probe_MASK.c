
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_14__ {int base; int label; int ngpio; int to_irq; int free; int request; int owner; struct device* parent; } ;
struct tb10x_gpio {int irq; scalar_t__ base; TYPE_5__* domain; TYPE_7__ gc; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct irq_chip_generic {TYPE_4__* chip_types; scalar_t__ reg_base; } ;
struct device_node {int dummy; } ;
struct TYPE_13__ {TYPE_1__* gc; } ;
struct TYPE_11__ {int mask; int ack; } ;
struct TYPE_10__ {int irq_set_type; int irq_unmask; int irq_mask; int irq_ack; } ;
struct TYPE_12__ {TYPE_3__ regs; TYPE_2__ chip; int type; } ;
struct TYPE_9__ {struct irq_chip_generic** gc; } ;


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
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_14 ;
 int FUNC_2 (TYPE_7__*,struct device*,int,scalar_t__,int *,int *,scalar_t__,int *,int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,TYPE_7__*,struct tb10x_gpio*) ;
 int FUNC_6 (struct device*,int ,char*,struct device_node*) ;
 struct tb10x_gpio* FUNC_7 (struct device*,int,int ) ;
 scalar_t__ FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct device*,int,int ,int,int ,struct tb10x_gpio*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (TYPE_5__*,int ,int,int ,int ,int ,int ,int ) ;
 TYPE_5__* FUNC_11 (struct device_node*,int ,int *,int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_12 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_13 (struct device_node*,char*,int *) ;
 int FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (struct platform_device*,struct tb10x_gpio*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_25)
{
 struct tb10x_gpio *VAR_26;
 struct device *VAR_27 = &VAR_25->dev;
 struct device_node *VAR_28 = VAR_27->of_node;
 int VAR_29 = -VAR_0;
 u32 VAR_30;

 if (!VAR_28)
  return -VAR_1;

 if (FUNC_13(VAR_28, "abilis,ngpio", &VAR_30))
  return -VAR_1;

 VAR_26 = FUNC_7(VAR_27, sizeof(*VAR_26), VAR_3);
 if (VAR_26 == ((void*)0))
  return -VAR_2;

 VAR_26->base = FUNC_8(VAR_25, 0);
 if (FUNC_0(VAR_26->base))
  return FUNC_1(VAR_26->base);

 VAR_26->gc.label =
  FUNC_6(VAR_27, VAR_3, "%pOF", VAR_25->dev.of_node);
 if (!VAR_26->gc.label)
  return -VAR_2;






 VAR_29 = FUNC_2(&VAR_26->gc, VAR_27, 4,
    VAR_26->base + VAR_11,
    ((void*)0),
    ((void*)0),
    VAR_26->base + VAR_12,
    ((void*)0),
    0);
 if (VAR_29) {
  FUNC_3(VAR_27, "unable to init generic GPIO\n");
  return VAR_29;
 }
 VAR_26->gc.base = -1;
 VAR_26->gc.parent = VAR_27;
 VAR_26->gc.owner = VAR_14;




 VAR_26->gc.ngpio = VAR_30;
 VAR_26->gc.request = VAR_16;
 VAR_26->gc.free = VAR_15;

 VAR_29 = FUNC_5(VAR_27, &VAR_26->gc, VAR_26);
 if (VAR_29 < 0) {
  FUNC_3(VAR_27, "Could not add gpiochip.\n");
  return VAR_29;
 }

 FUNC_15(VAR_25, VAR_26);

 if (FUNC_12(VAR_28, "interrupt-controller", ((void*)0))) {
  struct irq_chip_generic *VAR_31;

  VAR_29 = FUNC_14(VAR_25, 0);
  if (VAR_29 < 0)
   return VAR_29;

  VAR_26->gc.to_irq = VAR_24;
  VAR_26->irq = VAR_29;

  VAR_29 = FUNC_9(VAR_27, VAR_29, VAR_22,
    VAR_5 | VAR_4,
    FUNC_4(VAR_27), VAR_26);
  if (VAR_29 != 0)
   return VAR_29;

  VAR_26->domain = FUNC_11(VAR_28,
      VAR_26->gc.ngpio,
      &VAR_21, ((void*)0));
  if (!VAR_26->domain) {
   return -VAR_2;
  }

  VAR_29 = FUNC_10(VAR_26->domain,
    VAR_26->gc.ngpio, 1, VAR_26->gc.label,
    VAR_17, VAR_8, VAR_7,
    VAR_6);
  if (VAR_29)
   return VAR_29;

  VAR_31 = VAR_26->domain->gc->gc[0];
  VAR_31->reg_base = VAR_26->base;
  VAR_31->chip_types[0].type = VAR_9;
  VAR_31->chip_types[0].chip.irq_ack = VAR_18;
  VAR_31->chip_types[0].chip.irq_mask = VAR_19;
  VAR_31->chip_types[0].chip.irq_unmask = VAR_20;
  VAR_31->chip_types[0].chip.irq_set_type = VAR_23;
  VAR_31->chip_types[0].regs.ack = VAR_10;
  VAR_31->chip_types[0].regs.mask = VAR_13;
 }

 return 0;
}
