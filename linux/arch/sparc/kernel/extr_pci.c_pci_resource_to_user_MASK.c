
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pci_dev {int bus; } ;
struct pci_bus_region {int end; int start; } ;
typedef int resource_size_t ;


 int FUNC_0 (int ,struct pci_bus_region*,struct resource*) ;

void FUNC_1(const struct pci_dev *VAR_0, int VAR_1,
     const struct resource *VAR_2, resource_size_t *VAR_3,
     resource_size_t *VAR_4)
{
 struct pci_bus_region VAR_5;
 FUNC_0(VAR_0->bus, &VAR_5, (struct resource *) VAR_2);
 *VAR_3 = VAR_5.start;
 *VAR_4 = VAR_5.end;
}
