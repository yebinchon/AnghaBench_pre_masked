
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct irq_data {int mask; } ;
struct TYPE_2__ {int enable; int ack; } ;
struct irq_chip_type {int * mask_cache; TYPE_1__ regs; } ;
struct irq_chip_generic {struct regmap* private; } ;


 struct irq_chip_type* FUNC_0 (struct irq_data*) ;
 struct irq_chip_generic* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_chip_generic*) ;
 int FUNC_3 (struct irq_chip_generic*) ;
 int FUNC_4 (struct regmap*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0)
{
 struct irq_chip_generic *VAR_1 = FUNC_1(VAR_0);
 struct irq_chip_type *VAR_2 = FUNC_0(VAR_0);
 struct regmap *VAR_3 = VAR_1->private;
 u32 VAR_4 = VAR_0->mask;

 FUNC_2(VAR_1);
 FUNC_4(VAR_3, VAR_2->regs.ack, VAR_4);
 FUNC_4(VAR_3, VAR_2->regs.enable, VAR_4);
 *VAR_2->mask_cache |= VAR_4;
 FUNC_3(VAR_1);
}
