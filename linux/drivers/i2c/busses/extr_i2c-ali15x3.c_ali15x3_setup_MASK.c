
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int name; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int,int,int ) ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 int VAR_13 ;
 int FUNC_4 (struct pci_dev*,int ,unsigned char*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int ,int*) ;
 int FUNC_6 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_7 (struct pci_dev*,int ,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int,int ) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_14)
{
 u16 VAR_15;
 unsigned char VAR_16;
 FUNC_4(VAR_14, VAR_5, &VAR_16);
 if (VAR_16 & VAR_0) {
  VAR_16 &= ~VAR_0;
  FUNC_6(VAR_14, VAR_5, VAR_16);
 }


 FUNC_5(VAR_14, VAR_6, &VAR_12);
 VAR_12 &= (0xffff & ~(VAR_1 - 1));
 if (VAR_12 == 0 && VAR_13 == 0) {
  FUNC_2(&VAR_14->dev, "ALI15X3_smb region uninitialized "
   "- upgrade BIOS or use force_addr=0xaddr\n");
  return -VAR_3;
 }

 if(VAR_13)
  VAR_12 = VAR_13 & ~(VAR_1 - 1);

 if (FUNC_0(VAR_12, VAR_1,
         VAR_11.name))
  return -VAR_2;

 if (!FUNC_9(VAR_12, VAR_1,
       VAR_11.name)) {
  FUNC_2(&VAR_14->dev,
   "ALI15X3_smb region 0x%x already in use!\n",
   VAR_12);
  return -VAR_3;
 }

 if(VAR_13) {
  FUNC_3(&VAR_14->dev, "forcing ISA address 0x%04X\n",
   VAR_12);
  if (VAR_4 != FUNC_7(VAR_14,
        VAR_6,
        VAR_12))
   goto error;
  if (VAR_4 != FUNC_5(VAR_14,
        VAR_6, &VAR_15))
   goto error;
  if ((VAR_15 & ~(VAR_1 - 1)) != VAR_12) {

   FUNC_2(&VAR_14->dev,
    "force address failed - not supported?\n");
   goto error;
  }
 }

 FUNC_4(VAR_14, VAR_8, &VAR_16);
 if ((VAR_16 & 1) == 0) {
  FUNC_3(&VAR_14->dev, "enabling SMBus device\n");
  FUNC_6(VAR_14, VAR_8, VAR_16 | 0x01);
 }


 FUNC_4(VAR_14, VAR_9, &VAR_16);
 if ((VAR_16 & 1) == 0) {
  FUNC_3(&VAR_14->dev, "enabling SMBus controller\n");
  FUNC_6(VAR_14, VAR_9, VAR_16 | 0x01);
 }


 FUNC_6(VAR_14, VAR_7, 0x20);
 FUNC_4(VAR_14, VAR_10, &VAR_16);
 FUNC_1(&VAR_14->dev, "SMBREV = 0x%X\n", VAR_16);
 FUNC_1(&VAR_14->dev, "iALI15X3_smba = 0x%X\n", VAR_12);

 return 0;
error:
 FUNC_8(VAR_12, VAR_1);
 return -VAR_3;
}
