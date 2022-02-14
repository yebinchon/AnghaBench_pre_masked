
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {unsigned int ucode_version; int header_version_minor; int header_version_major; } ;
struct rlc_firmware_header_v2_0 {unsigned int ucode_feature_version; unsigned int save_and_restore_offset; unsigned int clear_state_descriptor_offset; unsigned int avail_scratch_ram_locations; unsigned int reg_restore_list_size; unsigned int reg_list_format_start; unsigned int reg_list_format_separate_start; unsigned int starting_offsets_start; unsigned int reg_list_format_size_bytes; unsigned int reg_list_size_bytes; unsigned int reg_list_format_array_offset_bytes; unsigned int reg_list_array_offset_bytes; TYPE_3__ header; } ;
struct common_firmware_header {unsigned int ucode_size_bytes; } ;
struct amdgpu_firmware_info {size_t ucode_id; TYPE_6__* fw; } ;
struct TYPE_13__ {int is_rlc_v2_1; int reg_list_format_size_bytes; int reg_list_size_bytes; void* save_restore_list_cntl_size_bytes; void* save_restore_list_gpm_size_bytes; void* save_restore_list_srm_size_bytes; void** register_restore; void** register_list_format; void* starting_offsets_start; void* reg_list_format_separate_start; void* reg_list_format_start; void* reg_restore_list_size; void* avail_scratch_ram_locations; void* clear_state_descriptor_offset; void* save_and_restore_offset; } ;
struct TYPE_12__ {TYPE_6__* rlc_fw; TYPE_5__ rlc; void* rlc_feature_version; void* rlc_fw_version; } ;
struct TYPE_9__ {scalar_t__ load_type; int fw_size; struct amdgpu_firmware_info* ucode; } ;
struct amdgpu_device {TYPE_4__ gfx; int dev; TYPE_1__ firmware; TYPE_2__* pdev; } ;
typedef int fw_name ;
struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_10__ {int revision; } ;


 scalar_t__ FUNC_0 (void*,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct amdgpu_device*,int*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 void** FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (unsigned int) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__**,char*,int ) ;
 int FUNC_10 (char*,int,char*,char const*) ;
 int FUNC_11 (char const*,char*) ;

__attribute__((used)) static int FUNC_12(struct amdgpu_device *VAR_8,
       const char *VAR_9)
{
 char VAR_10[30];
 int VAR_11;
 struct amdgpu_firmware_info *VAR_12 = ((void*)0);
 const struct common_firmware_header *VAR_13 = ((void*)0);
 const struct rlc_firmware_header_v2_0 *VAR_14;
 unsigned int *VAR_15 = ((void*)0);
 unsigned int VAR_16 = 0;
 uint16_t VAR_17;
 uint16_t VAR_18;
 uint32_t VAR_19;
 if (!FUNC_11(VAR_9, "picasso") &&
  (((VAR_8->pdev->revision >= 0xC8) && (VAR_8->pdev->revision <= 0xCF)) ||
  ((VAR_8->pdev->revision >= 0xD8) && (VAR_8->pdev->revision <= 0xDF))))
  FUNC_10(VAR_10, sizeof(VAR_10), "amdgpu/%s_rlc_am4.bin", VAR_9);
 else if (!FUNC_11(VAR_9, "raven") && (FUNC_1(VAR_8, &VAR_19) == 0) &&
  (VAR_19 >= 0x41e2b))



  FUNC_10(VAR_10, sizeof(VAR_10), "amdgpu/%s_kicker_rlc.bin", VAR_9);
 else
  FUNC_10(VAR_10, sizeof(VAR_10), "amdgpu/%s_rlc.bin", VAR_9);
 VAR_11 = FUNC_9(&VAR_8->gfx.rlc_fw, VAR_10, VAR_8->dev);
 if (VAR_11)
  goto out;
 VAR_11 = FUNC_2(VAR_8->gfx.rlc_fw);
 VAR_14 = (const struct rlc_firmware_header_v2_0 *)VAR_8->gfx.rlc_fw->data;

 VAR_17 = FUNC_6(VAR_14->header.header_version_major);
 VAR_18 = FUNC_6(VAR_14->header.header_version_minor);
 if (VAR_17 == 2 && VAR_18 == 1)
  VAR_8->gfx.rlc.is_rlc_v2_1 = 1;

 VAR_8->gfx.rlc_fw_version = FUNC_7(VAR_14->header.ucode_version);
 VAR_8->gfx.rlc_feature_version = FUNC_7(VAR_14->ucode_feature_version);
 VAR_8->gfx.rlc.save_and_restore_offset =
   FUNC_7(VAR_14->save_and_restore_offset);
 VAR_8->gfx.rlc.clear_state_descriptor_offset =
   FUNC_7(VAR_14->clear_state_descriptor_offset);
 VAR_8->gfx.rlc.avail_scratch_ram_locations =
   FUNC_7(VAR_14->avail_scratch_ram_locations);
 VAR_8->gfx.rlc.reg_restore_list_size =
   FUNC_7(VAR_14->reg_restore_list_size);
 VAR_8->gfx.rlc.reg_list_format_start =
   FUNC_7(VAR_14->reg_list_format_start);
 VAR_8->gfx.rlc.reg_list_format_separate_start =
   FUNC_7(VAR_14->reg_list_format_separate_start);
 VAR_8->gfx.rlc.starting_offsets_start =
   FUNC_7(VAR_14->starting_offsets_start);
 VAR_8->gfx.rlc.reg_list_format_size_bytes =
   FUNC_7(VAR_14->reg_list_format_size_bytes);
 VAR_8->gfx.rlc.reg_list_size_bytes =
   FUNC_7(VAR_14->reg_list_size_bytes);
 VAR_8->gfx.rlc.register_list_format =
   FUNC_5(VAR_8->gfx.rlc.reg_list_format_size_bytes +
    VAR_8->gfx.rlc.reg_list_size_bytes, VAR_6);
 if (!VAR_8->gfx.rlc.register_list_format) {
  VAR_11 = -VAR_5;
  goto out;
 }

 VAR_15 = (unsigned int *)((uintptr_t)VAR_14 +
   FUNC_7(VAR_14->reg_list_format_array_offset_bytes));
 for (VAR_16 = 0 ; VAR_16 < (VAR_8->gfx.rlc.reg_list_format_size_bytes >> 2); VAR_16++)
  VAR_8->gfx.rlc.register_list_format[VAR_16] = FUNC_7(VAR_15[VAR_16]);

 VAR_8->gfx.rlc.register_restore = VAR_8->gfx.rlc.register_list_format + VAR_16;

 VAR_15 = (unsigned int *)((uintptr_t)VAR_14 +
   FUNC_7(VAR_14->reg_list_array_offset_bytes));
 for (VAR_16 = 0 ; VAR_16 < (VAR_8->gfx.rlc.reg_list_size_bytes >> 2); VAR_16++)
  VAR_8->gfx.rlc.register_restore[VAR_16] = FUNC_7(VAR_15[VAR_16]);

 if (VAR_8->gfx.rlc.is_rlc_v2_1)
  FUNC_4(VAR_8);

 if (VAR_8->firmware.load_type == VAR_0) {
  VAR_12 = &VAR_8->firmware.ucode[VAR_1];
  VAR_12->ucode_id = VAR_1;
  VAR_12->fw = VAR_8->gfx.rlc_fw;
  VAR_13 = (const struct common_firmware_header *)VAR_12->fw->data;
  VAR_8->firmware.fw_size +=
   FUNC_0(FUNC_7(VAR_13->ucode_size_bytes), VAR_7);

  if (VAR_8->gfx.rlc.is_rlc_v2_1 &&
      VAR_8->gfx.rlc.save_restore_list_cntl_size_bytes &&
      VAR_8->gfx.rlc.save_restore_list_gpm_size_bytes &&
      VAR_8->gfx.rlc.save_restore_list_srm_size_bytes) {
   VAR_12 = &VAR_8->firmware.ucode[VAR_2];
   VAR_12->ucode_id = VAR_2;
   VAR_12->fw = VAR_8->gfx.rlc_fw;
   VAR_8->firmware.fw_size +=
    FUNC_0(VAR_8->gfx.rlc.save_restore_list_cntl_size_bytes, VAR_7);

   VAR_12 = &VAR_8->firmware.ucode[VAR_3];
   VAR_12->ucode_id = VAR_3;
   VAR_12->fw = VAR_8->gfx.rlc_fw;
   VAR_8->firmware.fw_size +=
    FUNC_0(VAR_8->gfx.rlc.save_restore_list_gpm_size_bytes, VAR_7);

   VAR_12 = &VAR_8->firmware.ucode[VAR_4];
   VAR_12->ucode_id = VAR_4;
   VAR_12->fw = VAR_8->gfx.rlc_fw;
   VAR_8->firmware.fw_size +=
    FUNC_0(VAR_8->gfx.rlc.save_restore_list_srm_size_bytes, VAR_7);
  }
 }

out:
 if (VAR_11) {
  FUNC_3(VAR_8->dev,
   "gfx9: Failed to load firmware \"%s\"\n",
   VAR_10);
  FUNC_8(VAR_8->gfx.rlc_fw);
  VAR_8->gfx.rlc_fw = ((void*)0);
 }
 return VAR_11;
}
