
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


struct TYPE_11__ {int ucode_version; } ;
struct rlc_firmware_header_v2_0 {int ucode_feature_version; int save_and_restore_offset; int clear_state_descriptor_offset; int avail_scratch_ram_locations; int reg_restore_list_size; int reg_list_format_start; int reg_list_format_separate_start; int starting_offsets_start; int reg_list_format_size_bytes; int reg_list_size_bytes; int reg_list_format_array_offset_bytes; int reg_list_array_offset_bytes; TYPE_2__ header; } ;
struct TYPE_13__ {int ucode_version; } ;
struct gfx_firmware_header_v1_0 {int ucode_feature_version; int jt_size; TYPE_4__ header; } ;
struct common_firmware_header {int ucode_size_bytes; } ;
struct amdgpu_firmware_info {size_t ucode_id; TYPE_7__* fw; } ;
struct TYPE_12__ {int save_and_restore_offset; int clear_state_descriptor_offset; int avail_scratch_ram_locations; int reg_restore_list_size; int reg_list_format_start; int reg_list_format_separate_start; int starting_offsets_start; int reg_list_format_size_bytes; int reg_list_size_bytes; int* register_list_format; int* register_restore; } ;
struct TYPE_15__ {int pfp_fw_version; int pfp_feature_version; int me_fw_version; int me_feature_version; int ce_fw_version; int ce_feature_version; int rlc_fw_version; int rlc_feature_version; int mec_fw_version; int mec_feature_version; int mec2_fw_version; int mec2_feature_version; TYPE_7__* mec2_fw; TYPE_7__* mec_fw; TYPE_7__* rlc_fw; TYPE_7__* ce_fw; TYPE_7__* me_fw; TYPE_7__* pfp_fw; TYPE_3__ rlc; } ;
struct TYPE_14__ {int fw_size; struct amdgpu_firmware_info* ucode; } ;
struct TYPE_10__ {int chained_ib_support; } ;
struct amdgpu_device {int asic_type; TYPE_6__ gfx; int dev; TYPE_5__ firmware; TYPE_1__ virt; } ;
typedef int fw_name ;
struct TYPE_16__ {scalar_t__ data; } ;


 scalar_t__ FUNC_0 (int,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (int ,char*,char*) ;
 int* FUNC_7 (int,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_7__**,char*,int ) ;
 int FUNC_11 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_12(struct amdgpu_device *VAR_11)
{
 const char *VAR_12;
 char VAR_13[30];
 int VAR_14;
 struct amdgpu_firmware_info *VAR_15 = ((void*)0);
 const struct common_firmware_header *VAR_16 = ((void*)0);
 const struct gfx_firmware_header_v1_0 *VAR_17;
 const struct rlc_firmware_header_v2_0 *VAR_18;
 unsigned int *VAR_19 = ((void*)0), VAR_20;

 FUNC_2("\n");

 switch (VAR_11->asic_type) {
 case 129:
  VAR_12 = "topaz";
  break;
 case 130:
  VAR_12 = "tonga";
  break;
 case 136:
  VAR_12 = "carrizo";
  break;
 case 135:
  VAR_12 = "fiji";
  break;
 case 131:
  VAR_12 = "stoney";
  break;
 case 134:
  VAR_12 = "polaris10";
  break;
 case 133:
  VAR_12 = "polaris11";
  break;
 case 132:
  VAR_12 = "polaris12";
  break;
 case 128:
  VAR_12 = "vegam";
  break;
 default:
  FUNC_1();
 }

 if (VAR_11->asic_type >= 134 && VAR_11->asic_type <= 132) {
  FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_pfp_2.bin", VAR_12);
  VAR_14 = FUNC_10(&VAR_11->gfx.pfp_fw, VAR_13, VAR_11->dev);
  if (VAR_14 == -VAR_7) {
   FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_pfp.bin", VAR_12);
   VAR_14 = FUNC_10(&VAR_11->gfx.pfp_fw, VAR_13, VAR_11->dev);
  }
 } else {
  FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_pfp.bin", VAR_12);
  VAR_14 = FUNC_10(&VAR_11->gfx.pfp_fw, VAR_13, VAR_11->dev);
 }
 if (VAR_14)
  goto out;
 VAR_14 = FUNC_5(VAR_11->gfx.pfp_fw);
 if (VAR_14)
  goto out;
 VAR_17 = (const struct gfx_firmware_header_v1_0 *)VAR_11->gfx.pfp_fw->data;
 VAR_11->gfx.pfp_fw_version = FUNC_8(VAR_17->header.ucode_version);
 VAR_11->gfx.pfp_feature_version = FUNC_8(VAR_17->ucode_feature_version);

 if (VAR_11->asic_type >= 134 && VAR_11->asic_type <= 132) {
  FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_me_2.bin", VAR_12);
  VAR_14 = FUNC_10(&VAR_11->gfx.me_fw, VAR_13, VAR_11->dev);
  if (VAR_14 == -VAR_7) {
   FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_me.bin", VAR_12);
   VAR_14 = FUNC_10(&VAR_11->gfx.me_fw, VAR_13, VAR_11->dev);
  }
 } else {
  FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_me.bin", VAR_12);
  VAR_14 = FUNC_10(&VAR_11->gfx.me_fw, VAR_13, VAR_11->dev);
 }
 if (VAR_14)
  goto out;
 VAR_14 = FUNC_5(VAR_11->gfx.me_fw);
 if (VAR_14)
  goto out;
 VAR_17 = (const struct gfx_firmware_header_v1_0 *)VAR_11->gfx.me_fw->data;
 VAR_11->gfx.me_fw_version = FUNC_8(VAR_17->header.ucode_version);

 VAR_11->gfx.me_feature_version = FUNC_8(VAR_17->ucode_feature_version);

 if (VAR_11->asic_type >= 134 && VAR_11->asic_type <= 132) {
  FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_ce_2.bin", VAR_12);
  VAR_14 = FUNC_10(&VAR_11->gfx.ce_fw, VAR_13, VAR_11->dev);
  if (VAR_14 == -VAR_7) {
   FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_ce.bin", VAR_12);
   VAR_14 = FUNC_10(&VAR_11->gfx.ce_fw, VAR_13, VAR_11->dev);
  }
 } else {
  FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_ce.bin", VAR_12);
  VAR_14 = FUNC_10(&VAR_11->gfx.ce_fw, VAR_13, VAR_11->dev);
 }
 if (VAR_14)
  goto out;
 VAR_14 = FUNC_5(VAR_11->gfx.ce_fw);
 if (VAR_14)
  goto out;
 VAR_17 = (const struct gfx_firmware_header_v1_0 *)VAR_11->gfx.ce_fw->data;
 VAR_11->gfx.ce_fw_version = FUNC_8(VAR_17->header.ucode_version);
 VAR_11->gfx.ce_feature_version = FUNC_8(VAR_17->ucode_feature_version);





 if (VAR_11->gfx.ce_feature_version >= 46 &&
     VAR_11->gfx.pfp_feature_version >= 46) {
  VAR_11->virt.chained_ib_support = 1;
  FUNC_3("Chained IB support enabled!\n");
 } else
  VAR_11->virt.chained_ib_support = 0;

 FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_rlc.bin", VAR_12);
 VAR_14 = FUNC_10(&VAR_11->gfx.rlc_fw, VAR_13, VAR_11->dev);
 if (VAR_14)
  goto out;
 VAR_14 = FUNC_5(VAR_11->gfx.rlc_fw);
 VAR_18 = (const struct rlc_firmware_header_v2_0 *)VAR_11->gfx.rlc_fw->data;
 VAR_11->gfx.rlc_fw_version = FUNC_8(VAR_18->header.ucode_version);
 VAR_11->gfx.rlc_feature_version = FUNC_8(VAR_18->ucode_feature_version);

 VAR_11->gfx.rlc.save_and_restore_offset =
   FUNC_8(VAR_18->save_and_restore_offset);
 VAR_11->gfx.rlc.clear_state_descriptor_offset =
   FUNC_8(VAR_18->clear_state_descriptor_offset);
 VAR_11->gfx.rlc.avail_scratch_ram_locations =
   FUNC_8(VAR_18->avail_scratch_ram_locations);
 VAR_11->gfx.rlc.reg_restore_list_size =
   FUNC_8(VAR_18->reg_restore_list_size);
 VAR_11->gfx.rlc.reg_list_format_start =
   FUNC_8(VAR_18->reg_list_format_start);
 VAR_11->gfx.rlc.reg_list_format_separate_start =
   FUNC_8(VAR_18->reg_list_format_separate_start);
 VAR_11->gfx.rlc.starting_offsets_start =
   FUNC_8(VAR_18->starting_offsets_start);
 VAR_11->gfx.rlc.reg_list_format_size_bytes =
   FUNC_8(VAR_18->reg_list_format_size_bytes);
 VAR_11->gfx.rlc.reg_list_size_bytes =
   FUNC_8(VAR_18->reg_list_size_bytes);

 VAR_11->gfx.rlc.register_list_format =
   FUNC_7(VAR_11->gfx.rlc.reg_list_format_size_bytes +
     VAR_11->gfx.rlc.reg_list_size_bytes, VAR_9);

 if (!VAR_11->gfx.rlc.register_list_format) {
  VAR_14 = -VAR_8;
  goto out;
 }

 VAR_19 = (unsigned int *)((uintptr_t)VAR_18 +
   FUNC_8(VAR_18->reg_list_format_array_offset_bytes));
 for (VAR_20 = 0 ; VAR_20 < (VAR_11->gfx.rlc.reg_list_format_size_bytes >> 2); VAR_20++)
  VAR_11->gfx.rlc.register_list_format[VAR_20] = FUNC_8(VAR_19[VAR_20]);

 VAR_11->gfx.rlc.register_restore = VAR_11->gfx.rlc.register_list_format + VAR_20;

 VAR_19 = (unsigned int *)((uintptr_t)VAR_18 +
   FUNC_8(VAR_18->reg_list_array_offset_bytes));
 for (VAR_20 = 0 ; VAR_20 < (VAR_11->gfx.rlc.reg_list_size_bytes >> 2); VAR_20++)
  VAR_11->gfx.rlc.register_restore[VAR_20] = FUNC_8(VAR_19[VAR_20]);

 if (VAR_11->asic_type >= 134 && VAR_11->asic_type <= 132) {
  FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_mec_2.bin", VAR_12);
  VAR_14 = FUNC_10(&VAR_11->gfx.mec_fw, VAR_13, VAR_11->dev);
  if (VAR_14 == -VAR_7) {
   FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_mec.bin", VAR_12);
   VAR_14 = FUNC_10(&VAR_11->gfx.mec_fw, VAR_13, VAR_11->dev);
  }
 } else {
  FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_mec.bin", VAR_12);
  VAR_14 = FUNC_10(&VAR_11->gfx.mec_fw, VAR_13, VAR_11->dev);
 }
 if (VAR_14)
  goto out;
 VAR_14 = FUNC_5(VAR_11->gfx.mec_fw);
 if (VAR_14)
  goto out;
 VAR_17 = (const struct gfx_firmware_header_v1_0 *)VAR_11->gfx.mec_fw->data;
 VAR_11->gfx.mec_fw_version = FUNC_8(VAR_17->header.ucode_version);
 VAR_11->gfx.mec_feature_version = FUNC_8(VAR_17->ucode_feature_version);

 if ((VAR_11->asic_type != 131) &&
     (VAR_11->asic_type != 129)) {
  if (VAR_11->asic_type >= 134 && VAR_11->asic_type <= 132) {
   FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_mec2_2.bin", VAR_12);
   VAR_14 = FUNC_10(&VAR_11->gfx.mec2_fw, VAR_13, VAR_11->dev);
   if (VAR_14 == -VAR_7) {
    FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_mec2.bin", VAR_12);
    VAR_14 = FUNC_10(&VAR_11->gfx.mec2_fw, VAR_13, VAR_11->dev);
   }
  } else {
   FUNC_11(VAR_13, sizeof(VAR_13), "amdgpu/%s_mec2.bin", VAR_12);
   VAR_14 = FUNC_10(&VAR_11->gfx.mec2_fw, VAR_13, VAR_11->dev);
  }
  if (!VAR_14) {
   VAR_14 = FUNC_5(VAR_11->gfx.mec2_fw);
   if (VAR_14)
    goto out;
   VAR_17 = (const struct gfx_firmware_header_v1_0 *)
    VAR_11->gfx.mec2_fw->data;
   VAR_11->gfx.mec2_fw_version =
    FUNC_8(VAR_17->header.ucode_version);
   VAR_11->gfx.mec2_feature_version =
    FUNC_8(VAR_17->ucode_feature_version);
  } else {
   VAR_14 = 0;
   VAR_11->gfx.mec2_fw = ((void*)0);
  }
 }

 VAR_15 = &VAR_11->firmware.ucode[VAR_4];
 VAR_15->ucode_id = VAR_4;
 VAR_15->fw = VAR_11->gfx.pfp_fw;
 VAR_16 = (const struct common_firmware_header *)VAR_15->fw->data;
 VAR_11->firmware.fw_size +=
  FUNC_0(FUNC_8(VAR_16->ucode_size_bytes), VAR_10);

 VAR_15 = &VAR_11->firmware.ucode[VAR_1];
 VAR_15->ucode_id = VAR_1;
 VAR_15->fw = VAR_11->gfx.me_fw;
 VAR_16 = (const struct common_firmware_header *)VAR_15->fw->data;
 VAR_11->firmware.fw_size +=
  FUNC_0(FUNC_8(VAR_16->ucode_size_bytes), VAR_10);

 VAR_15 = &VAR_11->firmware.ucode[VAR_0];
 VAR_15->ucode_id = VAR_0;
 VAR_15->fw = VAR_11->gfx.ce_fw;
 VAR_16 = (const struct common_firmware_header *)VAR_15->fw->data;
 VAR_11->firmware.fw_size +=
  FUNC_0(FUNC_8(VAR_16->ucode_size_bytes), VAR_10);

 VAR_15 = &VAR_11->firmware.ucode[VAR_5];
 VAR_15->ucode_id = VAR_5;
 VAR_15->fw = VAR_11->gfx.rlc_fw;
 VAR_16 = (const struct common_firmware_header *)VAR_15->fw->data;
 VAR_11->firmware.fw_size +=
  FUNC_0(FUNC_8(VAR_16->ucode_size_bytes), VAR_10);

 VAR_15 = &VAR_11->firmware.ucode[VAR_2];
 VAR_15->ucode_id = VAR_2;
 VAR_15->fw = VAR_11->gfx.mec_fw;
 VAR_16 = (const struct common_firmware_header *)VAR_15->fw->data;
 VAR_11->firmware.fw_size +=
  FUNC_0(FUNC_8(VAR_16->ucode_size_bytes), VAR_10);


 VAR_17 = (const struct gfx_firmware_header_v1_0 *)VAR_11->gfx.mec_fw->data;
 VAR_11->firmware.fw_size +=
  FUNC_0(FUNC_8(VAR_17->jt_size) << 2, VAR_10);

 if (FUNC_4(VAR_11)) {
  VAR_15 = &VAR_11->firmware.ucode[VAR_6];
  VAR_15->ucode_id = VAR_6;
  VAR_15->fw = VAR_11->gfx.mec_fw;
  VAR_11->firmware.fw_size +=
   FUNC_0(FUNC_8(64 * VAR_10), VAR_10);
 }

 if (VAR_11->gfx.mec2_fw) {
  VAR_15 = &VAR_11->firmware.ucode[VAR_3];
  VAR_15->ucode_id = VAR_3;
  VAR_15->fw = VAR_11->gfx.mec2_fw;
  VAR_16 = (const struct common_firmware_header *)VAR_15->fw->data;
  VAR_11->firmware.fw_size +=
   FUNC_0(FUNC_8(VAR_16->ucode_size_bytes), VAR_10);
 }

out:
 if (VAR_14) {
  FUNC_6(VAR_11->dev,
   "gfx8: Failed to load firmware \"%s\"\n",
   VAR_13);
  FUNC_9(VAR_11->gfx.pfp_fw);
  VAR_11->gfx.pfp_fw = ((void*)0);
  FUNC_9(VAR_11->gfx.me_fw);
  VAR_11->gfx.me_fw = ((void*)0);
  FUNC_9(VAR_11->gfx.ce_fw);
  VAR_11->gfx.ce_fw = ((void*)0);
  FUNC_9(VAR_11->gfx.rlc_fw);
  VAR_11->gfx.rlc_fw = ((void*)0);
  FUNC_9(VAR_11->gfx.mec_fw);
  VAR_11->gfx.mec_fw = ((void*)0);
  FUNC_9(VAR_11->gfx.mec2_fw);
  VAR_11->gfx.mec2_fw = ((void*)0);
 }
 return VAR_14;
}
