
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {struct apic_chip_data* chip_data; struct irq_data* parent_data; } ;
struct apic_chip_data {int dummy; } ;



__attribute__((used)) static struct apic_chip_data *FUNC_0(struct irq_data *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);

 while (VAR_0->parent_data)
  VAR_0 = VAR_0->parent_data;

 return VAR_0->chip_data;
}
