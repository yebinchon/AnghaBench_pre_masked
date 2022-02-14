
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fwspec {int param_count; scalar_t__* param; int fwnode; } ;
struct irq_domain {struct exiu_irq_data* host_data; } ;
struct exiu_irq_data {unsigned long spi_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_3,
     struct irq_fwspec *VAR_4,
     unsigned long *VAR_5,
     unsigned int *VAR_6)
{
 struct exiu_irq_data *VAR_7 = VAR_3->host_data;

 if (FUNC_0(VAR_4->fwnode)) {
  if (VAR_4->param_count != 3)
   return -VAR_0;

  if (VAR_4->param[0] != VAR_1)
   return -VAR_0;

  *VAR_5 = VAR_4->param[1] - VAR_7->spi_base;
  *VAR_6 = VAR_4->param[2] & VAR_2;
 } else {
  if (VAR_4->param_count != 2)
   return -VAR_0;
  *VAR_5 = VAR_4->param[0];
  *VAR_6 = VAR_4->param[2] & VAR_2;
 }
 return 0;
}
