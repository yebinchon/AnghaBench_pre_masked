
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct irq_alloc_info {scalar_t__ mask; } ;


 int FUNC_0 (struct irq_data*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;

__attribute__((used)) static int
FUNC_4(struct irq_data *VAR_0, struct irq_alloc_info *VAR_1)
{
 if (FUNC_1(VAR_0))
  return FUNC_3(VAR_0);
 if (VAR_1->mask)
  return FUNC_0(VAR_0, VAR_1->mask);




 return FUNC_2(VAR_0);
}
