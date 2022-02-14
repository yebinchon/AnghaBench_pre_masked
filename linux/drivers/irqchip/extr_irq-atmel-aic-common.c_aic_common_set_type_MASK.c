
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int mask; } ;
struct irq_chip_generic {struct aic_chip_data* private; } ;
struct aic_chip_data {int ext_irqs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;




 struct irq_chip_generic* FUNC_0 (struct irq_data*) ;

int FUNC_1(struct irq_data *VAR_6, unsigned VAR_7, unsigned *VAR_8)
{
 struct irq_chip_generic *VAR_9 = FUNC_0(VAR_6);
 struct aic_chip_data *VAR_10 = VAR_9->private;
 unsigned VAR_11;

 switch (VAR_7) {
 case 129:
  VAR_11 = VAR_2;
  break;
 case 130:
  VAR_11 = VAR_4;
  break;
 case 128:
  if (!(VAR_6->mask & VAR_10->ext_irqs))
   return -VAR_5;

  VAR_11 = VAR_3;
  break;
 case 131:
  if (!(VAR_6->mask & VAR_10->ext_irqs))
   return -VAR_5;

  VAR_11 = VAR_1;
  break;
 default:
  return -VAR_5;
 }

 *VAR_8 &= ~VAR_0;
 *VAR_8 |= VAR_11;

 return 0;
}
