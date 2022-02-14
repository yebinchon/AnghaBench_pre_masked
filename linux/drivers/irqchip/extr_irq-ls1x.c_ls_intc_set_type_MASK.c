
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int mask; } ;
struct irq_chip_generic {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 struct irq_chip_generic* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*,unsigned int) ;
 int FUNC_2 (struct irq_data*,unsigned int) ;
 int FUNC_3 (struct irq_chip_generic*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_3, unsigned int VAR_4)
{
 struct irq_chip_generic *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6 = VAR_3->mask;

 switch (VAR_4) {
 case 129:
  FUNC_3(VAR_5, VAR_1, VAR_6, 0);
  FUNC_3(VAR_5, VAR_2, VAR_6, 1);
  break;
 case 128:
  FUNC_3(VAR_5, VAR_1, VAR_6, 0);
  FUNC_3(VAR_5, VAR_2, VAR_6, 0);
  break;
 case 130:
  FUNC_3(VAR_5, VAR_1, VAR_6, 1);
  FUNC_3(VAR_5, VAR_2, VAR_6, 1);
  break;
 case 131:
  FUNC_3(VAR_5, VAR_1, VAR_6, 1);
  FUNC_3(VAR_5, VAR_2, VAR_6, 0);
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_3, VAR_4);
 return FUNC_1(VAR_3, VAR_4);
}
