
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ low_vswing; } ;
struct TYPE_4__ {TYPE_1__ edp; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct cnl_ddi_buf_trans {int dummy; } ;


 int FUNC_0 (struct cnl_ddi_buf_trans const*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cnl_ddi_buf_trans const* VAR_2 ;
 struct cnl_ddi_buf_trans const* VAR_3 ;
 struct cnl_ddi_buf_trans const* VAR_4 ;
 struct cnl_ddi_buf_trans const* VAR_5 ;

__attribute__((used)) static const struct cnl_ddi_buf_trans *
FUNC_1(struct drm_i915_private *VAR_6, int VAR_7, int VAR_8,
   int *VAR_9)
{
 if (VAR_7 == VAR_1) {
  *VAR_9 = FUNC_0(VAR_5);
  return VAR_5;
 } else if (VAR_8 > 540000 && VAR_7 == VAR_0) {
  *VAR_9 = FUNC_0(VAR_4);
  return VAR_4;
 } else if (VAR_7 == VAR_0 && VAR_6->vbt.edp.low_vswing) {
  *VAR_9 = FUNC_0(VAR_3);
  return VAR_3;
 }

 *VAR_9 = FUNC_0(VAR_2);
 return VAR_2;
}
