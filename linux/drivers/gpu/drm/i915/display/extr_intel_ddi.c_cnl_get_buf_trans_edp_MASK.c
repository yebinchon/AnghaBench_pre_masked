
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ low_vswing; } ;
struct TYPE_4__ {TYPE_1__ edp; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct cnl_ddi_buf_trans {int dummy; } ;


 int FUNC_0 (struct cnl_ddi_buf_trans const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct cnl_ddi_buf_trans const* VAR_5 ;
 struct cnl_ddi_buf_trans const* VAR_6 ;
 struct cnl_ddi_buf_trans const* VAR_7 ;
 struct cnl_ddi_buf_trans const* FUNC_3 (struct drm_i915_private*,int*) ;

__attribute__((used)) static const struct cnl_ddi_buf_trans *
FUNC_4(struct drm_i915_private *VAR_8, int *VAR_9)
{
 u32 VAR_10 = FUNC_1(VAR_0) & VAR_4;

 if (VAR_8->vbt.edp.low_vswing) {
  if (VAR_10 == VAR_1) {
   *VAR_9 = FUNC_0(VAR_5);
   return VAR_5;
  } else if (VAR_10 == VAR_2) {
   *VAR_9 = FUNC_0(VAR_6);
   return VAR_6;
  } else if (VAR_10 == VAR_3) {
   *VAR_9 = FUNC_0(VAR_7);
   return VAR_7;
  } else {
   *VAR_9 = 1;
   FUNC_2(VAR_10);
  }
  return ((void*)0);
 } else {
  return FUNC_3(VAR_8, VAR_9);
 }
}
