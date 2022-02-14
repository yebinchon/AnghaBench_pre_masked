
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {int chip_data; } ;


 int FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_0,
         struct irq_data *VAR_1, bool VAR_2)
{
 FUNC_1(FUNC_0(VAR_1), VAR_1->chip_data);
 return 0;
}
