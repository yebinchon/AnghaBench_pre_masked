
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ low_vswing; } ;
struct TYPE_4__ {TYPE_1__ edp; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct bxt_ddi_buf_trans {int dummy; } ;


 int FUNC_0 (struct bxt_ddi_buf_trans const*) ;
 struct bxt_ddi_buf_trans const* VAR_0 ;
 struct bxt_ddi_buf_trans const* FUNC_1 (struct drm_i915_private*,int*) ;

__attribute__((used)) static const struct bxt_ddi_buf_trans *
FUNC_2(struct drm_i915_private *VAR_1, int *VAR_2)
{
 if (VAR_1->vbt.edp.low_vswing) {
  *VAR_2 = FUNC_0(VAR_0);
  return VAR_0;
 }

 return FUNC_1(VAR_1, VAR_2);
}
