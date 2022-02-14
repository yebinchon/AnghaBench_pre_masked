
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_pbm_info {int portid; struct pci_pbm_info* next; } ;


 struct pci_pbm_info* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;

__attribute__((used)) static struct pci_pbm_info *FUNC_1(u32 VAR_1, int VAR_2)
{
 struct pci_pbm_info *VAR_3;

 for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next) {
  if (FUNC_0(VAR_3->portid, VAR_1, VAR_2))
   return VAR_3;
 }
 return ((void*)0);
}
