
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct ddi_buf_trans {int dummy; } ;


 int FUNC_0 (struct ddi_buf_trans const*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 struct ddi_buf_trans const* VAR_0 ;
 struct ddi_buf_trans const* VAR_1 ;
 struct ddi_buf_trans const* VAR_2 ;

__attribute__((used)) static const struct ddi_buf_trans *
FUNC_3(struct drm_i915_private *VAR_3, int *VAR_4)
{
 if (FUNC_2(VAR_3)) {
  *VAR_4 = FUNC_0(VAR_2);
  return VAR_2;
 } else if (FUNC_1(VAR_3)) {
  *VAR_4 = FUNC_0(VAR_1);
  return VAR_1;
 } else {
  *VAR_4 = FUNC_0(VAR_0);
  return VAR_0;
 }
}
