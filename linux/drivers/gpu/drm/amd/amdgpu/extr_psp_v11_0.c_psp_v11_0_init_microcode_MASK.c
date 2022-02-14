
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int ucode_version; int ucode_array_offset_bytes; } ;
struct ta_firmware_header_v1_0 {int ta_ras_offset_bytes; int ta_ras_size_bytes; int ta_ras_ucode_version; TYPE_1__ header; int ta_xgmi_size_bytes; int ta_xgmi_ucode_version; } ;
struct psp_firmware_header_v1_2 {int kdb_offset_bytes; int kdb_size_bytes; } ;
struct psp_firmware_header_v1_1 {int kdb_offset_bytes; int kdb_size_bytes; int toc_offset_bytes; int toc_size_bytes; } ;
struct TYPE_10__ {int header_version_major; int header_version_minor; int ucode_array_offset_bytes; int ucode_size_bytes; int ucode_version; } ;
struct psp_firmware_header_v1_0 {TYPE_6__ header; int ucode_feature_version; int sos_offset_bytes; int sos_size_bytes; } ;
struct psp_context {struct amdgpu_device* adev; } ;
struct TYPE_8__ {int sos_fw_version; int sos_feature_version; int sos_bin_size; int sys_bin_size; int toc_bin_size; int kdb_bin_size; int asd_fw_version; int asd_feature_version; int asd_ucode_size; int ta_xgmi_ucode_version; int ta_xgmi_ucode_size; int ta_fw_version; int ta_ras_ucode_version; int ta_ras_ucode_size; TYPE_3__* sos_fw; TYPE_3__* asd_fw; TYPE_3__* ta_fw; int * ta_xgmi_start_addr; int * ta_ras_start_addr; int * asd_start_addr; int * sys_start_addr; int * kdb_start_addr; int * toc_start_addr; int * sos_start_addr; } ;
struct amdgpu_device {int asic_type; TYPE_2__ psp; int dev; } ;
typedef int fw_name ;
struct TYPE_9__ {scalar_t__ data; } ;


 int FUNC_0 () ;





 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__**,char*,int ) ;
 int FUNC_9 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_10(struct psp_context *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1->adev;
 const char *VAR_3;
 char VAR_4[30];
 int VAR_5 = 0;
 const struct psp_firmware_header_v1_0 *VAR_6;
 const struct psp_firmware_header_v1_1 *VAR_7;
 const struct psp_firmware_header_v1_2 *VAR_8;
 const struct psp_firmware_header_v1_0 *VAR_9;
 const struct ta_firmware_header_v1_0 *VAR_10;

 FUNC_1("\n");

 switch (VAR_2->asic_type) {
 case 128:
  VAR_3 = "vega20";
  break;
 case 131:
  VAR_3 = "navi10";
  break;
 case 129:
  VAR_3 = "navi14";
  break;
 case 130:
  VAR_3 = "navi12";
  break;
 case 132:
  VAR_3 = "arcturus";
  break;
 default:
  FUNC_0();
 }

 FUNC_9(VAR_4, sizeof(VAR_4), "amdgpu/%s_sos.bin", VAR_3);
 VAR_5 = FUNC_8(&VAR_2->psp.sos_fw, VAR_4, VAR_2->dev);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_3(VAR_2->psp.sos_fw);
 if (VAR_5)
  goto out;

 VAR_6 = (const struct psp_firmware_header_v1_0 *)VAR_2->psp.sos_fw->data;
 FUNC_2(&VAR_6->header);

 switch (VAR_6->header.header_version_major) {
 case 1:
  VAR_2->psp.sos_fw_version = FUNC_6(VAR_6->header.ucode_version);
  VAR_2->psp.sos_feature_version = FUNC_6(VAR_6->ucode_feature_version);
  VAR_2->psp.sos_bin_size = FUNC_6(VAR_6->sos_size_bytes);
  VAR_2->psp.sys_bin_size = FUNC_6(VAR_6->sos_offset_bytes);
  VAR_2->psp.sys_start_addr = (uint8_t *)VAR_6 +
    FUNC_6(VAR_6->header.ucode_array_offset_bytes);
  VAR_2->psp.sos_start_addr = (uint8_t *)VAR_2->psp.sys_start_addr +
    FUNC_6(VAR_6->sos_offset_bytes);
  if (VAR_6->header.header_version_minor == 1) {
   VAR_7 = (const struct psp_firmware_header_v1_1 *)VAR_2->psp.sos_fw->data;
   VAR_2->psp.toc_bin_size = FUNC_6(VAR_7->toc_size_bytes);
   VAR_2->psp.toc_start_addr = (uint8_t *)VAR_2->psp.sys_start_addr +
     FUNC_6(VAR_7->toc_offset_bytes);
   VAR_2->psp.kdb_bin_size = FUNC_6(VAR_7->kdb_size_bytes);
   VAR_2->psp.kdb_start_addr = (uint8_t *)VAR_2->psp.sys_start_addr +
     FUNC_6(VAR_7->kdb_offset_bytes);
  }
  if (VAR_6->header.header_version_minor == 2) {
   VAR_8 = (const struct psp_firmware_header_v1_2 *)VAR_2->psp.sos_fw->data;
   VAR_2->psp.kdb_bin_size = FUNC_6(VAR_8->kdb_size_bytes);
   VAR_2->psp.kdb_start_addr = (uint8_t *)VAR_2->psp.sys_start_addr +
          FUNC_6(VAR_8->kdb_offset_bytes);
  }
  break;
 default:
  FUNC_4(VAR_2->dev,
   "Unsupported psp sos firmware\n");
  VAR_5 = -VAR_0;
  goto out;
 }

 FUNC_9(VAR_4, sizeof(VAR_4), "amdgpu/%s_asd.bin", VAR_3);
 VAR_5 = FUNC_8(&VAR_2->psp.asd_fw, VAR_4, VAR_2->dev);
 if (VAR_5)
  goto out1;

 VAR_5 = FUNC_3(VAR_2->psp.asd_fw);
 if (VAR_5)
  goto out1;

 VAR_9 = (const struct psp_firmware_header_v1_0 *)VAR_2->psp.asd_fw->data;
 VAR_2->psp.asd_fw_version = FUNC_6(VAR_9->header.ucode_version);
 VAR_2->psp.asd_feature_version = FUNC_6(VAR_9->ucode_feature_version);
 VAR_2->psp.asd_ucode_size = FUNC_6(VAR_9->header.ucode_size_bytes);
 VAR_2->psp.asd_start_addr = (uint8_t *)VAR_9 +
    FUNC_6(VAR_9->header.ucode_array_offset_bytes);

 switch (VAR_2->asic_type) {
 case 128:
  FUNC_9(VAR_4, sizeof(VAR_4), "amdgpu/%s_ta.bin", VAR_3);
  VAR_5 = FUNC_8(&VAR_2->psp.ta_fw, VAR_4, VAR_2->dev);
  if (VAR_5) {
   FUNC_7(VAR_2->psp.ta_fw);
   VAR_2->psp.ta_fw = ((void*)0);
   FUNC_5(VAR_2->dev,
     "psp v11.0: Failed to load firmware \"%s\"\n", VAR_4);
  } else {
   VAR_5 = FUNC_3(VAR_2->psp.ta_fw);
   if (VAR_5)
    goto out2;

   VAR_10 = (const struct ta_firmware_header_v1_0 *)VAR_2->psp.ta_fw->data;
   VAR_2->psp.ta_xgmi_ucode_version = FUNC_6(VAR_10->ta_xgmi_ucode_version);
   VAR_2->psp.ta_xgmi_ucode_size = FUNC_6(VAR_10->ta_xgmi_size_bytes);
   VAR_2->psp.ta_xgmi_start_addr = (uint8_t *)VAR_10 +
    FUNC_6(VAR_10->header.ucode_array_offset_bytes);
   VAR_2->psp.ta_fw_version = FUNC_6(VAR_10->header.ucode_version);
   VAR_2->psp.ta_ras_ucode_version = FUNC_6(VAR_10->ta_ras_ucode_version);
   VAR_2->psp.ta_ras_ucode_size = FUNC_6(VAR_10->ta_ras_size_bytes);
   VAR_2->psp.ta_ras_start_addr = (uint8_t *)VAR_2->psp.ta_xgmi_start_addr +
    FUNC_6(VAR_10->ta_ras_offset_bytes);
  }
  break;
 case 131:
 case 129:
 case 130:
 case 132:
  break;
 default:
  FUNC_0();
 }

 return 0;

out2:
 FUNC_7(VAR_2->psp.ta_fw);
 VAR_2->psp.ta_fw = ((void*)0);
out1:
 FUNC_7(VAR_2->psp.asd_fw);
 VAR_2->psp.asd_fw = ((void*)0);
out:
 FUNC_4(VAR_2->dev,
  "psp v11.0: Failed to load firmware \"%s\"\n", VAR_4);
 FUNC_7(VAR_2->psp.sos_fw);
 VAR_2->psp.sos_fw = ((void*)0);

 return VAR_5;
}
