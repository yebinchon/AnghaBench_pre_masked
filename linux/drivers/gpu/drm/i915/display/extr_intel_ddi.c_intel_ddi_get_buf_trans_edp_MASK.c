
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct ddi_buf_trans {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (struct ddi_buf_trans const*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 struct ddi_buf_trans const* FUNC_4 (struct drm_i915_private*,int*) ;
 struct ddi_buf_trans const* VAR_0 ;
 int FUNC_5 (int,int) ;
 struct ddi_buf_trans* FUNC_6 (struct drm_i915_private*,int*) ;

__attribute__((used)) static const struct ddi_buf_trans *
FUNC_7(struct drm_i915_private *VAR_1,
       enum port VAR_2, int *VAR_3)
{
 if (FUNC_2(VAR_1)) {
  const struct ddi_buf_trans *VAR_4 =
   FUNC_6(VAR_1, VAR_3);
  *VAR_3 = FUNC_5(VAR_2, *VAR_3);
  return VAR_4;
 } else if (FUNC_1(VAR_1)) {
  return FUNC_4(VAR_1, VAR_3);
 } else if (FUNC_3(VAR_1)) {
  *VAR_3 = FUNC_0(VAR_0);
  return VAR_0;
 }

 *VAR_3 = 0;
 return ((void*)0);
}
