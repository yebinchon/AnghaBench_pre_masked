
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uv_IO_APIC_route_entry {int mask; } ;
struct irq_domain {int dummy; } ;
struct irq_data {int chip_data; } ;


 int FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct irq_domain *VAR_0,
     struct irq_data *VAR_1)
{
 unsigned long VAR_2;
 struct uv_IO_APIC_route_entry *VAR_3;

 VAR_2 = 0;
 VAR_3 = (struct uv_IO_APIC_route_entry *)&VAR_2;
 VAR_3->mask = 1;
 FUNC_1(FUNC_0(VAR_1), VAR_1->chip_data);
}
