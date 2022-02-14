
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ device; int dev; int vendor; } ;
struct agp_device_ids {char* chipset_name; scalar_t__ device_id; } ;
struct agp_bridge_data {int mode; scalar_t__ capndx; int * driver; struct pci_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct agp_bridge_data*) ;
 struct agp_bridge_data* FUNC_1 () ;
 struct agp_device_ids* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,int ,scalar_t__) ;
 int FUNC_3 (int *,char*,char*) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_6 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_7 (struct pci_dev*,struct agp_bridge_data*) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_7, const struct pci_device_id *VAR_8)
{
 struct agp_device_ids *VAR_9 = VAR_4;
 struct agp_bridge_data *VAR_10;
 u8 VAR_11, VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(VAR_7, VAR_3);
 if (!VAR_12)
  return -VAR_0;


 for (VAR_13 = 0; VAR_9[VAR_13].chipset_name; VAR_13++) {
  if (VAR_7->device == VAR_9[VAR_13].device_id)
   goto found;
 }

 FUNC_2(&VAR_7->dev, "unsupported ALi chipset [%04x/%04x])\n",
  VAR_7->vendor, VAR_7->device);
 return -VAR_0;


found:
 VAR_10 = FUNC_1();
 if (!VAR_10)
  return -VAR_1;

 VAR_10->dev = VAR_7;
 VAR_10->capndx = VAR_12;

 switch (VAR_7->device) {
 case 129:
  VAR_10->driver = &VAR_6;
  break;
 case 128:
  FUNC_5(VAR_7, 0xFB, &VAR_11);
  switch (VAR_11) {
  case 0x31:
   VAR_9[VAR_13].chipset_name = "M1631";
   break;
  case 0x32:
   VAR_9[VAR_13].chipset_name = "M1632";
   break;
  case 0x41:
   VAR_9[VAR_13].chipset_name = "M1641";
   break;
  case 0x43:
   VAR_9[VAR_13].chipset_name = "M1621";
   break;
  case 0x47:
   VAR_9[VAR_13].chipset_name = "M1647";
   break;
  case 0x51:
   VAR_9[VAR_13].chipset_name = "M1651";
   break;
  default:
   break;
  }

 default:
  VAR_10->driver = &VAR_5;
 }

 FUNC_3(&VAR_7->dev, "ALi %s chipset\n", VAR_9[VAR_13].chipset_name);


 FUNC_6(VAR_7,
   VAR_10->capndx+VAR_2,
   &VAR_10->mode);

 FUNC_7(VAR_7, VAR_10);
 return FUNC_0(VAR_10);
}
