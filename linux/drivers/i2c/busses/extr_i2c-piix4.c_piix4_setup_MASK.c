
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; int dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (unsigned short,int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,unsigned short,...) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct pci_dev*,int ,unsigned char*) ;
 int FUNC_7 (struct pci_dev*,int ,unsigned short*) ;
 int FUNC_8 (struct pci_dev*,int ,unsigned char) ;
 int FUNC_9 (struct pci_dev*,int ,unsigned short) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__ VAR_14 ;
 int FUNC_10 (unsigned short,int ) ;
 int FUNC_11 (unsigned short,int ,int ) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_16,
         const struct pci_device_id *VAR_17)
{
 unsigned char VAR_18;
 unsigned short VAR_19;

 if ((VAR_16->vendor == VAR_5) &&
     (VAR_16->device == VAR_3))
  VAR_15 = 1;



 if (FUNC_5(VAR_12)) {
  FUNC_2(&VAR_16->dev,
   "Accessing the SMBus on this system is unsafe!\n");
  return -VAR_2;
 }


 if (FUNC_5(VAR_13) &&
   VAR_16->vendor == VAR_4) {
  FUNC_2(&VAR_16->dev, "IBM system detected; this module "
   "may corrupt your serial eeprom! Refusing to load "
   "module!\n");
  return -VAR_2;
 }


 if (VAR_11) {
  VAR_19 = VAR_11 & 0xfff0;
  VAR_10 = 0;
 } else {
  FUNC_7(VAR_16, VAR_6, &VAR_19);
  VAR_19 &= 0xfff0;
  if(VAR_19 == 0) {
   FUNC_2(&VAR_16->dev, "SMBus base address "
    "uninitialized - upgrade BIOS or use "
    "force_addr=0xaddr\n");
   return -VAR_1;
  }
 }

 if (FUNC_0(VAR_19, VAR_8, VAR_14.name))
  return -VAR_1;

 if (!FUNC_11(VAR_19, VAR_8, VAR_14.name)) {
  FUNC_2(&VAR_16->dev, "SMBus region 0x%x already in use!\n",
   VAR_19);
  return -VAR_0;
 }

 FUNC_6(VAR_16, VAR_7, &VAR_18);



 if (VAR_11) {
  FUNC_8(VAR_16, VAR_7, VAR_18 & 0xfe);
  FUNC_9(VAR_16, VAR_6, VAR_19);
  FUNC_8(VAR_16, VAR_7, VAR_18 | 0x01);
  FUNC_3(&VAR_16->dev, "WARNING: SMBus interface set to "
   "new address %04x!\n", VAR_19);
 } else if ((VAR_18 & 1) == 0) {
  if (VAR_10) {
   FUNC_8(VAR_16, VAR_7,
           VAR_18 | 1);
   FUNC_4(&VAR_16->dev,
       "WARNING: SMBus interface has been FORCEFULLY ENABLED!\n");
  } else {
   FUNC_2(&VAR_16->dev,
    "SMBus Host Controller not enabled!\n");
   FUNC_10(VAR_19, VAR_8);
   return -VAR_1;
  }
 }

 if (((VAR_18 & 0x0E) == 8) || ((VAR_18 & 0x0E) == 2))
  FUNC_1(&VAR_16->dev, "Using IRQ for SMBus\n");
 else if ((VAR_18 & 0x0E) == 0)
  FUNC_1(&VAR_16->dev, "Using SMI# for SMBus\n");
 else
  FUNC_2(&VAR_16->dev, "Illegal Interrupt configuration "
   "(or code out of date)!\n");

 FUNC_6(VAR_16, VAR_9, &VAR_18);
 FUNC_3(&VAR_16->dev,
   "SMBus Host Controller at 0x%x, revision %d\n",
   VAR_19, VAR_18);

 return VAR_19;
}
