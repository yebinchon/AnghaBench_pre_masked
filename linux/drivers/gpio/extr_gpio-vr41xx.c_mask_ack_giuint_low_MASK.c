
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_2->irq);
 FUNC_1(VAR_0, 1 << VAR_3);
 FUNC_2(VAR_1, 1 << VAR_3);
}
