
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_driver {struct pci_device_id* id_table; } ;
struct pci_device_id {unsigned short vendor; unsigned short device; } ;
struct pci_dev {unsigned short vendor; unsigned short device; struct pci_driver* driver; } ;



__attribute__((used)) static bool FUNC_0(struct pci_dev *VAR_0, unsigned short VAR_1, unsigned short VAR_2)
{
 struct pci_driver *VAR_3 = VAR_0->driver;
 const struct pci_device_id *VAR_4;

 if (VAR_0->vendor == VAR_1 && VAR_0->device == VAR_2)
  return 1;

 for (VAR_4 = VAR_3 ? VAR_3->id_table : ((void*)0); VAR_4 && VAR_4->vendor; VAR_4++)
  if (VAR_4->vendor == VAR_1 && VAR_4->device == VAR_2)
   break;

 return VAR_4 && VAR_4->vendor;
}
