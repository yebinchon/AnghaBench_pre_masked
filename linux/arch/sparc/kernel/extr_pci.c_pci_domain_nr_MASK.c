
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_pbm_info {int index; } ;
struct pci_bus {struct pci_pbm_info* sysdata; } ;


 int VAR_0 ;

int FUNC_0(struct pci_bus *VAR_1)
{
 struct pci_pbm_info *VAR_2 = VAR_1->sysdata;
 int VAR_3;

 if (!VAR_2) {
  VAR_3 = -VAR_0;
 } else {
  VAR_3 = VAR_2->index;
 }

 return VAR_3;
}
