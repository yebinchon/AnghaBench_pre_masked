
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_bus*,unsigned int,int,int ) ;
 scalar_t__ FUNC_1 (struct pci_bus*,unsigned int,int,int) ;
 scalar_t__ FUNC_2 (struct pci_bus*,unsigned int,int,int ) ;

int
FUNC_3(struct pci_bus *VAR_1,
   unsigned int VAR_2,
   int VAR_3,
   int VAR_4,
   u32 VAR_5)
{
 if (VAR_4 == 1) {
  if (FUNC_0(VAR_1, VAR_2,
      VAR_3, (u8)(0xFF & VAR_5))) {
   return -1;
  }
 } else if (VAR_4 == 2) {
  if (FUNC_2(VAR_1, VAR_2,
      VAR_3, (u16)(0xFFFF & VAR_5))) {
   return -1;
  }
 } else if (VAR_4 == 4) {
  if (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5)) {
   return -1;
  }
 } else {
  return -1;
 }

 return VAR_0;
}
