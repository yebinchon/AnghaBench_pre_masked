
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_irq_chip_data {int * mask_buf; struct regmap* map; } ;
struct regmap_irq {size_t reg_offset; int mask; } ;
struct regmap {size_t reg_stride; } ;
struct irq_data {int hwirq; } ;


 struct regmap_irq_chip_data* FUNC_0 (struct irq_data*) ;
 struct regmap_irq* FUNC_1 (struct regmap_irq_chip_data*,int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct regmap_irq_chip_data *VAR_1 = FUNC_0(VAR_0);
 struct regmap *VAR_2 = VAR_1->map;
 const struct regmap_irq *VAR_3 = FUNC_1(VAR_1, VAR_0->hwirq);

 VAR_1->mask_buf[VAR_3->reg_offset / VAR_2->reg_stride] |= VAR_3->mask;
}
