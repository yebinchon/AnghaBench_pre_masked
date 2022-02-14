
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned short,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_4)
{
 unsigned short VAR_5 = 1 << (VAR_4->irq - VAR_2);
 FUNC_0(VAR_5, VAR_3 + VAR_1);
 FUNC_0(VAR_5, VAR_3 + VAR_0);
 FUNC_1();
}
