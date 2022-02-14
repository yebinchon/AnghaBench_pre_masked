
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned short,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_3)
{
 unsigned short VAR_4 = 1 << (VAR_3->irq - VAR_1);
 FUNC_0(VAR_4, VAR_2 + VAR_0);
 FUNC_1();
}
