
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
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 struct ddi_buf_trans const* VAR_0 ;
 struct ddi_buf_trans const* VAR_1 ;
 struct ddi_buf_trans* FUNC_6 (struct drm_i915_private*,int*) ;
 int FUNC_7 (int,int) ;
 struct ddi_buf_trans* FUNC_8 (struct drm_i915_private*,int*) ;

__attribute__((used)) static const struct ddi_buf_trans *
FUNC_9(struct drm_i915_private *VAR_2,
      enum port VAR_3, int *VAR_4)
{
 if (FUNC_4(VAR_2) || FUNC_2(VAR_2)) {
  const struct ddi_buf_trans *VAR_5 =
   FUNC_6(VAR_2, VAR_4);
  *VAR_4 = FUNC_7(VAR_3, *VAR_4);
  return VAR_5;
 } else if (FUNC_5(VAR_2)) {
  const struct ddi_buf_trans *VAR_6 =
   FUNC_8(VAR_2, VAR_4);
  *VAR_4 = FUNC_7(VAR_3, *VAR_4);
  return VAR_6;
 } else if (FUNC_1(VAR_2)) {
  *VAR_4 = FUNC_0(VAR_0);
  return VAR_0;
 } else if (FUNC_3(VAR_2)) {
  *VAR_4 = FUNC_0(VAR_1);
  return VAR_1;
 }

 *VAR_4 = 0;
 return ((void*)0);
}
