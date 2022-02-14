
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {unsigned int hwirq; struct irq_domain* domain; } ;
struct irq_chip_generic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_data*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct irq_chip_generic*) ;
 int FUNC_2 (struct irq_chip_generic*) ;
 struct irq_chip_generic* FUNC_3 (struct irq_domain*,int ) ;
 unsigned int FUNC_4 (struct irq_chip_generic*,int ) ;
 int FUNC_5 (struct irq_chip_generic*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_2, unsigned VAR_3)
{
 struct irq_domain *VAR_4 = VAR_2->domain;
 struct irq_chip_generic *VAR_5 = FUNC_3(VAR_4, 0);
 unsigned int VAR_6;
 int VAR_7;

 FUNC_1(VAR_5);
 FUNC_5(VAR_5, VAR_2->hwirq, VAR_1);
 VAR_6 = FUNC_4(VAR_5, VAR_0);
 VAR_7 = FUNC_0(VAR_2, VAR_3, &VAR_6);
 if (!VAR_7)
  FUNC_5(VAR_5, VAR_6, VAR_0);
 FUNC_2(VAR_5);

 return VAR_7;
}
