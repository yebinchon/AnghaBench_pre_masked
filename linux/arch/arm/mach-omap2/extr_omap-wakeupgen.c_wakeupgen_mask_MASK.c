
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {size_t hwirq; } ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct irq_data*) ;
 int * VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_1, VAR_3);
 FUNC_0(VAR_2->hwirq, VAR_0[VAR_2->hwirq]);
 FUNC_3(&VAR_1, VAR_3);
 FUNC_1(VAR_2);
}
