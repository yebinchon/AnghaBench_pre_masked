
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_2, VAR_4);
 FUNC_1(VAR_1, VAR_3->hwirq, 1);
 FUNC_0(VAR_0, VAR_3->hwirq);
 FUNC_3(&VAR_2, VAR_4);
}
