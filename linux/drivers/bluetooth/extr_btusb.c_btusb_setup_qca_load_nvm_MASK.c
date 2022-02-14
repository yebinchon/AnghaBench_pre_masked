
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qca_version {int rom_version; } ;
struct qca_device_info {int nvm_hdr; } ;
struct hci_dev {int dev; } ;
struct firmware {int dummy; } ;
typedef int fwname ;


 int FUNC_0 (struct hci_dev*,char*,char*,int) ;
 int FUNC_1 (struct hci_dev*,char*,char*) ;
 int FUNC_2 (struct hci_dev*,struct firmware const*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct firmware const**,char*,int *) ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_7(struct hci_dev *VAR_0,
        struct qca_version *VAR_1,
        const struct qca_device_info *VAR_2)
{
 const struct firmware *VAR_3;
 char VAR_4[64];
 int VAR_5;

 FUNC_6(VAR_4, sizeof(VAR_4), "qca/nvm_usb_%08x.bin",
   FUNC_3(VAR_1->rom_version));

 VAR_5 = FUNC_5(&VAR_3, VAR_4, &VAR_0->dev);
 if (VAR_5) {
  FUNC_0(VAR_0, "failed to request NVM file: %s (%d)",
      VAR_4, VAR_5);
  return VAR_5;
 }

 FUNC_1(VAR_0, "using NVM file: %s", VAR_4);

 VAR_5 = FUNC_2(VAR_0, VAR_3, VAR_2->nvm_hdr);

 FUNC_4(VAR_3);

 return VAR_5;
}
