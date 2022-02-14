
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_2)
{
 int VAR_3 = VAR_2->irq - VAR_0;

 FUNC_2(FUNC_1(VAR_1) & ~(1 << VAR_3), VAR_1);
 FUNC_0();
}
