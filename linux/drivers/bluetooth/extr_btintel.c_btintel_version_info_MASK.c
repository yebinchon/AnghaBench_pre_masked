
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_version {int fw_variant; int fw_revision; scalar_t__ fw_build_yy; int fw_build_ww; int fw_build_num; } ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (struct hci_dev*,char*,char const*,int,int,int ,int ,scalar_t__) ;

void FUNC_1(struct hci_dev *VAR_0, struct intel_version *VAR_1)
{
 const char *VAR_2;

 switch (VAR_1->fw_variant) {
 case 0x06:
  VAR_2 = "Bootloader";
  break;
 case 0x23:
  VAR_2 = "Firmware";
  break;
 default:
  return;
 }

 FUNC_0(VAR_0, "%s revision %u.%u build %u week %u %u",
      VAR_2, VAR_1->fw_revision >> 4, VAR_1->fw_revision & 0x0f,
      VAR_1->fw_build_num, VAR_1->fw_build_ww,
      2000 + VAR_1->fw_build_yy);
}
