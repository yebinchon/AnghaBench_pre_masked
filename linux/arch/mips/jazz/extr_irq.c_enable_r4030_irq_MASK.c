
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_3)
{
 unsigned int VAR_4 = 1 << (VAR_3->irq - VAR_1);
 unsigned long VAR_5;

 FUNC_2(&VAR_2, VAR_5);
 VAR_4 |= FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_4);
 FUNC_3(&VAR_2, VAR_5);
}
