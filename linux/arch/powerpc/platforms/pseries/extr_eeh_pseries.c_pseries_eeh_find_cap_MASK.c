
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dn {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dn*) ;
 int FUNC_1 (struct pci_dn*,int,int,int*) ;

__attribute__((used)) static int FUNC_2(struct pci_dn *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = 48;
 u32 VAR_6;

 if (!VAR_4)
  return 0;

        while (VAR_5--) {
  FUNC_1(VAR_2, VAR_4, 1, &VAR_4);
  if (VAR_4 < 0x40)
   break;
  VAR_4 &= ~3;
  FUNC_1(VAR_2, VAR_4 + VAR_0, 1, &VAR_6);
  if (VAR_6 == 0xff)
   break;
  if (VAR_6 == VAR_3)
   return VAR_4;
  VAR_4 += VAR_1;
 }

 return 0;
}
