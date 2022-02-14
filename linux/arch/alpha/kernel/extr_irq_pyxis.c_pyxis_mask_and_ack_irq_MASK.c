
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long* vulp ;
struct irq_data {int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct irq_data *VAR_3)
{
 unsigned long VAR_4 = 1UL << (VAR_3->irq - 16);
 unsigned long VAR_5 = VAR_2 &= ~VAR_4;


 *(vulp)VAR_0 = VAR_5;
 FUNC_1();

 *(vulp)VAR_1 = VAR_4;
 FUNC_0();

 *(vulp)VAR_0;
}
