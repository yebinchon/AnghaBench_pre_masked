
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_1->irq);

 FUNC_0(0x1 << VAR_2, VAR_0);
}
