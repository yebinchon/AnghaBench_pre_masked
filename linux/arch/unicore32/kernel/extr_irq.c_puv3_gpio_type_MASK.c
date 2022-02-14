
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int) ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_9, unsigned int VAR_10)
{
 unsigned int VAR_11;

 if (VAR_9->irq < VAR_5)
  VAR_11 = 1 << VAR_9->irq;
 else
  VAR_11 = FUNC_0(VAR_9->irq);

 if (VAR_10 == VAR_8) {
  if ((VAR_4 | VAR_2) & VAR_11)
   return 0;
  VAR_10 = VAR_7 | VAR_6;
 }

 if (VAR_10 & VAR_7)
  VAR_4 |= VAR_11;
 else
  VAR_4 &= ~VAR_11;
 if (VAR_10 & VAR_6)
  VAR_2 |= VAR_11;
 else
  VAR_2 &= ~VAR_11;

 FUNC_1(VAR_4 & VAR_3, VAR_1);
 FUNC_1(VAR_2 & VAR_3, VAR_0);

 return 0;
}
