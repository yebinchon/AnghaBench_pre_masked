
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_intr_irq_domain {unsigned int type; } ;
struct irq_fwspec {int param_count; int * param; } ;
struct irq_domain {struct ti_sci_intr_irq_domain* host_data; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_1,
         struct irq_fwspec *VAR_2,
         unsigned long *VAR_3,
         unsigned int *VAR_4)
{
 struct ti_sci_intr_irq_domain *VAR_5 = VAR_1->host_data;

 if (VAR_2->param_count != 2)
  return -VAR_0;

 *VAR_3 = FUNC_0(VAR_2->param[0], VAR_2->param[1]);
 *VAR_4 = VAR_5->type;

 return 0;
}
