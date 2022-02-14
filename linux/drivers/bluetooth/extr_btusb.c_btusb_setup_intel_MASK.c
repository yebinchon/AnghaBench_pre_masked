
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct sk_buff {int dummy; } ;
struct intel_version {scalar_t__ fw_patch_num; int fw_build_yy; int fw_build_ww; int fw_build_num; int fw_revision; int fw_variant; int hw_revision; int hw_variant; int hw_platform; } ;
struct hci_dev {int name; } ;
struct firmware {int size; int const* data; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct hci_dev*,int ,int ,int *,int ) ;
 int FUNC_4 (struct hci_dev*,char*,int) ;
 int FUNC_5 (struct hci_dev*,char*,...) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*,int,int) ;
 int FUNC_9 (struct hci_dev*,struct intel_version*) ;
 int FUNC_10 (struct hci_dev*,int) ;
 struct firmware* FUNC_11 (struct hci_dev*,struct intel_version*) ;
 int FUNC_12 (struct hci_dev*,struct firmware const*,int const**,int*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct firmware const*) ;

__attribute__((used)) static int FUNC_15(struct hci_dev *VAR_2)
{
 struct sk_buff *VAR_3;
 const struct firmware *VAR_4;
 const u8 *VAR_5;
 int VAR_6, VAR_7;
 struct intel_version VAR_8;

 FUNC_0("%s", VAR_2->name);
 VAR_3 = FUNC_3(VAR_2, VAR_1, 0, ((void*)0), VAR_0);
 if (FUNC_1(VAR_3)) {
  FUNC_4(VAR_2, "sending initial HCI reset command failed (%ld)",
      FUNC_2(VAR_3));
  return FUNC_2(VAR_3);
 }
 FUNC_13(VAR_3);







 VAR_7 = FUNC_9(VAR_2, &VAR_8);
 if (VAR_7)
  return VAR_7;

 FUNC_5(VAR_2, "read Intel version: %02x%02x%02x%02x%02x%02x%02x%02x%02x",
      VAR_8.hw_platform, VAR_8.hw_variant, VAR_8.hw_revision,
      VAR_8.fw_variant, VAR_8.fw_revision, VAR_8.fw_build_num,
      VAR_8.fw_build_ww, VAR_8.fw_build_yy, VAR_8.fw_patch_num);





 if (VAR_8.fw_patch_num) {
  FUNC_5(VAR_2, "Intel device is already patched. "
       "patch num: %02x", VAR_8.fw_patch_num);
  goto complete;
 }







 VAR_4 = FUNC_11(VAR_2, &VAR_8);
 if (!VAR_4)
  goto complete;
 VAR_5 = VAR_4->data;





 VAR_7 = FUNC_7(VAR_2);
 if (VAR_7) {
  FUNC_14(VAR_4);
  return VAR_7;
 }

 VAR_6 = 1;
 while (VAR_4->size > VAR_5 - VAR_4->data) {
  int VAR_9;

  VAR_9 = FUNC_12(VAR_2, VAR_4, &VAR_5,
       &VAR_6);
  if (VAR_9 < 0)
   goto exit_mfg_deactivate;
 }

 FUNC_14(VAR_4);

 if (VAR_6)
  goto exit_mfg_disable;




 VAR_7 = FUNC_8(VAR_2, 1, 1);
 if (VAR_7)
  return VAR_7;

 FUNC_5(VAR_2, "Intel firmware patch completed and activated");

 goto complete;

exit_mfg_disable:

 VAR_7 = FUNC_8(VAR_2, 0, 0);
 if (VAR_7)
  return VAR_7;

 FUNC_5(VAR_2, "Intel firmware patch completed");

 goto complete;

exit_mfg_deactivate:
 FUNC_14(VAR_4);




 VAR_7 = FUNC_8(VAR_2, 1, 0);
 if (VAR_7)
  return VAR_7;

 FUNC_5(VAR_2, "Intel firmware patch completed and deactivated");

complete:



 FUNC_10(VAR_2, 0);

 FUNC_6(VAR_2);
 return 0;
}
