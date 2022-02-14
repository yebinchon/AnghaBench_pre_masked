
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned short,int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_3)
{
 unsigned int VAR_4 = VAR_3->irq;
 unsigned short VAR_5;
 unsigned short VAR_6 = (0x0001 << 4 * (3 - (130 - VAR_4)));
 unsigned short VAR_7,VAR_8;


 VAR_5 = FUNC_0(VAR_0);
 VAR_5 |= VAR_6;
 FUNC_1(VAR_5, VAR_0);


 VAR_7 = FUNC_0(VAR_1);
 VAR_8 = FUNC_0(VAR_2);

 switch (VAR_4) {
 case 130:
  VAR_7 &= ~0x0010;
  break;
 case 129:
  VAR_7 &= ~0x000f;
  break;
 case 128:
  VAR_7 &= ~0x0f00;
  VAR_8 &= ~0x00ff;
  break;
 }
 FUNC_1(VAR_7, VAR_1);
 FUNC_1(VAR_8, VAR_2);
}
