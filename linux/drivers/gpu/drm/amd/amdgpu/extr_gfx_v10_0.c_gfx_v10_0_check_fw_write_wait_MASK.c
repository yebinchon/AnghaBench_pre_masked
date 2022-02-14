
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cp_fw_write_wait; int me_fw_version; int me_feature_version; int pfp_fw_version; int pfp_feature_version; int mec_fw_version; int mec_feature_version; } ;
struct amdgpu_device {int asic_type; TYPE_1__ gfx; } ;





 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0)
{
 VAR_0->gfx.cp_fw_write_wait = 0;

 switch (VAR_0->asic_type) {
 case 130:
 case 129:
 case 128:
  if ((VAR_0->gfx.me_fw_version >= 0x00000046) &&
      (VAR_0->gfx.me_feature_version >= 27) &&
      (VAR_0->gfx.pfp_fw_version >= 0x00000068) &&
      (VAR_0->gfx.pfp_feature_version >= 27) &&
      (VAR_0->gfx.mec_fw_version >= 0x0000005b) &&
      (VAR_0->gfx.mec_feature_version >= 27))
   VAR_0->gfx.cp_fw_write_wait = 1;
  break;
 default:
  break;
 }

 if (VAR_0->gfx.cp_fw_write_wait == 0)
  FUNC_0("Warning: check cp_fw_version and update it to realize 			      GRBM requires 1-cycle delay in cp firmware\n");

}
