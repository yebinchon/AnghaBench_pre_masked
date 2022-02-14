
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct irq_data {unsigned int irq; } ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_3->irq;
 u16 VAR_6, VAR_7;

 switch (VAR_4) {
 case 128:
  VAR_7 = 0x1;
  break;
 case 129:
  VAR_7 = 0x2;
  break;
 case 130:
  VAR_7 = 0x3;
  break;
 default:

  VAR_7 = 0;
  break;
 }

 if (VAR_7)
  FUNC_2(VAR_5, VAR_2);

 VAR_5 -= VAR_0;
 VAR_6 = FUNC_0(VAR_1);
 VAR_6 = (VAR_6 & ~(0x3 << (VAR_5 * 2))) | (VAR_7 << (VAR_5 * 2));
 FUNC_1(VAR_6, VAR_1);

 return 0;
}
