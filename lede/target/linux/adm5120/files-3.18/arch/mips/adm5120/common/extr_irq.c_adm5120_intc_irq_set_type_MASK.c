
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;



 unsigned int VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_4->irq;
 unsigned int VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;

 VAR_7 = VAR_5 & (VAR_3);
 switch (VAR_7) {
 case 128:
 case 130:
  break;
 case 129:
  switch (VAR_6) {
  case 132:
  case 131:
   break;
  default:
   VAR_9 = -VAR_1;
   break;
  }
  break;
 default:
  VAR_9 = -VAR_1;
  break;
 }

 if (VAR_9)
  return VAR_9;

 switch (VAR_6) {
 case 132:
 case 131:
  VAR_8 = FUNC_0(VAR_2);
  if (VAR_7 == 129)
   VAR_8 |= (1 << (VAR_6 - VAR_0));
  else
   VAR_8 &= ~(1 << (VAR_6 - VAR_0));

  FUNC_1(VAR_2, VAR_8);
  break;
 }

 return 0;
}
