
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct irq_data {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;


 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_4, unsigned int VAR_5)
{
 int VAR_6 = FUNC_2(VAR_4->irq);
 uint32_t VAR_7;

 if (VAR_6 >= 0 && VAR_6 < 128)
  return FUNC_0(VAR_6, VAR_5);

 if (VAR_4->irq == VAR_1)
  return FUNC_1(VAR_5);

 switch (VAR_4->irq) {
 case 129:
  VAR_7 = VAR_3;
  break;
 case 128:
  VAR_7 = 1u << 26;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_5)
  VAR_2 |= VAR_7;
 else
  VAR_2 &=~VAR_7;

 return 0;
}
