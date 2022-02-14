
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skd_device {scalar_t__ pcie_error_reporting_is_enabled; scalar_t__* mem_map; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct skd_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int *) ;
 int FUNC_7 (struct skd_device*) ;
 int FUNC_8 (struct skd_device*) ;
 int FUNC_9 (struct skd_device*) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_1)
{
 int VAR_2;
 struct skd_device *VAR_3;

 VAR_3 = FUNC_4(VAR_1);
 if (!VAR_3) {
  FUNC_0(&VAR_1->dev, "no device data for PCI\n");
  return;
 }
 FUNC_9(VAR_3);
 FUNC_8(VAR_3);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_3->mem_map[VAR_2])
   FUNC_1(VAR_3->mem_map[VAR_2]);

 if (VAR_3->pcie_error_reporting_is_enabled)
  FUNC_3(VAR_1);

 FUNC_7(VAR_3);

 FUNC_5(VAR_1);
 FUNC_2(VAR_1);
 FUNC_6(VAR_1, ((void*)0));

 return;
}
