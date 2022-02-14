
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,char*) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int ,unsigned short*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_4)
{
 unsigned short VAR_5;

 if (FUNC_1(VAR_4, VAR_0, &VAR_5))
  return;

 if (!(VAR_5 & VAR_1)) {
  FUNC_0(VAR_4, "BIOS has allocated no shadow GTT; disabling IOMMU for graphics\n");
  VAR_2 = 0;
 } else if (VAR_2) {

  FUNC_0(VAR_4, "Disabling batched IOTLB flush on Ironlake\n");
  VAR_3 = 1;
       }
}
