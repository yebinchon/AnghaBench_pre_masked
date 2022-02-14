
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ucode_version; } ;
struct rlc_firmware_header_v1_0 {int ucode_feature_version; TYPE_2__ header; } ;
struct TYPE_7__ {int ucode_version; } ;
struct gfx_firmware_header_v1_0 {int ucode_feature_version; TYPE_1__ header; } ;
struct TYPE_9__ {TYPE_4__* rlc_fw; TYPE_4__* ce_fw; TYPE_4__* me_fw; TYPE_4__* pfp_fw; void* rlc_feature_version; void* rlc_fw_version; void* ce_feature_version; void* ce_fw_version; void* me_feature_version; void* me_fw_version; void* pfp_feature_version; void* pfp_fw_version; } ;
struct amdgpu_device {int asic_type; TYPE_3__ gfx; int dev; } ;
typedef int fw_name ;
struct TYPE_10__ {scalar_t__ data; } ;


 int FUNC_0 () ;





 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_4__*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__**,char*,int ) ;
 int FUNC_7 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_0)
{
 const char *VAR_1;
 char VAR_2[30];
 int VAR_3;
 const struct gfx_firmware_header_v1_0 *VAR_4;
 const struct rlc_firmware_header_v1_0 *VAR_5;

 FUNC_1("\n");

 switch (VAR_0->asic_type) {
 case 129:
  VAR_1 = "tahiti";
  break;
 case 130:
  VAR_1 = "pitcairn";
  break;
 case 128:
  VAR_1 = "verde";
  break;
 case 131:
  VAR_1 = "oland";
  break;
 case 132:
  VAR_1 = "hainan";
  break;
 default: FUNC_0();
 }

 FUNC_7(VAR_2, sizeof(VAR_2), "amdgpu/%s_pfp.bin", VAR_1);
 VAR_3 = FUNC_6(&VAR_0->gfx.pfp_fw, VAR_2, VAR_0->dev);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_2(VAR_0->gfx.pfp_fw);
 if (VAR_3)
  goto out;
 VAR_4 = (const struct gfx_firmware_header_v1_0 *)VAR_0->gfx.pfp_fw->data;
 VAR_0->gfx.pfp_fw_version = FUNC_3(VAR_4->header.ucode_version);
 VAR_0->gfx.pfp_feature_version = FUNC_3(VAR_4->ucode_feature_version);

 FUNC_7(VAR_2, sizeof(VAR_2), "amdgpu/%s_me.bin", VAR_1);
 VAR_3 = FUNC_6(&VAR_0->gfx.me_fw, VAR_2, VAR_0->dev);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_2(VAR_0->gfx.me_fw);
 if (VAR_3)
  goto out;
 VAR_4 = (const struct gfx_firmware_header_v1_0 *)VAR_0->gfx.me_fw->data;
 VAR_0->gfx.me_fw_version = FUNC_3(VAR_4->header.ucode_version);
 VAR_0->gfx.me_feature_version = FUNC_3(VAR_4->ucode_feature_version);

 FUNC_7(VAR_2, sizeof(VAR_2), "amdgpu/%s_ce.bin", VAR_1);
 VAR_3 = FUNC_6(&VAR_0->gfx.ce_fw, VAR_2, VAR_0->dev);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_2(VAR_0->gfx.ce_fw);
 if (VAR_3)
  goto out;
 VAR_4 = (const struct gfx_firmware_header_v1_0 *)VAR_0->gfx.ce_fw->data;
 VAR_0->gfx.ce_fw_version = FUNC_3(VAR_4->header.ucode_version);
 VAR_0->gfx.ce_feature_version = FUNC_3(VAR_4->ucode_feature_version);

 FUNC_7(VAR_2, sizeof(VAR_2), "amdgpu/%s_rlc.bin", VAR_1);
 VAR_3 = FUNC_6(&VAR_0->gfx.rlc_fw, VAR_2, VAR_0->dev);
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_2(VAR_0->gfx.rlc_fw);
 VAR_5 = (const struct rlc_firmware_header_v1_0 *)VAR_0->gfx.rlc_fw->data;
 VAR_0->gfx.rlc_fw_version = FUNC_3(VAR_5->header.ucode_version);
 VAR_0->gfx.rlc_feature_version = FUNC_3(VAR_5->ucode_feature_version);

out:
 if (VAR_3) {
  FUNC_4("gfx6: Failed to load firmware \"%s\"\n", VAR_2);
  FUNC_5(VAR_0->gfx.pfp_fw);
  VAR_0->gfx.pfp_fw = ((void*)0);
  FUNC_5(VAR_0->gfx.me_fw);
  VAR_0->gfx.me_fw = ((void*)0);
  FUNC_5(VAR_0->gfx.ce_fw);
  VAR_0->gfx.ce_fw = ((void*)0);
  FUNC_5(VAR_0->gfx.rlc_fw);
  VAR_0->gfx.rlc_fw = ((void*)0);
 }
 return VAR_3;
}
