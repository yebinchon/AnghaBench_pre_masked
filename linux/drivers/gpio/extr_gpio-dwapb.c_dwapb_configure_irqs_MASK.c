
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* mask; void* ack; } ;
struct TYPE_3__ {int irq_set_wake; int irq_release_resources; int irq_request_resources; int irq_disable; int irq_enable; int irq_set_type; int irq_unmask; int irq_mask; int irq_ack; } ;
struct irq_chip_type {int handler; void* type; TYPE_2__ regs; TYPE_1__ chip; } ;
struct irq_chip_generic {struct irq_chip_type* chip_types; struct dwapb_gpio* private; int reg_base; } ;
struct gpio_chip {unsigned int ngpio; int to_irq; } ;
struct fwnode_handle {int dummy; } ;
struct dwapb_port_property {int ngpio; scalar_t__* irq; int irq_shared; struct fwnode_handle* fwnode; } ;
struct dwapb_gpio_port {struct gpio_chip gc; } ;
struct dwapb_gpio {int * domain; int dev; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,scalar_t__,int ,int ,char*,struct dwapb_gpio*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_3 (struct dwapb_gpio*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int *,unsigned int,int,char*,int ,int ,int ,int ) ;
 int FUNC_5 (int *,unsigned int) ;
 int * FUNC_6 (struct fwnode_handle*,unsigned int,int *,struct dwapb_gpio*) ;
 int FUNC_7 (int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct irq_chip_generic* FUNC_8 (int *,int ) ;
 int FUNC_9 (scalar_t__,int ,struct dwapb_gpio*) ;

__attribute__((used)) static void FUNC_10(struct dwapb_gpio *VAR_22,
     struct dwapb_gpio_port *VAR_23,
     struct dwapb_port_property *VAR_24)
{
 struct gpio_chip *VAR_25 = &VAR_23->gc;
 struct fwnode_handle *VAR_26 = VAR_24->fwnode;
 struct irq_chip_generic *VAR_27 = ((void*)0);
 unsigned int VAR_28, VAR_29 = VAR_25->ngpio;
 struct irq_chip_type *VAR_30;
 int VAR_31, VAR_32;

 VAR_22->domain = FUNC_6(VAR_26, VAR_29,
       &VAR_21, VAR_22);
 if (!VAR_22->domain)
  return;

 VAR_31 = FUNC_4(VAR_22->domain, VAR_29, 2,
          "gpio-dwapb", VAR_17,
          VAR_4, 0,
          VAR_3);
 if (VAR_31) {
  FUNC_1(VAR_22->dev, "irq_alloc_domain_generic_chips failed\n");
  FUNC_7(VAR_22->domain);
  VAR_22->domain = ((void*)0);
  return;
 }

 VAR_27 = FUNC_8(VAR_22->domain, 0);
 if (!VAR_27) {
  FUNC_7(VAR_22->domain);
  VAR_22->domain = ((void*)0);
  return;
 }

 VAR_27->reg_base = VAR_22->regs;
 VAR_27->private = VAR_22;

 for (VAR_32 = 0; VAR_32 < 2; VAR_32++) {
  VAR_30 = &VAR_27->chip_types[VAR_32];
  VAR_30->chip.irq_ack = VAR_18;
  VAR_30->chip.irq_mask = VAR_20;
  VAR_30->chip.irq_unmask = VAR_19;
  VAR_30->chip.irq_set_type = VAR_14;
  VAR_30->chip.irq_enable = VAR_9;
  VAR_30->chip.irq_disable = VAR_8;
  VAR_30->chip.irq_request_resources = VAR_13;
  VAR_30->chip.irq_release_resources = VAR_12;



  VAR_30->regs.ack = FUNC_3(VAR_22, VAR_1);
  VAR_30->regs.mask = FUNC_3(VAR_22, VAR_0);
  VAR_30->type = VAR_6;
 }

 VAR_27->chip_types[0].type = VAR_6;
 VAR_27->chip_types[1].type = VAR_5;
 VAR_27->chip_types[1].handler = VAR_16;

 if (!VAR_24->irq_shared) {
  int VAR_33;

  for (VAR_33 = 0; VAR_33 < VAR_24->ngpio; VAR_33++) {
   if (VAR_24->irq[VAR_33] >= 0)
    FUNC_9(VAR_24->irq[VAR_33],
      VAR_10, VAR_22);
  }
 } else {




  VAR_31 = FUNC_2(VAR_22->dev, VAR_24->irq[0],
           VAR_11,
           VAR_2, "gpio-dwapb-mfd", VAR_22);
  if (VAR_31) {
   FUNC_0(VAR_22->dev, "error requesting IRQ\n");
   FUNC_7(VAR_22->domain);
   VAR_22->domain = ((void*)0);
   return;
  }
 }

 for (VAR_28 = 0 ; VAR_28 < VAR_29 ; VAR_28++)
  FUNC_5(VAR_22->domain, VAR_28);

 VAR_23->gc.to_irq = VAR_7;
}
