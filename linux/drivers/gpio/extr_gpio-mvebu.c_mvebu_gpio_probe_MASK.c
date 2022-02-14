
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct TYPE_11__ {int base; unsigned int ngpio; int can_sleep; int label; int dbg_show; struct device_node* of_node; int to_irq; int set; int direction_output; int get; int direction_input; int get_direction; int free; int request; TYPE_2__* parent; } ;
struct mvebu_gpio_chip {int soc_variant; int domain; TYPE_5__ chip; int percpu_regs; int regs; scalar_t__ offset; int clk; } ;
struct TYPE_9__ {int name; void* irq_set_type; int irq_unmask; int irq_mask; int irq_ack; } ;
struct irq_chip_type {int type; TYPE_1__ chip; int handler; } ;
struct irq_chip_generic {struct irq_chip_type* chip_types; struct mvebu_gpio_chip* private; } ;
struct device_node {int name; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;




 int VAR_14 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,char*,...) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (TYPE_2__*,TYPE_5__*,struct mvebu_gpio_chip*) ;
 struct mvebu_gpio_chip* FUNC_13 (TYPE_2__*,int,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_14 (int ,unsigned int,int,int ,int ,int,int ,int ) ;
 int FUNC_15 (struct device_node*,unsigned int,int *,int *) ;
 int FUNC_16 (int ) ;
 int VAR_19 ;
 struct irq_chip_generic* FUNC_17 (int ,int ) ;
 int FUNC_18 (int,int ,struct mvebu_gpio_chip*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 void* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_19 (struct platform_device*,struct mvebu_gpio_chip*) ;
 int FUNC_20 (struct platform_device*,struct mvebu_gpio_chip*) ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_21 (struct platform_device*,struct mvebu_gpio_chip*,int) ;
 int FUNC_22 (struct device_node*,char*) ;
 scalar_t__ FUNC_23 (struct device_node*) ;
 struct of_device_id* FUNC_24 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_25 (struct device_node*,char*,unsigned int*) ;
 int FUNC_26 (struct platform_device*,int) ;
 int FUNC_27 (struct platform_device*,struct mvebu_gpio_chip*) ;
 int FUNC_28 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_35)
{
 struct mvebu_gpio_chip *VAR_36;
 const struct of_device_id *VAR_37;
 struct device_node *VAR_38 = VAR_35->dev.of_node;
 struct irq_chip_generic *VAR_39;
 struct irq_chip_type *VAR_40;
 unsigned int VAR_41;
 bool VAR_42;
 int VAR_43;
 int VAR_44, VAR_45, VAR_46;
 int VAR_47;

 VAR_37 = FUNC_24(VAR_32, &VAR_35->dev);
 if (VAR_37)
  VAR_43 = (unsigned long) VAR_37->data;
 else
  VAR_43 = 128;


 VAR_42 = FUNC_23(VAR_38) != 0;

 VAR_36 = FUNC_13(&VAR_35->dev, sizeof(struct mvebu_gpio_chip),
         VAR_3);
 if (!VAR_36)
  return -VAR_2;

 FUNC_27(VAR_35, VAR_36);

 if (FUNC_25(VAR_35->dev.of_node, "ngpios", &VAR_41)) {
  FUNC_9(&VAR_35->dev, "Missing ngpios OF property\n");
  return -VAR_1;
 }

 VAR_46 = FUNC_22(VAR_35->dev.of_node, "gpio");
 if (VAR_46 < 0) {
  FUNC_9(&VAR_35->dev, "Couldn't get OF id\n");
  return VAR_46;
 }

 VAR_36->clk = FUNC_11(&VAR_35->dev, ((void*)0));

 if (!FUNC_7(VAR_36->clk))
  FUNC_8(VAR_36->clk);

 VAR_36->soc_variant = VAR_43;
 VAR_36->chip.label = FUNC_10(&VAR_35->dev);
 VAR_36->chip.parent = &VAR_35->dev;
 VAR_36->chip.request = VAR_16;
 VAR_36->chip.free = VAR_15;
 VAR_36->chip.get_direction = VAR_26;
 VAR_36->chip.direction_input = VAR_21;
 VAR_36->chip.get = VAR_25;
 VAR_36->chip.direction_output = VAR_22;
 VAR_36->chip.set = VAR_33;
 if (VAR_42)
  VAR_36->chip.to_irq = VAR_34;
 VAR_36->chip.base = VAR_46 * VAR_14;
 VAR_36->chip.ngpio = VAR_41;
 VAR_36->chip.can_sleep = 0;
 VAR_36->chip.of_node = VAR_38;
 VAR_36->chip.dbg_show = VAR_20;

 if (VAR_43 == 131)
  VAR_47 = FUNC_20(VAR_35, VAR_36);
 else
  VAR_47 = FUNC_19(VAR_35, VAR_36);

 if (VAR_47)
  return VAR_47;




 switch (VAR_43) {
 case 128:
 case 131:
  FUNC_28(VAR_36->regs,
        VAR_4 + VAR_36->offset, 0);
  FUNC_28(VAR_36->regs,
        VAR_5 + VAR_36->offset, 0);
  FUNC_28(VAR_36->regs,
        VAR_6 + VAR_36->offset, 0);
  break;
 case 129:
  FUNC_28(VAR_36->regs, VAR_4, 0);
  for (VAR_45 = 0; VAR_45 < 2; VAR_45++) {
   FUNC_28(VAR_36->regs,
         FUNC_3(VAR_45), 0);
   FUNC_28(VAR_36->regs,
         FUNC_5(VAR_45), 0);
  }
  break;
 case 130:
  FUNC_28(VAR_36->regs, VAR_4, 0);
  FUNC_28(VAR_36->regs, VAR_5, 0);
  FUNC_28(VAR_36->regs, VAR_6, 0);
  for (VAR_45 = 0; VAR_45 < 4; VAR_45++) {
   FUNC_28(VAR_36->percpu_regs,
         FUNC_1(VAR_45), 0);
   FUNC_28(VAR_36->percpu_regs,
         FUNC_2(VAR_45), 0);
   FUNC_28(VAR_36->percpu_regs,
         FUNC_4(VAR_45), 0);
  }
  break;
 default:
  FUNC_0();
 }

 FUNC_12(&VAR_35->dev, &VAR_36->chip, VAR_36);


 if (!VAR_42)
  return 0;

 VAR_36->domain =
     FUNC_15(VAR_38, VAR_41, &VAR_19, ((void*)0));
 if (!VAR_36->domain) {
  FUNC_9(&VAR_35->dev, "couldn't allocate irq domain %s (DT).\n",
   VAR_36->chip.label);
  return -VAR_1;
 }

 VAR_47 = FUNC_14(
     VAR_36->domain, VAR_41, 2, VAR_38->name, VAR_18,
     VAR_9 | VAR_8 | VAR_7, 0, 0);
 if (VAR_47) {
  FUNC_9(&VAR_35->dev, "couldn't allocate irq chips %s (DT).\n",
   VAR_36->chip.label);
  goto err_domain;
 }





 VAR_39 = FUNC_17(VAR_36->domain, 0);
 VAR_39->private = VAR_36;
 VAR_40 = &VAR_39->chip_types[0];
 VAR_40->type = VAR_12 | VAR_13;
 VAR_40->chip.irq_mask = VAR_30;
 VAR_40->chip.irq_unmask = VAR_31;
 VAR_40->chip.irq_set_type = VAR_29;
 VAR_40->chip.name = VAR_36->chip.label;

 VAR_40 = &VAR_39->chip_types[1];
 VAR_40->type = VAR_11 | VAR_10;
 VAR_40->chip.irq_ack = VAR_27;
 VAR_40->chip.irq_mask = VAR_23;
 VAR_40->chip.irq_unmask = VAR_24;
 VAR_40->chip.irq_set_type = VAR_29;
 VAR_40->handler = VAR_17;
 VAR_40->chip.name = VAR_36->chip.label;






 for (VAR_44 = 0; VAR_44 < 4; VAR_44++) {
  int VAR_48 = FUNC_26(VAR_35, VAR_44);

  if (VAR_48 < 0)
   continue;
  FUNC_18(VAR_48, VAR_28,
       VAR_36);
 }


 if (FUNC_6(VAR_0))
  return FUNC_21(VAR_35, VAR_36, VAR_46);

 return 0;

err_domain:
 FUNC_16(VAR_36->domain);

 return VAR_47;
}
