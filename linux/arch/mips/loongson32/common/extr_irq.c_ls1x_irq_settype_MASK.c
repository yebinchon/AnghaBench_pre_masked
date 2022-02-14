
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;






 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = (VAR_2->irq - VAR_1) & 0x1f;
 unsigned int VAR_5 = (VAR_2->irq - VAR_1) >> 5;

 switch (VAR_3) {
 case 130:
  FUNC_3(FUNC_2(FUNC_1(VAR_5))
   | (1 << VAR_4), FUNC_1(VAR_5));
  FUNC_3(FUNC_2(FUNC_0(VAR_5))
   & ~(1 << VAR_4), FUNC_0(VAR_5));
  break;
 case 129:
  FUNC_3(FUNC_2(FUNC_1(VAR_5))
   & ~(1 << VAR_4), FUNC_1(VAR_5));
  FUNC_3(FUNC_2(FUNC_0(VAR_5))
   & ~(1 << VAR_4), FUNC_0(VAR_5));
  break;
 case 131:
  FUNC_3(FUNC_2(FUNC_1(VAR_5))
   | (1 << VAR_4), FUNC_1(VAR_5));
  FUNC_3(FUNC_2(FUNC_0(VAR_5))
   | (1 << VAR_4), FUNC_0(VAR_5));
  break;
 case 132:
  FUNC_3(FUNC_2(FUNC_1(VAR_5))
   & ~(1 << VAR_4), FUNC_1(VAR_5));
  FUNC_3(FUNC_2(FUNC_0(VAR_5))
   | (1 << VAR_4), FUNC_0(VAR_5));
  break;
 case 133:
  FUNC_3(FUNC_2(FUNC_1(VAR_5))
   & ~(1 << VAR_4), FUNC_1(VAR_5));
  FUNC_3(FUNC_2(FUNC_0(VAR_5))
   | (1 << VAR_4), FUNC_0(VAR_5));
  break;
 case 128:
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
