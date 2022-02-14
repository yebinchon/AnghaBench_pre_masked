
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_alloc_info {int ioapic_node; scalar_t__ ioapic_valid; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct irq_alloc_info *VAR_1)
{
 return (VAR_1 && VAR_1->ioapic_valid) ? VAR_1->ioapic_node : VAR_0;
}
