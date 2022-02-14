
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_source_info {int dummy; } ;
struct irq_service {struct irq_source_info const* info; } ;
typedef enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;


 int VAR_0 ;
 int VAR_1 ;

const struct irq_source_info *FUNC_0(
 struct irq_service *VAR_2,
 enum dc_irq_source VAR_3)
{
 if (VAR_3 >= VAR_0 || VAR_3 < VAR_1)
  return ((void*)0);

 return &VAR_2->info[VAR_3];
}
