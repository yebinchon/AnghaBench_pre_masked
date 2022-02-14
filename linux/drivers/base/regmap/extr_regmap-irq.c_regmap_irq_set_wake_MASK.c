
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_irq_chip_data {int wake_count; int * wake_buf; struct regmap* map; } ;
struct regmap_irq {size_t reg_offset; int mask; } ;
struct regmap {size_t reg_stride; } ;
struct irq_data {int hwirq; } ;


 struct regmap_irq_chip_data* FUNC_0 (struct irq_data*) ;
 struct regmap_irq* FUNC_1 (struct regmap_irq_chip_data*,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct regmap_irq_chip_data *VAR_2 = FUNC_0(VAR_0);
 struct regmap *VAR_3 = VAR_2->map;
 const struct regmap_irq *VAR_4 = FUNC_1(VAR_2, VAR_0->hwirq);

 if (VAR_1) {
  if (VAR_2->wake_buf)
   VAR_2->wake_buf[VAR_4->reg_offset / VAR_3->reg_stride]
    &= ~VAR_4->mask;
  VAR_2->wake_count++;
 } else {
  if (VAR_2->wake_buf)
   VAR_2->wake_buf[VAR_4->reg_offset / VAR_3->reg_stride]
    |= VAR_4->mask;
  VAR_2->wake_count--;
 }

 return 0;
}
