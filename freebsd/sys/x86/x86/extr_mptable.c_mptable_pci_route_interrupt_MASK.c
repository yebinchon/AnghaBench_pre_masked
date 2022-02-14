
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_route_interrupt_args {int irq; int vector; scalar_t__ bus; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,int,char,...) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct pci_route_interrupt_args*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(device_t VAR_4, device_t VAR_5, int VAR_6)
{
 struct pci_route_interrupt_args VAR_7;
 int VAR_8;


 VAR_6--;
 FUNC_0(VAR_3 != -1, ("do not know how to route PCI interrupts"));
 VAR_7.bus = FUNC_3(VAR_5) + VAR_3;
 VAR_8 = FUNC_4(VAR_5);







 VAR_7.irq = VAR_8 << 2 | VAR_6;
 VAR_7.vector = -1;
 FUNC_2(VAR_2, &VAR_7);
 if (VAR_7.vector < 0) {
  FUNC_1(VAR_4, "unable to route slot %d INT%c\n", VAR_8,
      'A' + VAR_6);
  return (VAR_0);
 }
 if (VAR_1)
  FUNC_1(VAR_4, "slot %d INT%c routed to irq %d\n", VAR_8,
      'A' + VAR_6, VAR_7.vector);
 return (VAR_7.vector);
}
