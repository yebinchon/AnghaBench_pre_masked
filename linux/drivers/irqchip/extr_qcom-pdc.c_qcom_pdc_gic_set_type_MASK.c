
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
typedef enum pdc_irq_config_bits { ____Placeholder_pdc_irq_config_bits } pdc_irq_config_bits ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct irq_data*,unsigned int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_7, unsigned int VAR_8)
{
 int VAR_9 = VAR_7->hwirq;
 enum pdc_irq_config_bits VAR_10;

 switch (VAR_8) {
 case 130:
  VAR_10 = VAR_4;
  break;
 case 131:
  VAR_10 = VAR_3;
  VAR_8 = 130;
  break;
 case 132:
  VAR_10 = VAR_2;
  VAR_8 = 130;
  break;
 case 129:
  VAR_10 = VAR_5;
  break;
 case 128:
  VAR_10 = VAR_6;
  VAR_8 = 129;
  break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }

 FUNC_2(VAR_1, VAR_9, VAR_10);

 return FUNC_1(VAR_7, VAR_8);
}
