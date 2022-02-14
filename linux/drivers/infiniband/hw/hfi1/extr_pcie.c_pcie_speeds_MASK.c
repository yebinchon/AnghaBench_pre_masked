
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct hfi1_devdata {int link_gen3_capable; int lbus_info; TYPE_2__* pcidev; } ;
struct TYPE_5__ {TYPE_1__* bus; } ;
struct TYPE_4__ {scalar_t__ max_bus_speed; struct pci_dev* self; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 int FUNC_1 (struct hfi1_devdata*,char*,...) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int*) ;
 int FUNC_4 (struct hfi1_devdata*) ;

int FUNC_5(struct hfi1_devdata *VAR_5)
{
 u32 VAR_6;
 struct pci_dev *VAR_7 = VAR_5->pcidev->bus->self;
 int VAR_8;

 if (!FUNC_2(VAR_5->pcidev)) {
  FUNC_0(VAR_5, "Can't find PCI Express capability!\n");
  return -VAR_0;
 }


 VAR_5->link_gen3_capable = 1;

 VAR_8 = FUNC_3(VAR_5->pcidev, VAR_2, &VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_5, "Unable to read from PCI config\n");
  return VAR_8;
 }

 if ((VAR_6 & VAR_3) != VAR_4) {
  FUNC_1(VAR_5,
       "This HFI is not Gen3 capable, max speed 0x%x, need 0x3\n",
       VAR_6 & VAR_3);
  VAR_5->link_gen3_capable = 0;
 }




 if (VAR_7 && VAR_5->pcidev->bus->max_bus_speed != VAR_1) {
  FUNC_1(VAR_5, "Parent PCIe bridge does not support Gen3\n");
  VAR_5->link_gen3_capable = 0;
 }


 FUNC_4(VAR_5);

 FUNC_1(VAR_5, "%s\n", VAR_5->lbus_info);

 return 0;
}
