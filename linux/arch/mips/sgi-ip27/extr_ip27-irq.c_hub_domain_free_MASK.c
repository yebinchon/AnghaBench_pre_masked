
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {scalar_t__ chip_data; } ;


 struct irq_data* FUNC_0 (struct irq_domain*,unsigned int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct irq_domain *VAR_0,
       unsigned int VAR_1, unsigned int VAR_2)
{
 struct irq_data *VAR_3;

 if (VAR_2 > 1)
  return;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 && VAR_3->chip_data)
  FUNC_1(VAR_3->chip_data);
}
