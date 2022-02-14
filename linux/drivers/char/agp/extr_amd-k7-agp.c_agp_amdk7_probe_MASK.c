
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ vendor; int revision; int dev; } ;
struct agp_bridge_data {int mode; scalar_t__ capndx; struct pci_dev* dev; int * dev_private_data; int * driver; } ;
struct TYPE_6__ {int flags; TYPE_1__* dev; } ;
struct TYPE_5__ {int chipset_name; } ;
struct TYPE_4__ {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct agp_bridge_data*) ;
 struct agp_bridge_data* FUNC_1 () ;
 struct pci_device_id const* VAR_11 ;
 TYPE_3__* VAR_12 ;
 TYPE_2__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int ) ;
 struct pci_dev* FUNC_5 (int,struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_7 (struct pci_dev*,struct agp_bridge_data*) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_16,
      const struct pci_device_id *VAR_17)
{
 struct agp_bridge_data *VAR_18;
 u8 VAR_19;
 int VAR_20;

 VAR_19 = FUNC_4(VAR_16, VAR_6);
 if (!VAR_19)
  return -VAR_3;

 VAR_20 = VAR_17 - VAR_11;
 FUNC_2(&VAR_16->dev, "AMD %s chipset\n",
   VAR_13[VAR_20].chipset_name);

 VAR_18 = FUNC_1();
 if (!VAR_18)
  return -VAR_4;

 VAR_18->driver = &VAR_14;
 VAR_18->dev_private_data = &VAR_15,
 VAR_18->dev = VAR_16;
 VAR_18->capndx = VAR_19;





 if (VAR_12->dev->device == VAR_8) {
  struct pci_dev *VAR_21=((void*)0);

  VAR_19 = 0;
  while (!VAR_19) {
   VAR_21 = FUNC_5(VAR_7<<8, VAR_21);
   if (!VAR_21) {
    FUNC_2(&VAR_16->dev, "no AGP VGA controller\n");
    return -VAR_3;
   }
   VAR_19 = FUNC_4(VAR_21, VAR_6);
  }




  if (VAR_21->vendor == VAR_10) {
   VAR_12->flags |= VAR_0;
   FUNC_2(&VAR_16->dev, "AMD 751 chipset with NVidia GeForce; forcing 1X due to errata\n");
  }
  FUNC_3(VAR_21);
 }







 if (VAR_12->dev->device == VAR_9) {
  if (VAR_16->revision == 0x10 || VAR_16->revision == 0x11) {
   VAR_12->flags = VAR_1;
   VAR_12->flags |= VAR_2;
   VAR_12->flags |= VAR_0;
   FUNC_2(&VAR_16->dev, "AMD 761 chipset with errata; disabling AGP fast writes & SBA and forcing to 1X\n");
  }
 }


 FUNC_6(VAR_16,
   VAR_18->capndx+VAR_5,
   &VAR_18->mode);

 FUNC_7(VAR_16, VAR_18);
 return FUNC_0(VAR_18);
}
