
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct pci_device_id {size_t driver_data; } ;
struct pci_dev {int dev; int devfn; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_6__ {int name; TYPE_1__ dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int ,int ) ;
 TYPE_4__ VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 char** VAR_11 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct pci_dev*,int ,int*) ;
 int FUNC_6 (struct pci_dev*,int ,int*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int ,int,char*,char*,int) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_12, const struct pci_device_id *VAR_13)
{
 int VAR_14 = (VAR_13->driver_data == VAR_1);
 int VAR_15;
 u8 VAR_16;

 if (VAR_9) {
  FUNC_3(&VAR_12->dev, "Only one device supported "
         "(you have a strange motherboard, btw)\n");
  return -VAR_0;
 }

 if (VAR_14) {
  if (FUNC_0(VAR_12->devfn) != 1)
   return -VAR_0;

  FUNC_6(VAR_12, VAR_3, &VAR_9);
  VAR_9 &= 0xfffc;
 } else {
  if (FUNC_0(VAR_12->devfn) != 3)
   return -VAR_0;

  FUNC_5(VAR_12, VAR_4, &VAR_16);
  if ((VAR_16 & 128) == 0) {
   FUNC_3(&VAR_12->dev,
    "Error: SMBus controller I/O not enabled!\n");
   return -VAR_0;
  }



  FUNC_6(VAR_12, VAR_2, &VAR_9);
  VAR_9 &= 0xff00;
  VAR_9 += VAR_6;
 }

 VAR_15 = FUNC_1(VAR_9, VAR_7,
      VAR_8.name);
 if (VAR_15)
  return -VAR_0;

 if (!FUNC_8(VAR_9, VAR_7, VAR_8.name)) {
  FUNC_3(&VAR_12->dev, "SMB region 0x%x already in use!\n",
   VAR_9);
  return -VAR_0;
 }

 FUNC_5(VAR_12, VAR_5, &VAR_16);
 FUNC_2(&VAR_12->dev, "SMBREV = 0x%X\n", VAR_16);
 FUNC_2(&VAR_12->dev, "AMD756_smba = 0x%X\n", VAR_9);


 VAR_10.dev.parent = &VAR_12->dev;

 FUNC_9(VAR_10.name, sizeof(VAR_10.name),
   "SMBus %s adapter at %04x", VAR_11[VAR_13->driver_data],
   VAR_9);

 VAR_15 = FUNC_4(&VAR_10);
 if (VAR_15)
  goto out_err;

 return 0;

 out_err:
 FUNC_7(VAR_9, VAR_7);
 return VAR_15;
}
