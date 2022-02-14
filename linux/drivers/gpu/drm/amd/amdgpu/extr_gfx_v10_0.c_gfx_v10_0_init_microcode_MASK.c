
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wks ;
typedef int uint16_t ;
struct TYPE_11__ {unsigned int ucode_version; int header_version_minor; int header_version_major; } ;
struct rlc_firmware_header_v2_0 {unsigned int ucode_feature_version; unsigned int save_and_restore_offset; unsigned int clear_state_descriptor_offset; unsigned int avail_scratch_ram_locations; unsigned int reg_restore_list_size; unsigned int reg_list_format_start; unsigned int reg_list_format_separate_start; unsigned int starting_offsets_start; unsigned int reg_list_format_size_bytes; unsigned int reg_list_size_bytes; unsigned int reg_list_format_array_offset_bytes; unsigned int reg_list_array_offset_bytes; TYPE_2__ header; } ;
struct TYPE_12__ {unsigned int ucode_version; } ;
struct gfx_firmware_header_v1_0 {unsigned int ucode_feature_version; unsigned int jt_size; TYPE_3__ header; } ;
struct common_firmware_header {unsigned int ucode_size_bytes; } ;
struct amdgpu_firmware_info {size_t ucode_id; TYPE_7__* fw; } ;
struct TYPE_13__ {int is_rlc_v2_1; int save_and_restore_offset; int clear_state_descriptor_offset; int avail_scratch_ram_locations; int reg_restore_list_size; int reg_list_format_start; int reg_list_format_separate_start; int starting_offsets_start; int reg_list_format_size_bytes; int reg_list_size_bytes; int* register_list_format; int* register_restore; int save_restore_list_cntl_size_bytes; int save_restore_list_gpm_size_bytes; int save_restore_list_srm_size_bytes; } ;
struct TYPE_15__ {int pfp_fw_version; int pfp_feature_version; int me_fw_version; int me_feature_version; int ce_fw_version; int ce_feature_version; int rlc_fw_version; int rlc_feature_version; int mec_fw_version; int mec_feature_version; int mec2_fw_version; int mec2_feature_version; TYPE_7__* mec2_fw; TYPE_7__* mec_fw; TYPE_7__* rlc_fw; TYPE_7__* ce_fw; TYPE_7__* me_fw; TYPE_7__* pfp_fw; TYPE_4__ rlc; } ;
struct TYPE_14__ {scalar_t__ load_type; int fw_size; struct amdgpu_firmware_info* ucode; } ;
struct amdgpu_device {int asic_type; TYPE_6__ gfx; int dev; TYPE_5__ firmware; TYPE_1__* pdev; } ;
typedef int fw_name ;
struct TYPE_16__ {scalar_t__ data; } ;
struct TYPE_10__ {int device; int revision; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 () ;



 int FUNC_2 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int* FUNC_8 (int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (char*,int ,int) ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (TYPE_7__**,char*,int ) ;
 int FUNC_14 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_15(struct amdgpu_device *VAR_15)
{
 const char *VAR_16;
 char VAR_17[40];
 char VAR_18[10];
 int VAR_19;
 struct amdgpu_firmware_info *VAR_20 = ((void*)0);
 const struct common_firmware_header *VAR_21 = ((void*)0);
 const struct gfx_firmware_header_v1_0 *VAR_22;
 const struct rlc_firmware_header_v2_0 *VAR_23;
 unsigned int *VAR_24 = ((void*)0);
 unsigned int VAR_25 = 0;
 uint16_t VAR_26;
 uint16_t VAR_27;

 FUNC_2("\n");

 FUNC_11(VAR_18, 0, sizeof(VAR_18));
 switch (VAR_15->asic_type) {
 case 130:
  VAR_16 = "navi10";
  break;
 case 128:
  VAR_16 = "navi14";
  if (!(VAR_15->pdev->device == 0x7340 &&
        VAR_15->pdev->revision != 0x00))
   FUNC_14(VAR_18, sizeof(VAR_18), "_wks");
  break;
 case 129:
  VAR_16 = "navi12";
  break;
 default:
  FUNC_1();
 }

 FUNC_14(VAR_17, sizeof(VAR_17), "amdgpu/%s_pfp%s.bin", VAR_16, VAR_18);
 VAR_19 = FUNC_13(&VAR_15->gfx.pfp_fw, VAR_17, VAR_15->dev);
 if (VAR_19)
  goto out;
 VAR_19 = FUNC_3(VAR_15->gfx.pfp_fw);
 if (VAR_19)
  goto out;
 VAR_22 = (const struct gfx_firmware_header_v1_0 *)VAR_15->gfx.pfp_fw->data;
 VAR_15->gfx.pfp_fw_version = FUNC_10(VAR_22->header.ucode_version);
 VAR_15->gfx.pfp_feature_version = FUNC_10(VAR_22->ucode_feature_version);

 FUNC_14(VAR_17, sizeof(VAR_17), "amdgpu/%s_me%s.bin", VAR_16, VAR_18);
 VAR_19 = FUNC_13(&VAR_15->gfx.me_fw, VAR_17, VAR_15->dev);
 if (VAR_19)
  goto out;
 VAR_19 = FUNC_3(VAR_15->gfx.me_fw);
 if (VAR_19)
  goto out;
 VAR_22 = (const struct gfx_firmware_header_v1_0 *)VAR_15->gfx.me_fw->data;
 VAR_15->gfx.me_fw_version = FUNC_10(VAR_22->header.ucode_version);
 VAR_15->gfx.me_feature_version = FUNC_10(VAR_22->ucode_feature_version);

 FUNC_14(VAR_17, sizeof(VAR_17), "amdgpu/%s_ce%s.bin", VAR_16, VAR_18);
 VAR_19 = FUNC_13(&VAR_15->gfx.ce_fw, VAR_17, VAR_15->dev);
 if (VAR_19)
  goto out;
 VAR_19 = FUNC_3(VAR_15->gfx.ce_fw);
 if (VAR_19)
  goto out;
 VAR_22 = (const struct gfx_firmware_header_v1_0 *)VAR_15->gfx.ce_fw->data;
 VAR_15->gfx.ce_fw_version = FUNC_10(VAR_22->header.ucode_version);
 VAR_15->gfx.ce_feature_version = FUNC_10(VAR_22->ucode_feature_version);

 FUNC_14(VAR_17, sizeof(VAR_17), "amdgpu/%s_rlc.bin", VAR_16);
 VAR_19 = FUNC_13(&VAR_15->gfx.rlc_fw, VAR_17, VAR_15->dev);
 if (VAR_19)
  goto out;
 VAR_19 = FUNC_3(VAR_15->gfx.rlc_fw);
 VAR_23 = (const struct rlc_firmware_header_v2_0 *)VAR_15->gfx.rlc_fw->data;
 VAR_26 = FUNC_9(VAR_23->header.header_version_major);
 VAR_27 = FUNC_9(VAR_23->header.header_version_minor);
 if (VAR_26 == 2 && VAR_27 == 1)
  VAR_15->gfx.rlc.is_rlc_v2_1 = 1;

 VAR_15->gfx.rlc_fw_version = FUNC_10(VAR_23->header.ucode_version);
 VAR_15->gfx.rlc_feature_version = FUNC_10(VAR_23->ucode_feature_version);
 VAR_15->gfx.rlc.save_and_restore_offset =
   FUNC_10(VAR_23->save_and_restore_offset);
 VAR_15->gfx.rlc.clear_state_descriptor_offset =
   FUNC_10(VAR_23->clear_state_descriptor_offset);
 VAR_15->gfx.rlc.avail_scratch_ram_locations =
   FUNC_10(VAR_23->avail_scratch_ram_locations);
 VAR_15->gfx.rlc.reg_restore_list_size =
   FUNC_10(VAR_23->reg_restore_list_size);
 VAR_15->gfx.rlc.reg_list_format_start =
   FUNC_10(VAR_23->reg_list_format_start);
 VAR_15->gfx.rlc.reg_list_format_separate_start =
   FUNC_10(VAR_23->reg_list_format_separate_start);
 VAR_15->gfx.rlc.starting_offsets_start =
   FUNC_10(VAR_23->starting_offsets_start);
 VAR_15->gfx.rlc.reg_list_format_size_bytes =
   FUNC_10(VAR_23->reg_list_format_size_bytes);
 VAR_15->gfx.rlc.reg_list_size_bytes =
   FUNC_10(VAR_23->reg_list_size_bytes);
 VAR_15->gfx.rlc.register_list_format =
   FUNC_8(VAR_15->gfx.rlc.reg_list_format_size_bytes +
    VAR_15->gfx.rlc.reg_list_size_bytes, VAR_13);
 if (!VAR_15->gfx.rlc.register_list_format) {
  VAR_19 = -VAR_12;
  goto out;
 }

 VAR_24 = (unsigned int *)((uintptr_t)VAR_23 +
   FUNC_10(VAR_23->reg_list_format_array_offset_bytes));
 for (VAR_25 = 0 ; VAR_25 < (VAR_23->reg_list_format_size_bytes >> 2); VAR_25++)
  VAR_15->gfx.rlc.register_list_format[VAR_25] = FUNC_10(VAR_24[VAR_25]);

 VAR_15->gfx.rlc.register_restore = VAR_15->gfx.rlc.register_list_format + VAR_25;

 VAR_24 = (unsigned int *)((uintptr_t)VAR_23 +
   FUNC_10(VAR_23->reg_list_array_offset_bytes));
 for (VAR_25 = 0 ; VAR_25 < (VAR_23->reg_list_size_bytes >> 2); VAR_25++)
  VAR_15->gfx.rlc.register_restore[VAR_25] = FUNC_10(VAR_24[VAR_25]);

 if (VAR_15->gfx.rlc.is_rlc_v2_1)
  FUNC_7(VAR_15);

 FUNC_14(VAR_17, sizeof(VAR_17), "amdgpu/%s_mec%s.bin", VAR_16, VAR_18);
 VAR_19 = FUNC_13(&VAR_15->gfx.mec_fw, VAR_17, VAR_15->dev);
 if (VAR_19)
  goto out;
 VAR_19 = FUNC_3(VAR_15->gfx.mec_fw);
 if (VAR_19)
  goto out;
 VAR_22 = (const struct gfx_firmware_header_v1_0 *)VAR_15->gfx.mec_fw->data;
 VAR_15->gfx.mec_fw_version = FUNC_10(VAR_22->header.ucode_version);
 VAR_15->gfx.mec_feature_version = FUNC_10(VAR_22->ucode_feature_version);

 FUNC_14(VAR_17, sizeof(VAR_17), "amdgpu/%s_mec2%s.bin", VAR_16, VAR_18);
 VAR_19 = FUNC_13(&VAR_15->gfx.mec2_fw, VAR_17, VAR_15->dev);
 if (!VAR_19) {
  VAR_19 = FUNC_3(VAR_15->gfx.mec2_fw);
  if (VAR_19)
   goto out;
  VAR_22 = (const struct gfx_firmware_header_v1_0 *)
  VAR_15->gfx.mec2_fw->data;
  VAR_15->gfx.mec2_fw_version =
  FUNC_10(VAR_22->header.ucode_version);
  VAR_15->gfx.mec2_feature_version =
  FUNC_10(VAR_22->ucode_feature_version);
 } else {
  VAR_19 = 0;
  VAR_15->gfx.mec2_fw = ((void*)0);
 }

 if (VAR_15->firmware.load_type == VAR_0) {
  VAR_20 = &VAR_15->firmware.ucode[VAR_7];
  VAR_20->ucode_id = VAR_7;
  VAR_20->fw = VAR_15->gfx.pfp_fw;
  VAR_21 = (const struct common_firmware_header *)VAR_20->fw->data;
  VAR_15->firmware.fw_size +=
   FUNC_0(FUNC_10(VAR_21->ucode_size_bytes), VAR_14);

  VAR_20 = &VAR_15->firmware.ucode[VAR_2];
  VAR_20->ucode_id = VAR_2;
  VAR_20->fw = VAR_15->gfx.me_fw;
  VAR_21 = (const struct common_firmware_header *)VAR_20->fw->data;
  VAR_15->firmware.fw_size +=
   FUNC_0(FUNC_10(VAR_21->ucode_size_bytes), VAR_14);

  VAR_20 = &VAR_15->firmware.ucode[VAR_1];
  VAR_20->ucode_id = VAR_1;
  VAR_20->fw = VAR_15->gfx.ce_fw;
  VAR_21 = (const struct common_firmware_header *)VAR_20->fw->data;
  VAR_15->firmware.fw_size +=
   FUNC_0(FUNC_10(VAR_21->ucode_size_bytes), VAR_14);

  VAR_20 = &VAR_15->firmware.ucode[VAR_8];
  VAR_20->ucode_id = VAR_8;
  VAR_20->fw = VAR_15->gfx.rlc_fw;
  VAR_21 = (const struct common_firmware_header *)VAR_20->fw->data;
  VAR_15->firmware.fw_size +=
   FUNC_0(FUNC_10(VAR_21->ucode_size_bytes), VAR_14);

  if (VAR_15->gfx.rlc.is_rlc_v2_1 &&
      VAR_15->gfx.rlc.save_restore_list_cntl_size_bytes &&
      VAR_15->gfx.rlc.save_restore_list_gpm_size_bytes &&
      VAR_15->gfx.rlc.save_restore_list_srm_size_bytes) {
   VAR_20 = &VAR_15->firmware.ucode[VAR_9];
   VAR_20->ucode_id = VAR_9;
   VAR_20->fw = VAR_15->gfx.rlc_fw;
   VAR_15->firmware.fw_size +=
    FUNC_0(VAR_15->gfx.rlc.save_restore_list_cntl_size_bytes, VAR_14);

   VAR_20 = &VAR_15->firmware.ucode[VAR_10];
   VAR_20->ucode_id = VAR_10;
   VAR_20->fw = VAR_15->gfx.rlc_fw;
   VAR_15->firmware.fw_size +=
    FUNC_0(VAR_15->gfx.rlc.save_restore_list_gpm_size_bytes, VAR_14);

   VAR_20 = &VAR_15->firmware.ucode[VAR_11];
   VAR_20->ucode_id = VAR_11;
   VAR_20->fw = VAR_15->gfx.rlc_fw;
   VAR_15->firmware.fw_size +=
    FUNC_0(VAR_15->gfx.rlc.save_restore_list_srm_size_bytes, VAR_14);
  }

  VAR_20 = &VAR_15->firmware.ucode[VAR_3];
  VAR_20->ucode_id = VAR_3;
  VAR_20->fw = VAR_15->gfx.mec_fw;
  VAR_21 = (const struct common_firmware_header *)VAR_20->fw->data;
  VAR_22 = (const struct gfx_firmware_header_v1_0 *)VAR_20->fw->data;
  VAR_15->firmware.fw_size +=
   FUNC_0(FUNC_10(VAR_21->ucode_size_bytes) -
         FUNC_10(VAR_22->jt_size) * 4, VAR_14);

  VAR_20 = &VAR_15->firmware.ucode[VAR_4];
  VAR_20->ucode_id = VAR_4;
  VAR_20->fw = VAR_15->gfx.mec_fw;
  VAR_15->firmware.fw_size +=
   FUNC_0(FUNC_10(VAR_22->jt_size) * 4, VAR_14);

  if (VAR_15->gfx.mec2_fw) {
   VAR_20 = &VAR_15->firmware.ucode[VAR_5];
   VAR_20->ucode_id = VAR_5;
   VAR_20->fw = VAR_15->gfx.mec2_fw;
   VAR_21 = (const struct common_firmware_header *)VAR_20->fw->data;
   VAR_22 = (const struct gfx_firmware_header_v1_0 *)VAR_20->fw->data;
   VAR_15->firmware.fw_size +=
    FUNC_0(FUNC_10(VAR_21->ucode_size_bytes) -
          FUNC_10(VAR_22->jt_size) * 4,
          VAR_14);
   VAR_20 = &VAR_15->firmware.ucode[VAR_6];
   VAR_20->ucode_id = VAR_6;
   VAR_20->fw = VAR_15->gfx.mec2_fw;
   VAR_15->firmware.fw_size +=
    FUNC_0(FUNC_10(VAR_22->jt_size) * 4,
          VAR_14);
  }
 }

 FUNC_5(VAR_15);
out:
 if (VAR_19) {
  FUNC_4(VAR_15->dev,
   "gfx10: Failed to load firmware \"%s\"\n",
   VAR_17);
  FUNC_12(VAR_15->gfx.pfp_fw);
  VAR_15->gfx.pfp_fw = ((void*)0);
  FUNC_12(VAR_15->gfx.me_fw);
  VAR_15->gfx.me_fw = ((void*)0);
  FUNC_12(VAR_15->gfx.ce_fw);
  VAR_15->gfx.ce_fw = ((void*)0);
  FUNC_12(VAR_15->gfx.rlc_fw);
  VAR_15->gfx.rlc_fw = ((void*)0);
  FUNC_12(VAR_15->gfx.mec_fw);
  VAR_15->gfx.mec_fw = ((void*)0);
  FUNC_12(VAR_15->gfx.mec2_fw);
  VAR_15->gfx.mec2_fw = ((void*)0);
 }

 FUNC_6(VAR_15);

 return VAR_19;
}
