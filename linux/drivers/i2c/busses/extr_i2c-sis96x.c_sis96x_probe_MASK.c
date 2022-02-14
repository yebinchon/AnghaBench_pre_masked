
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int * resource; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_7__ {int name; TYPE_1__ dev; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_5 (struct pci_dev*,size_t) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int,int ) ;
 TYPE_3__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_10,
    const struct pci_device_id *VAR_11)
{
 u16 VAR_12 = 0;
 int VAR_13;

 if (VAR_9) {
  FUNC_1(&VAR_10->dev, "Only one device supported.\n");
  return -VAR_0;
 }

 FUNC_4(VAR_10, VAR_3, &VAR_12);
 if (VAR_4 != VAR_12) {
  FUNC_1(&VAR_10->dev, "Unsupported device class 0x%04x!\n", VAR_12);
  return -VAR_2;
 }

 VAR_9 = FUNC_5(VAR_10, VAR_5);
 if (!VAR_9) {
  FUNC_1(&VAR_10->dev, "SiS96x SMBus base address "
   "not initialized!\n");
  return -VAR_1;
 }
 FUNC_2(&VAR_10->dev, "SiS96x SMBus base address: 0x%04x\n",
   VAR_9);

 VAR_13 = FUNC_0(&VAR_10->resource[VAR_5]);
 if (VAR_13)
  return -VAR_2;


 if (!FUNC_7(VAR_9, VAR_6,
       VAR_8.name)) {
  FUNC_1(&VAR_10->dev, "SMBus registers 0x%04x-0x%04x "
   "already in use!\n", VAR_9,
   VAR_9 + VAR_6 - 1);

  VAR_9 = 0;
  return -VAR_1;
 }


 VAR_7.dev.parent = &VAR_10->dev;

 FUNC_8(VAR_7.name, sizeof(VAR_7.name),
  "SiS96x SMBus adapter at 0x%04x", VAR_9);

 if ((VAR_13 = FUNC_3(&VAR_7))) {
  FUNC_1(&VAR_10->dev, "Couldn't register adapter!\n");
  FUNC_6(VAR_9, VAR_6);
  VAR_9 = 0;
 }

 return VAR_13;
}
