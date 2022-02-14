
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {size_t hwirq; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct irq_data *VAR_3, unsigned int VAR_4)
{
 switch (VAR_4 & VAR_1) {
 case 129:
  VAR_2[VAR_3->hwirq] = 0;
  break;
 case 128:
  VAR_2[VAR_3->hwirq] = 1;
  break;
 case 130:
  VAR_2[VAR_3->hwirq] = 2;
  break;
 case 131:
  VAR_2[VAR_3->hwirq] = 3;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
