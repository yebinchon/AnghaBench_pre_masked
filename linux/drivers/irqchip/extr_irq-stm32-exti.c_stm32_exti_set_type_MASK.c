
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;




__attribute__((used)) static int FUNC_1(struct irq_data *VAR_2,
          unsigned int VAR_3, u32 *VAR_4, u32 *VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_2->hwirq % VAR_1);

 switch (VAR_3) {
 case 128:
  *VAR_4 |= VAR_6;
  *VAR_5 &= ~VAR_6;
  break;
 case 129:
  *VAR_4 &= ~VAR_6;
  *VAR_5 |= VAR_6;
  break;
 case 130:
  *VAR_4 |= VAR_6;
  *VAR_5 |= VAR_6;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
