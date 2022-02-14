
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; int end; int start; } ;
struct pci_dev {int bus; } ;
struct pci_bus_region {int end; int start; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct pci_bus_region*,struct resource*) ;

void FUNC_1(const struct pci_dev *VAR_1, int VAR_2,
     const struct resource *VAR_3,
     resource_size_t *VAR_4, resource_size_t *VAR_5)
{
 struct pci_bus_region VAR_6;

 if (VAR_3->flags & VAR_0) {
  FUNC_0(VAR_1->bus, &VAR_6,
     (struct resource *) VAR_3);
  *VAR_4 = VAR_6.start;
  *VAR_5 = VAR_6.end;
  return;
 }
 *VAR_4 = VAR_3->start;
 *VAR_5 = VAR_3->end;
}
