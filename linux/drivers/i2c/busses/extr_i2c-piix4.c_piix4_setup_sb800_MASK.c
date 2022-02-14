
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; int revision; int dev; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (unsigned short,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,unsigned int,...) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 TYPE_1__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int,char*) ;
 int FUNC_8 (unsigned short,int,char*) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_23,
        const struct pci_device_id *VAR_24, u8 VAR_25)
{
 unsigned short VAR_26;
 u8 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 u8 VAR_32, VAR_33 = 0x10;


 if (VAR_17 || VAR_18) {
  FUNC_2(&VAR_23->dev, "SMBus does not support "
   "forcing address!\n");
  return -VAR_1;
 }


 if ((VAR_23->vendor == VAR_5 &&
      VAR_23->device == VAR_3 &&
      VAR_23->revision >= 0x41) ||
     (VAR_23->vendor == VAR_5 &&
      VAR_23->device == VAR_4 &&
      VAR_23->revision >= 0x49) ||
     (VAR_23->vendor == VAR_6 &&
      VAR_23->device == VAR_4))
  VAR_29 = 0x00;
 else
  VAR_29 = (VAR_25) ? 0x28 : 0x2c;

 if (!FUNC_7(VAR_15, 2, "sb800_piix4_smb")) {
  FUNC_2(&VAR_23->dev,
   "SMB base address index region 0x%x already in use.\n",
   VAR_15);
  return -VAR_0;
 }

 FUNC_5(VAR_29, VAR_15);
 VAR_27 = FUNC_4(VAR_15 + 1);
 FUNC_5(VAR_29 + 1, VAR_15);
 VAR_28 = FUNC_4(VAR_15 + 1);

 FUNC_6(VAR_15, 2);

 if (!VAR_29) {
  VAR_30 = VAR_27 & 0x10;
  VAR_26 = VAR_28 << 8;
  if (VAR_25)
   VAR_26 |= 0x20;
 } else {
  VAR_30 = VAR_27 & 0x01;
  VAR_26 = ((VAR_28 << 8) | VAR_27) & 0xffe0;
 }

 if (!VAR_30) {
  FUNC_2(&VAR_23->dev,
   "SMBus Host Controller not enabled!\n");
  return -VAR_2;
 }

 if (FUNC_0(VAR_26, VAR_16, VAR_19.name))
  return -VAR_2;

 if (!FUNC_8(VAR_26, VAR_16, VAR_19.name)) {
  FUNC_2(&VAR_23->dev, "SMBus region 0x%x already in use!\n",
   VAR_26);
  return -VAR_0;
 }


 if (VAR_25) {
  FUNC_3(&VAR_23->dev,
    "Auxiliary SMBus Host Controller at 0x%x\n",
    VAR_26);
  return VAR_26;
 }


 if (!FUNC_8(VAR_26 + VAR_33, 1, "i2ccfg")) {
  FUNC_2(&VAR_23->dev, "SMBus I2C bus config region "
   "0x%x already in use!\n", VAR_26 + VAR_33);
  FUNC_6(VAR_26, VAR_16);
  return -VAR_0;
 }
 VAR_32 = FUNC_4(VAR_26 + VAR_33);
 FUNC_6(VAR_26 + VAR_33, 1);

 if (VAR_32 & 1)
  FUNC_1(&VAR_23->dev, "Using IRQ for SMBus\n");
 else
  FUNC_1(&VAR_23->dev, "Using SMI# for SMBus\n");

 FUNC_3(&VAR_23->dev,
   "SMBus Host Controller at 0x%x, revision %d\n",
   VAR_26, VAR_32 >> 4);


 if (VAR_23->vendor == VAR_5 ||
     VAR_23->vendor == VAR_6) {
  if (VAR_23->device == VAR_4 ||
      (VAR_23->device == VAR_3 &&
       VAR_23->revision >= 0x1F)) {
   VAR_21 = VAR_9;
   VAR_20 = VAR_11;
   VAR_22 = VAR_14;
  } else {
   VAR_21 = VAR_8;
   VAR_20 = VAR_10;
   VAR_22 = VAR_13;
  }
 } else {
  if (!FUNC_7(VAR_15, 2,
       "sb800_piix4_smb")) {
   FUNC_6(VAR_26, VAR_16);
   return -VAR_0;
  }

  FUNC_5(VAR_12, VAR_15);
  VAR_31 = FUNC_4(VAR_15 + 1);
  VAR_21 = (VAR_31 & 0x01) ?
           VAR_8 :
           VAR_7;
  VAR_20 = VAR_10;
  VAR_22 = VAR_13;
  FUNC_6(VAR_15, 2);
 }

 FUNC_3(&VAR_23->dev,
   "Using register 0x%02x for SMBus port selection\n",
   (unsigned int)VAR_21);

 return VAR_26;
}
