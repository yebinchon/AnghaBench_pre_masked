
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap_irq_chip_data {unsigned int* type_buf; int clear_status; unsigned int* mask_buf; TYPE_2__* chip; struct regmap* map; } ;
struct TYPE_3__ {unsigned int type_falling_val; unsigned int type_rising_val; } ;
struct regmap_irq {size_t reg_offset; unsigned int mask; TYPE_1__ type; } ;
struct regmap {size_t reg_stride; } ;
struct irq_data {int hwirq; } ;
struct TYPE_4__ {scalar_t__ clear_on_unmask; scalar_t__ type_in_mask; } ;


 struct regmap_irq_chip_data* FUNC_0 (struct irq_data*) ;
 struct regmap_irq* FUNC_1 (struct regmap_irq_chip_data*,int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct regmap_irq_chip_data *VAR_1 = FUNC_0(VAR_0);
 struct regmap *VAR_2 = VAR_1->map;
 const struct regmap_irq *VAR_3 = FUNC_1(VAR_1, VAR_0->hwirq);
 unsigned int VAR_4, VAR_5;

 VAR_5 = VAR_3->type.type_falling_val | VAR_3->type.type_rising_val;
 if (VAR_1->chip->type_in_mask && VAR_5)
  VAR_4 = VAR_1->type_buf[VAR_3->reg_offset / VAR_2->reg_stride];
 else
  VAR_4 = VAR_3->mask;

 if (VAR_1->chip->clear_on_unmask)
  VAR_1->clear_status = 1;

 VAR_1->mask_buf[VAR_3->reg_offset / VAR_2->reg_stride] &= ~VAR_4;
}
