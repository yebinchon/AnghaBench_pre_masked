
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_irq_sub_irq_map {int num_regs; unsigned int* offset; } ;
struct regmap_irq_chip_data {unsigned int irq_reg_stride; int * status_buf; struct regmap* map; struct regmap_irq_chip* chip; } ;
struct regmap_irq_chip {scalar_t__ status_base; struct regmap_irq_sub_irq_map* sub_reg_offsets; } ;
struct regmap {unsigned int reg_stride; } ;


 int FUNC_0 (struct regmap*,scalar_t__,int *) ;

__attribute__((used)) static inline int FUNC_1(struct regmap_irq_chip_data *VAR_0,
        unsigned int VAR_1)
{
 const struct regmap_irq_chip *VAR_2 = VAR_0->chip;
 struct regmap *VAR_3 = VAR_0->map;
 struct regmap_irq_sub_irq_map *VAR_4;
 int VAR_5, VAR_6 = 0;

 if (!VAR_2->sub_reg_offsets) {

  VAR_6 = FUNC_0(VAR_3, VAR_2->status_base +
      (VAR_1 * VAR_3->reg_stride * VAR_0->irq_reg_stride),
       &VAR_0->status_buf[VAR_1]);
 } else {
  VAR_4 = &VAR_2->sub_reg_offsets[VAR_1];
  for (VAR_5 = 0; VAR_5 < VAR_4->num_regs; VAR_5++) {
   unsigned int VAR_7 = VAR_4->offset[VAR_5];

   VAR_6 = FUNC_0(VAR_3, VAR_2->status_base + VAR_7,
       &VAR_0->status_buf[VAR_7]);
   if (VAR_6)
    break;
  }
 }
 return VAR_6;
}
