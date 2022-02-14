
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_pbm_info {scalar_t__ portid; struct pci_pbm_info* next; } ;


 struct pci_pbm_info* VAR_0 ;

__attribute__((used)) static struct pci_pbm_info *FUNC_0(u32 VAR_1)
{
 struct pci_pbm_info *VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->portid == VAR_1)
   return VAR_2;
 }
 return ((void*)0);
}
