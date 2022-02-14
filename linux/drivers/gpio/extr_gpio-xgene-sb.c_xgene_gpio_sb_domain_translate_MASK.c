
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_gpio_sb {scalar_t__ nirq; } ;
struct irq_fwspec {int param_count; scalar_t__* param; } ;
struct irq_domain {struct xgene_gpio_sb* host_data; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct irq_domain *VAR_1,
  struct irq_fwspec *VAR_2,
  unsigned long *VAR_3,
  unsigned int *VAR_4)
{
 struct xgene_gpio_sb *VAR_5 = VAR_1->host_data;

 if ((VAR_2->param_count != 2) ||
  (VAR_2->param[0] >= VAR_5->nirq))
  return -VAR_0;
 *VAR_3 = VAR_2->param[0];
 *VAR_4 = VAR_2->param[1];
 return 0;
}
