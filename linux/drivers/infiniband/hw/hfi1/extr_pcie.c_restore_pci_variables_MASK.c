
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int pci_tph2; int pcidev; int pci_msix0; int pcie_devctl2; int pcie_lnkctl; int pcie_devctl; int pci_rom; int pcibar1; int pcibar0; int pci_command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

int FUNC_5(struct hfi1_devdata *VAR_10)
{
 int VAR_11 = 0;

 VAR_11 = FUNC_3(VAR_10->pcidev, VAR_4, VAR_10->pci_command);
 if (VAR_11)
  goto error;

 VAR_11 = FUNC_2(VAR_10->pcidev, VAR_1,
         VAR_10->pcibar0);
 if (VAR_11)
  goto error;

 VAR_11 = FUNC_2(VAR_10->pcidev, VAR_2,
         VAR_10->pcibar1);
 if (VAR_11)
  goto error;

 VAR_11 = FUNC_2(VAR_10->pcidev, VAR_9, VAR_10->pci_rom);
 if (VAR_11)
  goto error;

 VAR_11 = FUNC_4(VAR_10->pcidev, VAR_5,
      VAR_10->pcie_devctl);
 if (VAR_11)
  goto error;

 VAR_11 = FUNC_4(VAR_10->pcidev, VAR_7,
      VAR_10->pcie_lnkctl);
 if (VAR_11)
  goto error;

 VAR_11 = FUNC_4(VAR_10->pcidev, VAR_6,
      VAR_10->pcie_devctl2);
 if (VAR_11)
  goto error;

 VAR_11 = FUNC_2(VAR_10->pcidev, VAR_3, VAR_10->pci_msix0);
 if (VAR_11)
  goto error;

 if (FUNC_1(VAR_10->pcidev, VAR_8)) {
  VAR_11 = FUNC_2(VAR_10->pcidev, VAR_0,
          VAR_10->pci_tph2);
  if (VAR_11)
   goto error;
 }
 return 0;

error:
 FUNC_0(VAR_10, "Unable to write to PCI config\n");
 return VAR_11;
}
