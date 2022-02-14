
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {scalar_t__ msi_cap; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_2)
{
 u32 VAR_3, VAR_4;






 FUNC_0(&VAR_2->dev,
   "rtas_msi: No 32 bit MSI firmware support, forcing 32 bit MSI\n");
 FUNC_1(VAR_2, VAR_2->msi_cap + VAR_0, &VAR_3);
 VAR_4 = 0xffff0000 | ((VAR_3 >> (48 - 32)) << 4);
 FUNC_2(VAR_2, VAR_2->msi_cap + VAR_1, VAR_4);
 FUNC_2(VAR_2, VAR_2->msi_cap + VAR_0, 0);
}
