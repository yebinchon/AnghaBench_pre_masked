
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


struct sseu_dev_info {int eu_total; int min_eu_in_pool; int slice_mask; int* subslice_mask; } ;
struct TYPE_17__ {int scheduler; } ;
struct TYPE_15__ {int huc; } ;
struct TYPE_16__ {TYPE_4__ uc; } ;
struct TYPE_14__ {int num_fences; } ;
struct TYPE_13__ {TYPE_1__* pdev; } ;
struct drm_i915_private {TYPE_6__ caps; TYPE_5__ gt; int overlay; TYPE_3__ ggtt; TYPE_2__ drm; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_18__ {int param; int value; } ;
typedef TYPE_7__ drm_i915_getparam_t ;
struct TYPE_20__ {int cs_timestamp_frequency_khz; struct sseu_dev_info sseu; } ;
struct TYPE_19__ {int enable_hangcheck; } ;
struct TYPE_12__ {int device; int revision; } ;
struct TYPE_11__ {int has_coherent_ggtt; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_10__* FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 TYPE_9__* FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 () ;
 TYPE_8__ VAR_8 ;
 int FUNC_11 (struct drm_i915_private*,int ,int) ;
 int FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (struct drm_i915_private*) ;
 int FUNC_14 (struct drm_i915_private*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct sseu_dev_info const*) ;
 scalar_t__ FUNC_17 (int,int ) ;
 struct drm_i915_private* FUNC_18 (struct drm_device*) ;

int FUNC_19(struct drm_device *VAR_9, void *VAR_10,
   struct drm_file *VAR_11)
{
 struct drm_i915_private *VAR_12 = FUNC_18(VAR_9);
 const struct sseu_dev_info *VAR_13 = &FUNC_7(VAR_12)->sseu;
 drm_i915_getparam_t *VAR_14 = VAR_10;
 int VAR_15;

 switch (VAR_14->param) {
 case 138:
 case 180:
 case 137:
 case 164:

  return -VAR_3;
 case 179:
  VAR_15 = VAR_12->drm.pdev->device;
  break;
 case 131:
  VAR_15 = VAR_12->drm.pdev->revision;
  break;
 case 132:
  VAR_15 = VAR_12->ggtt.num_fences;
  break;
 case 153:
  VAR_15 = !!VAR_12->overlay;
  break;
 case 173:
  VAR_15 = !!FUNC_11(VAR_12,
         VAR_5, 0);
  break;
 case 174:
  VAR_15 = !!FUNC_11(VAR_12,
         VAR_4, 0);
  break;
 case 142:
  VAR_15 = !!FUNC_11(VAR_12,
         VAR_6, 0);
  break;
 case 172:
  VAR_15 = !!FUNC_11(VAR_12,
         VAR_5, 1);
  break;
 case 154:
  VAR_15 = FUNC_1(VAR_12);
  break;
 case 140:
  VAR_15 = FUNC_4(VAR_12);
  break;
 case 175:
  VAR_15 = FUNC_6(VAR_12);
  break;
 case 143:
  VAR_15 = !!(VAR_12->caps.scheduler & VAR_7);
  break;
 case 144:
  VAR_15 = FUNC_3(VAR_12) && FUNC_8(VAR_0);
  break;
 case 178:
  VAR_15 = FUNC_9(VAR_12);
  break;
 case 128:
  VAR_15 = FUNC_16(VAR_13);
  if (!VAR_15)
   return -VAR_3;
  break;
 case 176:
  VAR_15 = VAR_13->eu_total;
  if (!VAR_15)
   return -VAR_3;
  break;
 case 155:
  VAR_15 = VAR_8.enable_hangcheck &&
   FUNC_13(VAR_12);
  if (VAR_15 && FUNC_14(VAR_12))
   VAR_15 = 2;
  break;
 case 146:
  VAR_15 = 0;
  break;
 case 150:
  VAR_15 = FUNC_2(VAR_12);
  break;
 case 136:
  VAR_15 = VAR_13->min_eu_in_pool;
  break;
 case 139:
  VAR_15 = FUNC_15(&VAR_12->gt.uc.huc);
  if (VAR_15 < 0)
   return VAR_15;
  break;
 case 134:




  VAR_15 = FUNC_10();
  break;
 case 145:
  VAR_15 = VAR_12->caps.scheduler;
  break;

 case 133:

 case 157:
 case 152:
 case 168:
 case 147:
 case 170:
 case 148:
 case 156:
 case 141:
 case 149:
 case 151:
 case 160:
 case 161:
 case 171:
 case 159:
 case 167:
 case 163:
 case 165:
 case 166:
 case 162:
 case 158:





  VAR_15 = 1;
  break;
 case 169:
  VAR_15 = FUNC_12(VAR_12);
  break;
 case 130:
  VAR_15 = VAR_13->slice_mask;
  if (!VAR_15)
   return -VAR_3;
  break;
 case 129:
  VAR_15 = VAR_13->subslice_mask[0];
  if (!VAR_15)
   return -VAR_3;
  break;
 case 177:
  VAR_15 = 1000 * FUNC_7(VAR_12)->cs_timestamp_frequency_khz;
  break;
 case 135:
  VAR_15 = FUNC_5(VAR_12)->has_coherent_ggtt;
  break;
 default:
  FUNC_0("Unknown parameter %d\n", VAR_14->param);
  return -VAR_2;
 }

 if (FUNC_17(VAR_15, VAR_14->value))
  return -VAR_1;

 return 0;
}
