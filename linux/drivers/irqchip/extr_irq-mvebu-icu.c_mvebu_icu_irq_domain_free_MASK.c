
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_icu_irq_data {int dummy; } ;
struct irq_domain {int dummy; } ;
struct irq_data {struct mvebu_icu_irq_data* chip_data; } ;


 struct irq_data* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct mvebu_icu_irq_data*) ;
 int FUNC_2 (struct irq_domain*,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct irq_domain *VAR_0, unsigned int VAR_1,
     unsigned int VAR_2)
{
 struct irq_data *VAR_3 = FUNC_0(VAR_1);
 struct mvebu_icu_irq_data *VAR_4 = VAR_3->chip_data;

 FUNC_1(VAR_4);

 FUNC_2(VAR_0, VAR_1, VAR_2);
}
