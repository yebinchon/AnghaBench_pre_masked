
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;






 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;

int FUNC_3(struct irq_data *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4 = 0;
 int VAR_5 = VAR_2->irq;


 switch (VAR_5) {
 case 129:
 case 128:
  VAR_4 = FUNC_0(4) | VAR_1;
  break;
 case 130:
  VAR_4 = FUNC_0(7);
  break;
 case 131:

  VAR_4 = FUNC_0(2);
  break;
 }
 if (VAR_3) {
  if (VAR_4) {
   VAR_4 |= FUNC_1(VAR_0);
   FUNC_2(VAR_4, VAR_0);
  }
 } else {
  if (VAR_4) {
   VAR_4 = ~VAR_4 & FUNC_1(VAR_0);
   FUNC_2(VAR_4, VAR_0);
  }
 }
 return 0;
}
