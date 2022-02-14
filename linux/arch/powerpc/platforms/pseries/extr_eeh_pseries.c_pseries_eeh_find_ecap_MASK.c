
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dn {int dummy; } ;
struct eeh_dev {int pcie_cap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct eeh_dev* FUNC_2 (struct pci_dn*) ;
 scalar_t__ FUNC_3 (struct pci_dn*,int,int,int *) ;

__attribute__((used)) static int FUNC_4(struct pci_dn *VAR_1, int VAR_2)
{
 struct eeh_dev *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4;
 int VAR_5 = 256;
 int VAR_6 = (4096 - 256) / 8;

 if (!VAR_3 || !VAR_3->pcie_cap)
  return 0;
 if (FUNC_3(VAR_1, VAR_5, 4, &VAR_4) != VAR_0)
  return 0;
 else if (!VAR_4)
  return 0;

 while (VAR_6-- > 0) {
  if (FUNC_0(VAR_4) == VAR_2 && VAR_5)
   return VAR_5;

  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 < 256)
   break;

  if (FUNC_3(VAR_1, VAR_5, 4, &VAR_4) != VAR_0)
   break;
 }

 return 0;
}
