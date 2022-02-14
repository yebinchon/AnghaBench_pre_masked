
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct ddi_buf_trans {int dummy; } ;


 int FUNC_0 (struct ddi_buf_trans const*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 struct ddi_buf_trans const* VAR_0 ;
 struct ddi_buf_trans const* VAR_1 ;
 struct ddi_buf_trans const* FUNC_4 (struct drm_i915_private*,int*) ;

__attribute__((used)) static const struct ddi_buf_trans *
FUNC_5(struct drm_i915_private *VAR_2,
        int *VAR_3)
{
 if (FUNC_2(VAR_2)) {
  return FUNC_4(VAR_2, VAR_3);
 } else if (FUNC_1(VAR_2)) {
  *VAR_3 = FUNC_0(VAR_0);
  return VAR_0;
 } else if (FUNC_3(VAR_2)) {
  *VAR_3 = FUNC_0(VAR_1);
  return VAR_1;
 }

 *VAR_3 = 0;
 return ((void*)0);
}
