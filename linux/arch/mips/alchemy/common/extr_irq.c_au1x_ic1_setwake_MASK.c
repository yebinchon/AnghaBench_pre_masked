
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_3, unsigned int VAR_4)
{
 int VAR_5 = VAR_3->irq - VAR_0;
 unsigned long VAR_6, VAR_7;




 if ((VAR_5 < 0) || (VAR_5 > 7))
  return -VAR_2;

 FUNC_3(VAR_7);
 VAR_6 = FUNC_0(VAR_1);
 if (VAR_4)
  VAR_6 |= 1 << VAR_5;
 else
  VAR_6 &= ~(1 << VAR_5);
 FUNC_1(VAR_6, VAR_1);
 FUNC_2(VAR_7);

 return 0;
}
