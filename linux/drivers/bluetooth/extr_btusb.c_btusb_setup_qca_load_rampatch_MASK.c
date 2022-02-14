
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qca_version {int patch_version; int rom_version; } ;
struct qca_rampatch_version {int patch_version; int rom_version; } ;
struct qca_device_info {int rampatch_hdr; scalar_t__ ver_offset; } ;
struct hci_dev {int dev; } ;
struct firmware {scalar_t__ data; } ;
typedef int fwname ;


 int VAR_0 ;
 int FUNC_0 (struct hci_dev*,char*,...) ;
 int FUNC_1 (struct hci_dev*,char*,...) ;
 int FUNC_2 (struct hci_dev*,struct firmware const*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,char*,int *) ;
 int FUNC_7 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_8(struct hci_dev *VAR_1,
      struct qca_version *VAR_2,
      const struct qca_device_info *VAR_3)
{
 struct qca_rampatch_version *VAR_4;
 const struct firmware *VAR_5;
 u32 VAR_6, VAR_7;
 u16 VAR_8, VAR_9;
 char VAR_10[64];
 int VAR_11;

 VAR_6 = FUNC_4(VAR_2->rom_version);
 VAR_7 = FUNC_4(VAR_2->patch_version);

 FUNC_7(VAR_10, sizeof(VAR_10), "qca/rampatch_usb_%08x.bin", VAR_6);

 VAR_11 = FUNC_6(&VAR_5, VAR_10, &VAR_1->dev);
 if (VAR_11) {
  FUNC_0(VAR_1, "failed to request rampatch file: %s (%d)",
      VAR_10, VAR_11);
  return VAR_11;
 }

 FUNC_1(VAR_1, "using rampatch file: %s", VAR_10);

 VAR_4 = (struct qca_rampatch_version *)(VAR_5->data + VAR_3->ver_offset);
 VAR_8 = FUNC_3(VAR_4->rom_version);
 VAR_9 = FUNC_3(VAR_4->patch_version);

 FUNC_1(VAR_1, "QCA: patch rome 0x%x build 0x%x, "
      "firmware rome 0x%x build 0x%x",
      VAR_8, VAR_9, VAR_6, VAR_7);

 if (VAR_8 != VAR_6 || VAR_9 <= VAR_7) {
  FUNC_0(VAR_1, "rampatch file version did not match with firmware");
  VAR_11 = -VAR_0;
  goto done;
 }

 VAR_11 = FUNC_2(VAR_1, VAR_5, VAR_3->rampatch_hdr);

done:
 FUNC_5(VAR_5);

 return VAR_11;
}
