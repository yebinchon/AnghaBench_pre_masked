
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

inline void
FUNC_3(struct irq_data *VAR_2)
{
 FUNC_1(&VAR_1);
 FUNC_0(VAR_2->irq, VAR_0 &= ~(1 << VAR_2->irq));
 FUNC_2(&VAR_1);
}
