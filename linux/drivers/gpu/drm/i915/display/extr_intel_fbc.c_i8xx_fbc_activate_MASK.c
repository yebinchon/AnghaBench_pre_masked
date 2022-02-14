
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int fence_y_offset; int i9xx_plane; } ;
struct TYPE_7__ {int stride; } ;
struct intel_fbc_reg_params {int cfb_size; TYPE_5__* vma; TYPE_3__ crtc; TYPE_2__ fb; } ;
struct TYPE_6__ {struct intel_fbc_reg_params params; } ;
struct drm_i915_private {TYPE_1__ fbc; } ;
struct TYPE_10__ {TYPE_4__* fence; } ;
struct TYPE_9__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_12)
{
 struct intel_fbc_reg_params *VAR_13 = &VAR_12->fbc.params;
 int VAR_14;
 int VAR_15;
 u32 VAR_16;


 VAR_14 = VAR_13->cfb_size / VAR_11;
 if (VAR_13->fb.stride < VAR_14)
  VAR_14 = VAR_13->fb.stride;


 if (FUNC_4(VAR_12, 2))
  VAR_14 = (VAR_14 / 32) - 1;
 else
  VAR_14 = (VAR_14 / 64) - 1;


 for (VAR_15 = 0; VAR_15 < (VAR_11 / 32) + 1; VAR_15++)
  FUNC_3(FUNC_1(VAR_15), 0);

 if (FUNC_4(VAR_12, 4)) {
  u32 VAR_17;


  VAR_17 = VAR_5 | VAR_6 | VAR_3;
  VAR_17 |= FUNC_0(VAR_13->crtc.i9xx_plane);
  FUNC_3(VAR_1, VAR_17);
  FUNC_3(VAR_10, VAR_13->crtc.fence_y_offset);
 }


 VAR_16 = FUNC_2(VAR_0);
 VAR_16 &= 0x3fff << VAR_7;
 VAR_16 |= VAR_4 | VAR_8;
 if (FUNC_5(VAR_12))
  VAR_16 |= VAR_2;
 VAR_16 |= (VAR_14 & 0xff) << VAR_9;
 VAR_16 |= VAR_13->vma->fence->id;
 FUNC_3(VAR_0, VAR_16);
}
