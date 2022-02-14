
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plic_handler {scalar_t__ hart_base; } ;
struct irq_data {int hwirq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct plic_handler* FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_2)
{
 struct plic_handler *VAR_3 = FUNC_0(&VAR_1);

 FUNC_1(VAR_2->hwirq, VAR_3->hart_base + VAR_0);
}
