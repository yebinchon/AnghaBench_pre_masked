
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_device_id {scalar_t__ device; int driver_data; } ;
struct pci_dev {int device; int revision; int dev; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_7__ {int name; TYPE_1__ dev; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;







 scalar_t__ VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_3__*) ;
 int * FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pci_dev*,int,unsigned char*) ;
 scalar_t__ FUNC_9 (struct pci_dev*,int ,int*) ;
 int FUNC_10 (struct pci_dev*,int,unsigned char) ;
 int FUNC_11 (struct pci_dev*,int ,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int,int,int ) ;
 int FUNC_14 (int ,int,char*,int) ;
 TYPE_3__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_15(struct pci_dev *VAR_12,
         const struct pci_device_id *VAR_13)
{
 unsigned char VAR_14;
 int VAR_15;


 if (VAR_6) {
  VAR_11 = VAR_6 & 0xfff0;
  VAR_5 = 0;
  goto found;
 }

 if ((FUNC_9(VAR_12, VAR_13->driver_data, &VAR_11)) ||
     !(VAR_11 & 0x0001)) {

  if (VAR_13->device == VAR_2 &&
      !FUNC_9(VAR_12, VAR_3, &VAR_11) &&
      (VAR_11 & 0x0001)) {
   VAR_4 = 0x84;
  } else {

   FUNC_2(&VAR_12->dev, "Cannot configure "
    "SMBus I/O Base address\n");
   return -VAR_0;
  }
 }

 VAR_11 &= 0xfff0;
 if (VAR_11 == 0) {
  FUNC_2(&VAR_12->dev, "SMBus base address "
   "uninitialized - upgrade BIOS or use "
   "force_addr=0xaddr\n");
  return -VAR_0;
 }

found:
 VAR_15 = FUNC_0(VAR_11, 8, VAR_8.name);
 if (VAR_15)
  return -VAR_0;

 if (!FUNC_13(VAR_11, 8, VAR_8.name)) {
  FUNC_2(&VAR_12->dev, "SMBus region 0x%x already in use!\n",
   VAR_11);
  return -VAR_0;
 }

 FUNC_8(VAR_12, VAR_4, &VAR_14);


 if (VAR_6) {
  FUNC_10(VAR_12, VAR_4, VAR_14 & 0xfe);
  FUNC_11(VAR_12, VAR_13->driver_data, VAR_11);
  FUNC_10(VAR_12, VAR_4, VAR_14 | 0x01);
  FUNC_4(&VAR_12->dev, "WARNING: SMBus interface set to new "
    "address 0x%04x!\n", VAR_11);
 } else if (!(VAR_14 & 0x01)) {
  if (VAR_5) {






   FUNC_10(VAR_12, VAR_4, VAR_14 | 0x01);
   FUNC_3(&VAR_12->dev, "Enabling SMBus device\n");
  } else {
   FUNC_2(&VAR_12->dev, "SMBUS: Error: Host SMBus "
    "controller not enabled! - upgrade BIOS or "
    "use force=1\n");
   VAR_15 = -VAR_0;
   goto release_region;
  }
 }

 FUNC_1(&VAR_12->dev, "VT596_smba = 0x%X\n", VAR_11);

 switch (VAR_12->device) {
 case 131:
 case 130:
 case 129:
 case 128:
 case 133:
 case 136:
 case 135:
 case 134:
 case 137:
 case 139:
 case 138:
  VAR_9 |= VAR_1;
  break;
 case 132:


  if (VAR_12->revision >= 0x40)
   VAR_9 |= VAR_1;
  break;
 }

 VAR_7.dev.parent = &VAR_12->dev;
 FUNC_14(VAR_7.name, sizeof(VAR_7.name),
   "SMBus Via Pro adapter at %04x", VAR_11);

 VAR_10 = FUNC_6(VAR_12);
 VAR_15 = FUNC_5(&VAR_7);
 if (VAR_15) {
  FUNC_7(VAR_10);
  VAR_10 = ((void*)0);
  goto release_region;
 }





 return -VAR_0;

release_region:
 FUNC_12(VAR_11, 8);
 return VAR_15;
}
