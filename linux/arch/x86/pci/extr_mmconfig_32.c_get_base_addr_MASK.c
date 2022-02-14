
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_mmcfg_region {int address; } ;


 struct pci_mmcfg_region* FUNC_0 (unsigned int,int) ;

__attribute__((used)) static u32 FUNC_1(unsigned int VAR_0, int VAR_1, unsigned VAR_2)
{
 struct pci_mmcfg_region *VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (VAR_3)
  return VAR_3->address;
 return 0;
}
