
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ucode_version; } ;
struct gfx_firmware_header_v1_0 {int ucode_feature_version; TYPE_1__ header; } ;
struct common_firmware_header {int ucode_size_bytes; } ;
struct amdgpu_firmware_info {size_t ucode_id; TYPE_4__* fw; } ;
struct TYPE_9__ {TYPE_4__* ce_fw; TYPE_4__* me_fw; TYPE_4__* pfp_fw; void* ce_feature_version; void* ce_fw_version; void* me_feature_version; void* me_fw_version; void* pfp_feature_version; void* pfp_fw_version; } ;
struct TYPE_8__ {scalar_t__ load_type; int fw_size; struct amdgpu_firmware_info* ucode; } ;
struct amdgpu_device {TYPE_3__ gfx; int dev; TYPE_2__ firmware; } ;
typedef int fw_name ;
struct TYPE_10__ {scalar_t__ data; } ;


 scalar_t__ FUNC_0 (void*,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,char*,char*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__**,char*,int ) ;
 int FUNC_6 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_5,
       const char *VAR_6)
{
 char VAR_7[30];
 int VAR_8;
 struct amdgpu_firmware_info *VAR_9 = ((void*)0);
 const struct common_firmware_header *VAR_10 = ((void*)0);
 const struct gfx_firmware_header_v1_0 *VAR_11;

 FUNC_6(VAR_7, sizeof(VAR_7), "amdgpu/%s_pfp.bin", VAR_6);
 VAR_8 = FUNC_5(&VAR_5->gfx.pfp_fw, VAR_7, VAR_5->dev);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_1(VAR_5->gfx.pfp_fw);
 if (VAR_8)
  goto out;
 VAR_11 = (const struct gfx_firmware_header_v1_0 *)VAR_5->gfx.pfp_fw->data;
 VAR_5->gfx.pfp_fw_version = FUNC_3(VAR_11->header.ucode_version);
 VAR_5->gfx.pfp_feature_version = FUNC_3(VAR_11->ucode_feature_version);

 FUNC_6(VAR_7, sizeof(VAR_7), "amdgpu/%s_me.bin", VAR_6);
 VAR_8 = FUNC_5(&VAR_5->gfx.me_fw, VAR_7, VAR_5->dev);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_1(VAR_5->gfx.me_fw);
 if (VAR_8)
  goto out;
 VAR_11 = (const struct gfx_firmware_header_v1_0 *)VAR_5->gfx.me_fw->data;
 VAR_5->gfx.me_fw_version = FUNC_3(VAR_11->header.ucode_version);
 VAR_5->gfx.me_feature_version = FUNC_3(VAR_11->ucode_feature_version);

 FUNC_6(VAR_7, sizeof(VAR_7), "amdgpu/%s_ce.bin", VAR_6);
 VAR_8 = FUNC_5(&VAR_5->gfx.ce_fw, VAR_7, VAR_5->dev);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_1(VAR_5->gfx.ce_fw);
 if (VAR_8)
  goto out;
 VAR_11 = (const struct gfx_firmware_header_v1_0 *)VAR_5->gfx.ce_fw->data;
 VAR_5->gfx.ce_fw_version = FUNC_3(VAR_11->header.ucode_version);
 VAR_5->gfx.ce_feature_version = FUNC_3(VAR_11->ucode_feature_version);

 if (VAR_5->firmware.load_type == VAR_0) {
  VAR_9 = &VAR_5->firmware.ucode[VAR_3];
  VAR_9->ucode_id = VAR_3;
  VAR_9->fw = VAR_5->gfx.pfp_fw;
  VAR_10 = (const struct common_firmware_header *)VAR_9->fw->data;
  VAR_5->firmware.fw_size +=
   FUNC_0(FUNC_3(VAR_10->ucode_size_bytes), VAR_4);

  VAR_9 = &VAR_5->firmware.ucode[VAR_2];
  VAR_9->ucode_id = VAR_2;
  VAR_9->fw = VAR_5->gfx.me_fw;
  VAR_10 = (const struct common_firmware_header *)VAR_9->fw->data;
  VAR_5->firmware.fw_size +=
   FUNC_0(FUNC_3(VAR_10->ucode_size_bytes), VAR_4);

  VAR_9 = &VAR_5->firmware.ucode[VAR_1];
  VAR_9->ucode_id = VAR_1;
  VAR_9->fw = VAR_5->gfx.ce_fw;
  VAR_10 = (const struct common_firmware_header *)VAR_9->fw->data;
  VAR_5->firmware.fw_size +=
   FUNC_0(FUNC_3(VAR_10->ucode_size_bytes), VAR_4);
 }

out:
 if (VAR_8) {
  FUNC_2(VAR_5->dev,
   "gfx9: Failed to load firmware \"%s\"\n",
   VAR_7);
  FUNC_4(VAR_5->gfx.pfp_fw);
  VAR_5->gfx.pfp_fw = ((void*)0);
  FUNC_4(VAR_5->gfx.me_fw);
  VAR_5->gfx.me_fw = ((void*)0);
  FUNC_4(VAR_5->gfx.ce_fw);
  VAR_5->gfx.ce_fw = ((void*)0);
 }
 return VAR_8;
}
