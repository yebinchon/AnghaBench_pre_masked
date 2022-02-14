
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_2)
{
 unsigned int VAR_3 = VAR_2->irq;
 unsigned long VAR_4;
 unsigned long VAR_5;

 if (VAR_3 < 32) {
  VAR_4 = VAR_0;
  VAR_5 = 1 << VAR_3;
 } else {
  VAR_4 = VAR_1;
  VAR_5 = 1 << (VAR_3 - 32);
 }

 FUNC_0(VAR_5, VAR_4);
}
