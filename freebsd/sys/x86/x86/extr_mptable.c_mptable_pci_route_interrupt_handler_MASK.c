
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct pci_route_interrupt_args {scalar_t__ bus; int irq; int vector; } ;
typedef TYPE_1__* int_entry_ptr ;
struct TYPE_2__ {scalar_t__ src_bus_id; int src_bus_irq; size_t dst_apic_id; int dst_apic_int; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int ** VAR_1 ;

__attribute__((used)) static void
FUNC_2(u_char *VAR_2, void *VAR_3)
{
 struct pci_route_interrupt_args *VAR_4;
 int_entry_ptr VAR_5;
 int VAR_6;

 if (*VAR_2 != VAR_0)
  return;
 VAR_5 = (int_entry_ptr)VAR_2;
 VAR_4 = (struct pci_route_interrupt_args *)VAR_3;
 if (VAR_5->src_bus_id != VAR_4->bus || VAR_5->src_bus_irq != VAR_4->irq)
  return;


 FUNC_0(VAR_1[VAR_5->dst_apic_id] != ((void*)0),
     ("No I/O APIC %d to route interrupt to", VAR_5->dst_apic_id));







 VAR_6 = FUNC_1(VAR_1[VAR_5->dst_apic_id],
     VAR_5->dst_apic_int);
 if (VAR_4->vector == VAR_6)
  return;
 FUNC_0(VAR_4->vector == -1,
     ("Multiple IRQs for PCI interrupt %d.%d.INT%c: %d and %d\n",
     VAR_4->bus, VAR_4->irq >> 2, 'A' + (VAR_4->irq & 0x3), VAR_4->vector,
     VAR_6));
 VAR_4->vector = VAR_6;
}
