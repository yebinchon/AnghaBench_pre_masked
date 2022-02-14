
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int* VAR_0 ;
 int FUNC_0 (int*) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_1)
{
 int VAR_2 = 140 - VAR_1->irq + 1;
 if (VAR_0) {
  *VAR_0 &= ~(1 << VAR_2);
  FUNC_0(VAR_0);
  VAR_0 = ((void*)0);
 }
}
