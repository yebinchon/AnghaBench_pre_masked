
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int end; unsigned long flags; } ;
struct irq_fwspec {int fwnode; } ;
struct irq_domain {int dummy; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int,struct irq_fwspec*,unsigned long*) ;
 int FUNC_1 (struct irq_fwspec*) ;
 struct irq_domain* FUNC_2 (int ,int ) ;

int FUNC_3(acpi_handle VAR_3, unsigned int VAR_4, struct resource *VAR_5)
{
 struct irq_fwspec VAR_6;
 struct irq_domain *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_3, VAR_4, &VAR_6, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_7 = FUNC_2(VAR_6.fwnode, VAR_0);
 if (!VAR_7)
  return -VAR_2;

 VAR_9 = FUNC_1(&VAR_6);
 if (VAR_9 <= 0)
  return -VAR_1;

 VAR_5->start = VAR_9;
 VAR_5->end = VAR_9;
 VAR_5->flags = VAR_8;

 return 0;
}
