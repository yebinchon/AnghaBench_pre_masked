
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_aidet_priv {int dummy; } ;
struct irq_data {int hwirq; struct uniphier_aidet_priv* chip_data; } ;


 int VAR_0 ;




 int FUNC_0 (struct irq_data*,unsigned int) ;
 int FUNC_1 (struct uniphier_aidet_priv*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_1, unsigned int VAR_2)
{
 struct uniphier_aidet_priv *VAR_3 = VAR_1->chip_data;
 unsigned int VAR_4;


 switch (VAR_2) {
 case 130:
 case 129:
  VAR_4 = 0;
  break;
 case 131:
  VAR_4 = 1;
  VAR_2 = 130;
  break;
 case 128:
  VAR_4 = 1;
  VAR_2 = 129;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_3, VAR_1->hwirq, VAR_4);

 return FUNC_0(VAR_1, VAR_2);
}
