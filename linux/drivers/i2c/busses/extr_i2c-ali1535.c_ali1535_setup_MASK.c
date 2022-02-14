
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int name; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned char,int,int ) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 unsigned char VAR_12 ;
 int FUNC_1 (int *,char*,unsigned char) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ,unsigned char*) ;
 int FUNC_6 (struct pci_dev*,int ,int*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 unsigned char FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*,int ,int) ;
 int FUNC_10 (unsigned char,int) ;
 int FUNC_11 (unsigned char,int,int ) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_13)
{
 int VAR_14;
 unsigned char VAR_15;







 VAR_14 = FUNC_4(VAR_13);
 if (VAR_14) {
  FUNC_2(&VAR_13->dev, "ALI1535_smb can't enable device\n");
  goto exit;
 }


 FUNC_6(VAR_13, VAR_5, &VAR_11);
 FUNC_1(&VAR_13->dev, "ALI1535_smb is at offset 0x%04x\n", VAR_11);
 VAR_11 &= (0xffff & ~(VAR_1 - 1));
 if (VAR_11 == 0) {
  FUNC_3(&VAR_13->dev,
   "ALI1535_smb region uninitialized - upgrade BIOS?\n");
  VAR_14 = -VAR_3;
  goto exit;
 }

 if (FUNC_7(VAR_13, 0) & VAR_4)
  VAR_12 = FUNC_8(VAR_13, 0) + VAR_11;
 else
  VAR_12 = VAR_11;

 VAR_14 = FUNC_0(VAR_12, VAR_1,
       VAR_10.name);
 if (VAR_14)
  goto exit;

 if (!FUNC_11(VAR_12, VAR_1,
       VAR_10.name)) {
  FUNC_2(&VAR_13->dev, "ALI1535_smb region 0x%lx already in use!\n",
   VAR_12);
  VAR_14 = -VAR_2;
  goto exit;
 }


 FUNC_5(VAR_13, VAR_6, &VAR_15);
 if ((VAR_15 & VAR_0) == 0) {
  FUNC_2(&VAR_13->dev, "SMB device not enabled - upgrade BIOS?\n");
  VAR_14 = -VAR_3;
  goto exit_free;
 }


 FUNC_5(VAR_13, VAR_8, &VAR_15);
 if ((VAR_15 & 1) == 0) {
  FUNC_2(&VAR_13->dev, "SMBus controller not enabled - upgrade BIOS?\n");
  VAR_14 = -VAR_3;
  goto exit_free;
 }


 FUNC_9(VAR_13, VAR_7, 0x20);
 FUNC_5(VAR_13, VAR_9, &VAR_15);
 FUNC_1(&VAR_13->dev, "SMBREV = 0x%X\n", VAR_15);
 FUNC_1(&VAR_13->dev, "ALI1535_smba = 0x%lx\n", VAR_12);

 return 0;

exit_free:
 FUNC_10(VAR_12, VAR_1);
exit:
 return VAR_14;
}
