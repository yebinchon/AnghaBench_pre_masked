
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int me_fw_write_wait; int mec_fw_write_wait; int mec_fw_version; int mec_feature_version; int pfp_fw_version; int pfp_feature_version; int me_fw_version; int me_feature_version; } ;
struct amdgpu_device {int asic_type; TYPE_1__ gfx; } ;






 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0)
{
 VAR_0->gfx.me_fw_write_wait = 0;
 VAR_0->gfx.mec_fw_write_wait = 0;

 if ((VAR_0->gfx.mec_fw_version < 0x000001a5) ||
     (VAR_0->gfx.mec_feature_version < 46) ||
     (VAR_0->gfx.pfp_fw_version < 0x000000b7) ||
     (VAR_0->gfx.pfp_feature_version < 46))
  FUNC_0("Warning: check cp_fw_version and update it to realize 			      GRBM requires 1-cycle delay in cp firmware\n");


 switch (VAR_0->asic_type) {
 case 130:
  if ((VAR_0->gfx.me_fw_version >= 0x0000009c) &&
      (VAR_0->gfx.me_feature_version >= 42) &&
      (VAR_0->gfx.pfp_fw_version >= 0x000000b1) &&
      (VAR_0->gfx.pfp_feature_version >= 42))
   VAR_0->gfx.me_fw_write_wait = 1;

  if ((VAR_0->gfx.mec_fw_version >= 0x00000193) &&
      (VAR_0->gfx.mec_feature_version >= 42))
   VAR_0->gfx.mec_fw_write_wait = 1;
  break;
 case 129:
  if ((VAR_0->gfx.me_fw_version >= 0x0000009c) &&
      (VAR_0->gfx.me_feature_version >= 44) &&
      (VAR_0->gfx.pfp_fw_version >= 0x000000b2) &&
      (VAR_0->gfx.pfp_feature_version >= 44))
   VAR_0->gfx.me_fw_write_wait = 1;

  if ((VAR_0->gfx.mec_fw_version >= 0x00000196) &&
      (VAR_0->gfx.mec_feature_version >= 44))
   VAR_0->gfx.mec_fw_write_wait = 1;
  break;
 case 128:
  if ((VAR_0->gfx.me_fw_version >= 0x0000009c) &&
      (VAR_0->gfx.me_feature_version >= 44) &&
      (VAR_0->gfx.pfp_fw_version >= 0x000000b2) &&
      (VAR_0->gfx.pfp_feature_version >= 44))
   VAR_0->gfx.me_fw_write_wait = 1;

  if ((VAR_0->gfx.mec_fw_version >= 0x00000197) &&
      (VAR_0->gfx.mec_feature_version >= 44))
   VAR_0->gfx.mec_fw_write_wait = 1;
  break;
 case 131:
  if ((VAR_0->gfx.me_fw_version >= 0x0000009c) &&
      (VAR_0->gfx.me_feature_version >= 42) &&
      (VAR_0->gfx.pfp_fw_version >= 0x000000b1) &&
      (VAR_0->gfx.pfp_feature_version >= 42))
   VAR_0->gfx.me_fw_write_wait = 1;

  if ((VAR_0->gfx.mec_fw_version >= 0x00000192) &&
      (VAR_0->gfx.mec_feature_version >= 42))
   VAR_0->gfx.mec_fw_write_wait = 1;
  break;
 default:
  break;
 }
}
