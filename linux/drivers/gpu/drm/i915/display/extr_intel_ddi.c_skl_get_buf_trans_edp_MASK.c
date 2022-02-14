
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ low_vswing; } ;
struct TYPE_4__ {TYPE_1__ edp; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct ddi_buf_trans {int dummy; } ;


 int FUNC_0 (struct ddi_buf_trans const*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 struct ddi_buf_trans const* FUNC_9 (struct drm_i915_private*,int*) ;
 struct ddi_buf_trans const* VAR_0 ;
 struct ddi_buf_trans const* FUNC_10 (struct drm_i915_private*,int*) ;
 struct ddi_buf_trans const* VAR_1 ;
 struct ddi_buf_trans const* VAR_2 ;

__attribute__((used)) static const struct ddi_buf_trans *
FUNC_11(struct drm_i915_private *VAR_3, int *VAR_4)
{
 if (VAR_3->vbt.edp.low_vswing) {
  if (FUNC_8(VAR_3) || FUNC_6(VAR_3) ||
      FUNC_2(VAR_3)) {
   *VAR_4 = FUNC_0(VAR_2);
   return VAR_2;
  } else if (FUNC_7(VAR_3) || FUNC_5(VAR_3) ||
      FUNC_1(VAR_3)) {
   *VAR_4 = FUNC_0(VAR_1);
   return VAR_1;
  } else {
   *VAR_4 = FUNC_0(VAR_0);
   return VAR_0;
  }
 }

 if (FUNC_4(VAR_3) || FUNC_3(VAR_3))
  return FUNC_9(VAR_3, VAR_4);
 else
  return FUNC_10(VAR_3, VAR_4);
}
