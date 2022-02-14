
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int pp_feature; } ;
struct TYPE_6__ {int is_rlc_v2_1; } ;
struct TYPE_7__ {int rlc_fw_version; int rlc_feature_version; TYPE_2__ rlc; } ;
struct amdgpu_device {int asic_type; int rev_id; int pg_flags; TYPE_4__ pm; TYPE_3__ gfx; TYPE_1__* pdev; } ;
struct TYPE_5__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_4)
{
 switch (VAR_4->asic_type) {
 case 130:
 case 129:
 case 128:
  break;
 case 132:
  if (!(VAR_4->rev_id >= 0x8 || VAR_4->pdev->device == 0x15d8)
   &&((VAR_4->gfx.rlc_fw_version != 106 &&
        VAR_4->gfx.rlc_fw_version < 531) ||
       (VAR_4->gfx.rlc_fw_version == 53815) ||
       (VAR_4->gfx.rlc_feature_version < 1) ||
       !VAR_4->gfx.rlc.is_rlc_v2_1))
   VAR_4->pm.pp_feature &= ~VAR_3;

  if (VAR_4->pm.pp_feature & VAR_3)
   VAR_4->pg_flags |= VAR_1 |
    VAR_0 |
    VAR_2;
  break;
 case 131:
  if (VAR_4->pm.pp_feature & VAR_3)
   VAR_4->pg_flags |= VAR_1 |
    VAR_0 |
    VAR_2;
  break;
 default:
  break;
 }
}
