
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ucode_version; } ;
struct gfx_firmware_header_v1_0 {int jt_size; int ucode_feature_version; TYPE_1__ header; } ;
struct common_firmware_header {int ucode_size_bytes; } ;
struct amdgpu_firmware_info {size_t ucode_id; TYPE_4__* fw; } ;
struct TYPE_9__ {int mec_fw_version; int mec_feature_version; int mec2_fw_version; int mec2_feature_version; TYPE_4__* mec2_fw; TYPE_4__* mec_fw; } ;
struct TYPE_8__ {scalar_t__ load_type; int fw_size; struct amdgpu_firmware_info* ucode; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_3__ gfx; int dev; TYPE_2__ firmware; } ;
typedef int fw_name ;
struct TYPE_10__ {scalar_t__ data; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__**,char*,int ) ;
 int FUNC_8 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_7,
       const char *VAR_8)
{
 char VAR_9[30];
 int VAR_10;
 struct amdgpu_firmware_info *VAR_11 = ((void*)0);
 const struct common_firmware_header *VAR_12 = ((void*)0);
 const struct gfx_firmware_header_v1_0 *VAR_13;

 FUNC_8(VAR_9, sizeof(VAR_9), "amdgpu/%s_mec.bin", VAR_8);
 VAR_10 = FUNC_7(&VAR_7->gfx.mec_fw, VAR_9, VAR_7->dev);
 if (VAR_10)
  goto out;
 VAR_10 = FUNC_1(VAR_7->gfx.mec_fw);
 if (VAR_10)
  goto out;
 VAR_13 = (const struct gfx_firmware_header_v1_0 *)VAR_7->gfx.mec_fw->data;
 VAR_7->gfx.mec_fw_version = FUNC_5(VAR_13->header.ucode_version);
 VAR_7->gfx.mec_feature_version = FUNC_5(VAR_13->ucode_feature_version);


 FUNC_8(VAR_9, sizeof(VAR_9), "amdgpu/%s_mec2.bin", VAR_8);
 VAR_10 = FUNC_7(&VAR_7->gfx.mec2_fw, VAR_9, VAR_7->dev);
 if (!VAR_10) {
  VAR_10 = FUNC_1(VAR_7->gfx.mec2_fw);
  if (VAR_10)
   goto out;
  VAR_13 = (const struct gfx_firmware_header_v1_0 *)
  VAR_7->gfx.mec2_fw->data;
  VAR_7->gfx.mec2_fw_version =
  FUNC_5(VAR_13->header.ucode_version);
  VAR_7->gfx.mec2_feature_version =
  FUNC_5(VAR_13->ucode_feature_version);
 } else {
  VAR_10 = 0;
  VAR_7->gfx.mec2_fw = ((void*)0);
 }

 if (VAR_7->firmware.load_type == VAR_0) {
  VAR_11 = &VAR_7->firmware.ucode[VAR_1];
  VAR_11->ucode_id = VAR_1;
  VAR_11->fw = VAR_7->gfx.mec_fw;
  VAR_12 = (const struct common_firmware_header *)VAR_11->fw->data;
  VAR_13 = (const struct gfx_firmware_header_v1_0 *)VAR_11->fw->data;
  VAR_7->firmware.fw_size +=
   FUNC_0(FUNC_5(VAR_12->ucode_size_bytes) - FUNC_5(VAR_13->jt_size) * 4, VAR_6);

  VAR_11 = &VAR_7->firmware.ucode[VAR_2];
  VAR_11->ucode_id = VAR_2;
  VAR_11->fw = VAR_7->gfx.mec_fw;
  VAR_7->firmware.fw_size +=
   FUNC_0(FUNC_5(VAR_13->jt_size) * 4, VAR_6);

  if (VAR_7->gfx.mec2_fw) {
   VAR_11 = &VAR_7->firmware.ucode[VAR_3];
   VAR_11->ucode_id = VAR_3;
   VAR_11->fw = VAR_7->gfx.mec2_fw;
   VAR_12 = (const struct common_firmware_header *)VAR_11->fw->data;
   VAR_13 = (const struct gfx_firmware_header_v1_0 *)VAR_11->fw->data;
   VAR_7->firmware.fw_size +=
    FUNC_0(FUNC_5(VAR_12->ucode_size_bytes) - FUNC_5(VAR_13->jt_size) * 4, VAR_6);



   if (VAR_7->asic_type != VAR_5) {
    VAR_11 = &VAR_7->firmware.ucode[VAR_4];
    VAR_11->ucode_id = VAR_4;
    VAR_11->fw = VAR_7->gfx.mec2_fw;
    VAR_7->firmware.fw_size +=
     FUNC_0(FUNC_5(VAR_13->jt_size) * 4,
     VAR_6);
   }
  }
 }

out:
 FUNC_4(VAR_7);
 FUNC_3(VAR_7);
 if (VAR_10) {
  FUNC_2(VAR_7->dev,
   "gfx9: Failed to load firmware \"%s\"\n",
   VAR_9);
  FUNC_6(VAR_7->gfx.mec_fw);
  VAR_7->gfx.mec_fw = ((void*)0);
  FUNC_6(VAR_7->gfx.mec2_fw);
  VAR_7->gfx.mec2_fw = ((void*)0);
 }
 return VAR_10;
}
