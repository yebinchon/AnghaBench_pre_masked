
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct iommu_dev_data {int rs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 struct iommu_dev_data* FUNC_4 (int *) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,char*,int,int ,int) ;
 struct pci_dev* FUNC_7 (int ,int ,int) ;
 int FUNC_8 (char*,int ,int ,int ,int,int ,int) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static void FUNC_10(u16 VAR_0, u16 VAR_1,
     u64 VAR_2, int VAR_3)
{
 struct iommu_dev_data *VAR_4 = ((void*)0);
 struct pci_dev *VAR_5;

 VAR_5 = FUNC_7(0, FUNC_0(VAR_0),
        VAR_0 & 0xff);
 if (VAR_5)
  VAR_4 = FUNC_4(&VAR_5->dev);

 if (VAR_4 && FUNC_3(&VAR_4->rs)) {
  FUNC_6(VAR_5, "Event logged [IO_PAGE_FAULT domain=0x%04x address=0x%llx flags=0x%04x]\n",
   VAR_1, VAR_2, VAR_3);
 } else if (FUNC_9()) {
  FUNC_8("Event logged [IO_PAGE_FAULT device=%02x:%02x.%x domain=0x%04x address=0x%llx flags=0x%04x]\n",
   FUNC_0(VAR_0), FUNC_2(VAR_0), FUNC_1(VAR_0),
   VAR_1, VAR_2, VAR_3);
 }

 if (VAR_5)
  FUNC_5(VAR_5);
}
