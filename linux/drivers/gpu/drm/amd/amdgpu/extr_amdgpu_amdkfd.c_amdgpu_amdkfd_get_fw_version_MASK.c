
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct kgd_dev {int dummy; } ;
struct TYPE_5__ {TYPE_1__* instance; } ;
struct TYPE_6__ {int rlc_fw_version; int mec2_fw_version; int mec_fw_version; int ce_fw_version; int me_fw_version; int pfp_fw_version; } ;
struct amdgpu_device {TYPE_2__ sdma; TYPE_3__ gfx; } ;
typedef enum kgd_engine_type { ____Placeholder_kgd_engine_type } kgd_engine_type ;
struct TYPE_4__ {int fw_version; } ;
uint32_t FUNC_0(struct kgd_dev *VAR_0,
          enum kgd_engine_type VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;

 switch (VAR_1) {
 case 131:
  return VAR_2->gfx.pfp_fw_version;

 case 134:
  return VAR_2->gfx.me_fw_version;

 case 135:
  return VAR_2->gfx.ce_fw_version;

 case 133:
  return VAR_2->gfx.mec_fw_version;

 case 132:
  return VAR_2->gfx.mec2_fw_version;

 case 130:
  return VAR_2->gfx.rlc_fw_version;

 case 129:
  return VAR_2->sdma.instance[0].fw_version;

 case 128:
  return VAR_2->sdma.instance[1].fw_version;

 default:
  return 0;
 }

 return 0;
}
