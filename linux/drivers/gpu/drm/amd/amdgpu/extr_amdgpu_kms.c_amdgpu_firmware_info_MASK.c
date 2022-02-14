
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct drm_amdgpu_query_fw {int fw_type; int index; } ;
struct drm_amdgpu_info_firmware {int feature; int ver; } ;
struct TYPE_11__ {int dmcu_fw_version; } ;
struct TYPE_20__ {int asd_feature_version; int asd_fw_version; int sos_feature_version; int sos_fw_version; int ta_ras_ucode_version; int ta_fw_version; int ta_xgmi_ucode_version; } ;
struct TYPE_19__ {int num_instances; TYPE_7__* instance; } ;
struct TYPE_17__ {int fw_version; } ;
struct TYPE_16__ {int mec2_feature_version; int mec2_fw_version; int mec_feature_version; int mec_fw_version; int rlc_srls_feature_version; int rlc_srls_fw_version; int rlc_srlg_feature_version; int rlc_srlg_fw_version; int rlc_srlc_feature_version; int rlc_srlc_fw_version; int rlc_feature_version; int rlc_fw_version; int ce_feature_version; int ce_fw_version; int pfp_feature_version; int pfp_fw_version; int me_feature_version; int me_fw_version; } ;
struct TYPE_15__ {int fw_version; } ;
struct TYPE_14__ {int fw_version; } ;
struct TYPE_13__ {int fw_version; } ;
struct TYPE_12__ {int fb_version; int fw_version; } ;
struct amdgpu_device {TYPE_10__ dm; TYPE_9__ psp; TYPE_8__ sdma; TYPE_6__ pm; TYPE_5__ gfx; TYPE_4__ gmc; TYPE_3__ vcn; TYPE_2__ uvd; TYPE_1__ vce; } ;
struct TYPE_18__ {int feature_version; int fw_version; } ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct drm_amdgpu_info_firmware *VAR_1,
    struct drm_amdgpu_query_fw *VAR_2,
    struct amdgpu_device *VAR_3)
{
 switch (VAR_2->fw_type) {
 case 129:
  VAR_1->ver = VAR_3->vce.fw_version;
  VAR_1->feature = VAR_3->vce.fb_version;
  break;
 case 130:
  VAR_1->ver = VAR_3->uvd.fw_version;
  VAR_1->feature = 0;
  break;
 case 128:
  VAR_1->ver = VAR_3->vcn.fw_version;
  VAR_1->feature = 0;
  break;
 case 135:
  VAR_1->ver = VAR_3->gmc.fw_version;
  VAR_1->feature = 0;
  break;
 case 142:
  VAR_1->ver = VAR_3->gfx.me_fw_version;
  VAR_1->feature = VAR_3->gfx.me_feature_version;
  break;
 case 140:
  VAR_1->ver = VAR_3->gfx.pfp_fw_version;
  VAR_1->feature = VAR_3->gfx.pfp_feature_version;
  break;
 case 143:
  VAR_1->ver = VAR_3->gfx.ce_fw_version;
  VAR_1->feature = VAR_3->gfx.ce_feature_version;
  break;
 case 139:
  VAR_1->ver = VAR_3->gfx.rlc_fw_version;
  VAR_1->feature = VAR_3->gfx.rlc_feature_version;
  break;
 case 138:
  VAR_1->ver = VAR_3->gfx.rlc_srlc_fw_version;
  VAR_1->feature = VAR_3->gfx.rlc_srlc_feature_version;
  break;
 case 137:
  VAR_1->ver = VAR_3->gfx.rlc_srlg_fw_version;
  VAR_1->feature = VAR_3->gfx.rlc_srlg_feature_version;
  break;
 case 136:
  VAR_1->ver = VAR_3->gfx.rlc_srls_fw_version;
  VAR_1->feature = VAR_3->gfx.rlc_srls_feature_version;
  break;
 case 141:
  if (VAR_2->index == 0) {
   VAR_1->ver = VAR_3->gfx.mec_fw_version;
   VAR_1->feature = VAR_3->gfx.mec_feature_version;
  } else if (VAR_2->index == 1) {
   VAR_1->ver = VAR_3->gfx.mec2_fw_version;
   VAR_1->feature = VAR_3->gfx.mec2_feature_version;
  } else
   return -VAR_0;
  break;
 case 133:
  VAR_1->ver = VAR_3->pm.fw_version;
  VAR_1->feature = 0;
  break;
 case 131:
  if (VAR_2->index > 1)
   return -VAR_0;
  if (VAR_2->index == 0) {
   VAR_1->ver = VAR_3->psp.ta_fw_version;
   VAR_1->feature = VAR_3->psp.ta_xgmi_ucode_version;
  } else {
   VAR_1->ver = VAR_3->psp.ta_fw_version;
   VAR_1->feature = VAR_3->psp.ta_ras_ucode_version;
  }
  break;
 case 134:
  if (VAR_2->index >= VAR_3->sdma.num_instances)
   return -VAR_0;
  VAR_1->ver = VAR_3->sdma.instance[VAR_2->index].fw_version;
  VAR_1->feature = VAR_3->sdma.instance[VAR_2->index].feature_version;
  break;
 case 132:
  VAR_1->ver = VAR_3->psp.sos_fw_version;
  VAR_1->feature = VAR_3->psp.sos_feature_version;
  break;
 case 145:
  VAR_1->ver = VAR_3->psp.asd_fw_version;
  VAR_1->feature = VAR_3->psp.asd_feature_version;
  break;
 case 144:
  VAR_1->ver = VAR_3->dm.dmcu_fw_version;
  VAR_1->feature = 0;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
