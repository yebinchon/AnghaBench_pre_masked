
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_irq_type {unsigned int types_supported; int type_reg_offset; int type_reg_mask; int type_falling_val; int type_rising_val; int type_level_low_val; int type_level_high_val; } ;
struct regmap_irq_chip_data {int* type_buf; struct regmap* map; } ;
struct regmap_irq {struct regmap_irq_type type; } ;
struct regmap {int reg_stride; } ;
struct irq_data {int hwirq; } ;


 int VAR_0 ;





 struct regmap_irq_chip_data* FUNC_0 (struct irq_data*) ;
 struct regmap_irq* FUNC_1 (struct regmap_irq_chip_data*,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_1, unsigned int VAR_2)
{
 struct regmap_irq_chip_data *VAR_3 = FUNC_0(VAR_1);
 struct regmap *VAR_4 = VAR_3->map;
 const struct regmap_irq *VAR_5 = FUNC_1(VAR_3, VAR_1->hwirq);
 int VAR_6;
 const struct regmap_irq_type *VAR_7 = &VAR_5->type;

 if ((VAR_7->types_supported & VAR_2) != VAR_2)
  return 0;

 VAR_6 = VAR_7->type_reg_offset / VAR_4->reg_stride;

 if (VAR_7->type_reg_mask)
  VAR_3->type_buf[VAR_6] &= ~VAR_7->type_reg_mask;
 else
  VAR_3->type_buf[VAR_6] &= ~(VAR_7->type_falling_val |
          VAR_7->type_rising_val |
          VAR_7->type_level_low_val |
          VAR_7->type_level_high_val);
 switch (VAR_2) {
 case 131:
  VAR_3->type_buf[VAR_6] |= VAR_7->type_falling_val;
  break;

 case 130:
  VAR_3->type_buf[VAR_6] |= VAR_7->type_rising_val;
  break;

 case 132:
  VAR_3->type_buf[VAR_6] |= (VAR_7->type_falling_val |
     VAR_7->type_rising_val);
  break;

 case 129:
  VAR_3->type_buf[VAR_6] |= VAR_7->type_level_high_val;
  break;

 case 128:
  VAR_3->type_buf[VAR_6] |= VAR_7->type_level_low_val;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
