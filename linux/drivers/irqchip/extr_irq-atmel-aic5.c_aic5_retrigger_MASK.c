
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {int hwirq; struct irq_domain* domain; } ;
struct irq_chip_generic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_chip_generic*) ;
 int FUNC_1 (struct irq_chip_generic*) ;
 struct irq_chip_generic* FUNC_2 (struct irq_domain*,int ) ;
 int FUNC_3 (struct irq_chip_generic*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_2)
{
 struct irq_domain *VAR_3 = VAR_2->domain;
 struct irq_chip_generic *VAR_4 = FUNC_2(VAR_3, 0);


 FUNC_0(VAR_4);
 FUNC_3(VAR_4, VAR_2->hwirq, VAR_1);
 FUNC_3(VAR_4, 1, VAR_0);
 FUNC_1(VAR_4);

 return 0;
}
