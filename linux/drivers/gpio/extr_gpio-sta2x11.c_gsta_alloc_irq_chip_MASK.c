
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_enable; int irq_disable; int irq_set_type; } ;
struct irq_chip_type {int handler; TYPE_1__ chip; } ;
struct irq_chip_generic {scalar_t__ irq_base; scalar_t__ irq_cnt; struct irq_chip_type* chip_types; struct gsta_gpio* private; } ;
struct gsta_gpio {int irq_base; int dev; int reg_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct irq_chip_generic* FUNC_0 (int ,int ,int,int,int ,int ) ;
 int FUNC_1 (int ,struct irq_chip_generic*,int ,int ,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,TYPE_1__*,int ) ;
 int FUNC_4 (int,struct irq_chip_generic*) ;

__attribute__((used)) static int FUNC_5(struct gsta_gpio *VAR_9)
{
 struct irq_chip_generic *VAR_10;
 struct irq_chip_type *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_0(VAR_9->dev, VAR_4, 1,
      VAR_9->irq_base,
      VAR_9->reg_base, VAR_8);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->private = VAR_9;
 VAR_11 = VAR_10->chip_types;

 VAR_11->chip.irq_set_type = VAR_7;
 VAR_11->chip.irq_disable = VAR_5;
 VAR_11->chip.irq_enable = VAR_6;


 VAR_12 = FUNC_1(VAR_9->dev, VAR_10,
      0 ,
      0, VAR_3 | VAR_2, 0);
 if (VAR_12)
  return VAR_12;


 {
  struct irq_chip_type *VAR_13 = VAR_10->chip_types;
  int VAR_14, VAR_15;
  for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
   VAR_14 = VAR_9->irq_base + VAR_15;
   FUNC_3(VAR_14, &VAR_13->chip, VAR_13->handler);
   FUNC_4(VAR_14, VAR_10);
   FUNC_2(VAR_14, VAR_3 | VAR_2);
  }
  VAR_10->irq_cnt = VAR_14 - VAR_10->irq_base;
 }

 return 0;
}
