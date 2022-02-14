
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {scalar_t__ hwirq; } ;


 unsigned int VAR_0 ;

 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct irq_data*,unsigned int) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_6, unsigned int VAR_7)
{
 bool VAR_8 = 0;

 switch (VAR_7) {
 case 128:
  VAR_7 &= ~VAR_3;
  VAR_7 |= VAR_2;
  VAR_8 = 1;
  break;
 case 129:
  VAR_7 &= ~VAR_0;
  VAR_7 |= VAR_1;
  VAR_8 = 1;
  break;
 default:
  break;
 }

 if (VAR_8 && VAR_6->hwirq != VAR_4 &&
     VAR_6->hwirq != VAR_5)
  FUNC_1("wakeupgen: irq%li polarity inverted in dts\n",
   VAR_6->hwirq);

 return FUNC_0(VAR_6, VAR_7);
}
