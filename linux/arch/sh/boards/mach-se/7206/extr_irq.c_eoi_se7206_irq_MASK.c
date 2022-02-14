
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 int VAR_0 ;
 int VAR_1 ;



 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned short,int ) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_2)
{
 unsigned short VAR_3,VAR_4;
 unsigned int VAR_5 = VAR_2->irq;

 if (!FUNC_3(VAR_2) && !FUNC_4(VAR_2))
  FUNC_2(VAR_2);

 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = FUNC_0(VAR_1);

 switch (VAR_5) {
 case 130:
  VAR_3 &= ~0x0010;
  break;
 case 129:
  VAR_3 &= ~0x000f;
  break;
 case 128:
  VAR_3 &= ~0x0f00;
  VAR_4 &= ~0x00ff;
  break;
 }
 FUNC_1(VAR_3, VAR_0);
 FUNC_1(VAR_4, VAR_1);
}
