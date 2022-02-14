
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_alloc_info {int dummy; } ;


 int FUNC_0 (struct irq_alloc_info*,int ,int) ;

void FUNC_1(struct irq_alloc_info *VAR_0, struct irq_alloc_info *VAR_1)
{
 if (VAR_1)
  *VAR_0 = *VAR_1;
 else
  FUNC_0(VAR_0, 0, sizeof(*VAR_0));
}
