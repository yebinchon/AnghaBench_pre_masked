
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_root_info {int node; } ;


 int VAR_0 ;
 struct pci_root_info* FUNC_0 (int) ;

int FUNC_1(int VAR_1)
{
 struct pci_root_info *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2)
  return VAR_0;

 return VAR_2->node;
}
