
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mxc_gpio_port {int dev; int base; } ;
struct TYPE_4__ {int mask; int ack; } ;
struct TYPE_3__ {int flags; int irq_set_wake; int irq_set_type; int irq_unmask; int irq_mask; int irq_ack; } ;
struct irq_chip_type {TYPE_2__ regs; TYPE_1__ chip; } ;
struct irq_chip_generic {struct irq_chip_type* chip_types; struct mxc_gpio_port* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 struct irq_chip_generic* FUNC_1 (int ,char*,int,int,int ,int ) ;
 int FUNC_2 (int ,struct irq_chip_generic*,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_3(struct mxc_gpio_port *VAR_12, int VAR_13)
{
 struct irq_chip_generic *VAR_14;
 struct irq_chip_type *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_1(VAR_12->dev, "gpio-mxc", 1, VAR_13,
      VAR_12->base, VAR_8);
 if (!VAR_14)
  return -VAR_0;
 VAR_14->private = VAR_12;

 VAR_15 = VAR_14->chip_types;
 VAR_15->chip.irq_ack = VAR_9;
 VAR_15->chip.irq_mask = VAR_10;
 VAR_15->chip.irq_unmask = VAR_11;
 VAR_15->chip.irq_set_type = VAR_6;
 VAR_15->chip.irq_set_wake = VAR_7;
 VAR_15->chip.flags = VAR_3;
 VAR_15->regs.ack = VAR_2;
 VAR_15->regs.mask = VAR_1;

 VAR_16 = FUNC_2(VAR_12->dev, VAR_14, FUNC_0(32),
      VAR_4,
      VAR_5, 0);

 return VAR_16;
}
