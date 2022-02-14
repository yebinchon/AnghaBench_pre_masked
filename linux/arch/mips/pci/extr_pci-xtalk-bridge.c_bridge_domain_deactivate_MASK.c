
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {int hwirq; struct bridge_irq_chip_data* chip_data; } ;
struct bridge_irq_chip_data {int bc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct irq_domain *VAR_2,
         struct irq_data *VAR_3)
{
 struct bridge_irq_chip_data *VAR_4 = VAR_3->chip_data;

 FUNC_0(VAR_4->bc, VAR_0, (1 << VAR_3->hwirq));
 FUNC_1(VAR_4->bc, VAR_1);
}
