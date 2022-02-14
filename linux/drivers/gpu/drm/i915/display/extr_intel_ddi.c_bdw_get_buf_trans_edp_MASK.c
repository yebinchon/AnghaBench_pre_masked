
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
 struct ddi_buf_trans const* VAR_0 ;
 struct ddi_buf_trans const* VAR_1 ;

__attribute__((used)) static const struct ddi_buf_trans *
FUNC_1(struct drm_i915_private *VAR_2, int *VAR_3)
{
 if (VAR_2->vbt.edp.low_vswing) {
  *VAR_3 = FUNC_0(VAR_1);
  return VAR_1;
 } else {
  *VAR_3 = FUNC_0(VAR_0);
  return VAR_0;
 }
}
