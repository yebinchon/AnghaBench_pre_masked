
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skd_device {scalar_t__ pcie_error_reporting_is_enabled; scalar_t__* mem_map; } ;
struct pci_dev {int dev; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct skd_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct skd_device*) ;
 int FUNC_10 (struct skd_device*) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_2, pm_message_t VAR_3)
{
 int VAR_4;
 struct skd_device *VAR_5;

 VAR_5 = FUNC_5(VAR_2);
 if (!VAR_5) {
  FUNC_0(&VAR_2->dev, "no device data for PCI\n");
  return -VAR_0;
 }

 FUNC_10(VAR_5);

 FUNC_9(VAR_5);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_5->mem_map[VAR_4])
   FUNC_1(VAR_5->mem_map[VAR_4]);

 if (VAR_5->pcie_error_reporting_is_enabled)
  FUNC_4(VAR_2);

 FUNC_6(VAR_2);
 FUNC_7(VAR_2);
 FUNC_3(VAR_2);
 FUNC_8(VAR_2, FUNC_2(VAR_2, VAR_3));
 return 0;
}
