
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_enable; int irq_disable; int irq_set_type; int irq_unmask; int irq_mask; } ;
struct irq_chip_type {TYPE_1__ chip; } ;
struct irq_chip_generic {struct irq_chip_type* chip_types; struct ioh_gpio* private; } ;
struct ioh_gpio {int dev; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct irq_chip_generic* FUNC_1 (int ,char*,int,unsigned int,int ,int ) ;
 int FUNC_2 (int ,struct irq_chip_generic*,int ,int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_3(struct ioh_gpio *VAR_10,
           unsigned int VAR_11,
           unsigned int VAR_12)
{
 struct irq_chip_generic *VAR_13;
 struct irq_chip_type *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_1(VAR_10->dev, "ioh_gpio", 1, VAR_11,
      VAR_10->base, VAR_4);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->private = VAR_10;
 VAR_14 = VAR_13->chip_types;

 VAR_14->chip.irq_mask = VAR_7;
 VAR_14->chip.irq_unmask = VAR_9;
 VAR_14->chip.irq_set_type = VAR_8;
 VAR_14->chip.irq_disable = VAR_5;
 VAR_14->chip.irq_enable = VAR_6;

 VAR_15 = FUNC_2(VAR_10->dev, VAR_13, FUNC_0(VAR_12),
      VAR_1,
      VAR_3 | VAR_2, 0);

 return VAR_15;
}
