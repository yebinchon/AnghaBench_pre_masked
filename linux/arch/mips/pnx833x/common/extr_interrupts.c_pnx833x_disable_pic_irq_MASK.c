
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4 = VAR_2->irq - VAR_0;

 FUNC_1(&VAR_1, VAR_3);
 FUNC_0(VAR_4);
 FUNC_2(&VAR_1, VAR_3);
}
