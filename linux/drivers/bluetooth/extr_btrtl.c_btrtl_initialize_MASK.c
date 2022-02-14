
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_local_version {int lmp_subver; int hci_rev; int hci_ver; int lmp_ver; } ;
struct hci_dev {int bus; } ;
struct btrtl_device_info {int fw_len; int cfg_len; TYPE_1__* ic_info; int cfg_data; int fw_data; int rom_version; } ;
typedef int cfg_name ;
struct TYPE_2__ {char* fw_name; char* cfg_name; scalar_t__ config_needed; scalar_t__ has_rom_version; } ;


 int VAR_0 ;
 struct btrtl_device_info* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct btrtl_device_info*) ;
 TYPE_1__* FUNC_4 (int ,int ,int ,int ) ;
 struct sk_buff* FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct btrtl_device_info* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct hci_dev*,char*,char*) ;
 int FUNC_10 (struct hci_dev*,char*,int ,int ,int ,...) ;
 void* FUNC_11 (struct hci_dev*,char*,int *) ;
 int FUNC_12 (struct hci_dev*,int *) ;
 int FUNC_13 (char*,int,char*,char*,...) ;

struct btrtl_device_info *FUNC_14(struct hci_dev *VAR_2,
        const char *VAR_3)
{
 struct btrtl_device_info *VAR_4;
 struct sk_buff *VAR_5;
 struct hci_rp_read_local_version *VAR_6;
 char VAR_7[40];
 u16 VAR_8, VAR_9;
 u8 VAR_10;
 int VAR_11;

 VAR_4 = FUNC_7(sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  VAR_11 = -VAR_0;
  goto err_alloc;
 }

 VAR_5 = FUNC_5(VAR_2);
 if (FUNC_1(VAR_5)) {
  VAR_11 = FUNC_2(VAR_5);
  goto err_free;
 }

 VAR_6 = (struct hci_rp_read_local_version *)VAR_5->data;
 FUNC_10(VAR_2, "examining hci_ver=%02x hci_rev=%04x lmp_ver=%02x lmp_subver=%04x",
       VAR_6->hci_ver, VAR_6->hci_rev,
       VAR_6->lmp_ver, VAR_6->lmp_subver);

 VAR_10 = VAR_6->hci_ver;
 VAR_8 = FUNC_8(VAR_6->hci_rev);
 VAR_9 = FUNC_8(VAR_6->lmp_subver);
 FUNC_6(VAR_5);

 VAR_4->ic_info = FUNC_4(VAR_9, VAR_8, VAR_10,
         VAR_2->bus);

 if (!VAR_4->ic_info) {
  FUNC_10(VAR_2, "unknown IC info, lmp subver %04x, hci rev %04x, hci ver %04x",
       VAR_9, VAR_8, VAR_10);
  return VAR_4;
 }

 if (VAR_4->ic_info->has_rom_version) {
  VAR_11 = FUNC_12(VAR_2, &VAR_4->rom_version);
  if (VAR_11)
   goto err_free;
 }

 VAR_4->fw_len = FUNC_11(VAR_2, VAR_4->ic_info->fw_name,
       &VAR_4->fw_data);
 if (VAR_4->fw_len < 0) {
  FUNC_9(VAR_2, "firmware file %s not found",
       VAR_4->ic_info->fw_name);
  VAR_11 = VAR_4->fw_len;
  goto err_free;
 }

 if (VAR_4->ic_info->cfg_name) {
  if (VAR_3) {
   FUNC_13(VAR_7, sizeof(VAR_7), "%s-%s.bin",
     VAR_4->ic_info->cfg_name, VAR_3);
  } else {
   FUNC_13(VAR_7, sizeof(VAR_7), "%s.bin",
     VAR_4->ic_info->cfg_name);
  }
  VAR_4->cfg_len = FUNC_11(VAR_2, VAR_7,
         &VAR_4->cfg_data);
  if (VAR_4->ic_info->config_needed &&
      VAR_4->cfg_len <= 0) {
   FUNC_9(VAR_2, "mandatory config file %s not found",
        VAR_4->ic_info->cfg_name);
   VAR_11 = VAR_4->cfg_len;
   goto err_free;
  }
 }

 return VAR_4;

err_free:
 FUNC_3(VAR_4);
err_alloc:
 return FUNC_0(VAR_11);
}
