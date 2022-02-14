
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum tc_port { ____Placeholder_tc_port } tc_port ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 int FUNC_2 (struct drm_i915_private*,int) ;

enum tc_port FUNC_3(struct drm_i915_private *VAR_3, enum port VAR_4)
{
 if (!FUNC_1(VAR_3, FUNC_2(VAR_3, VAR_4)))
  return VAR_2;

 if (FUNC_0(VAR_3) >= 12)
  return VAR_4 - VAR_1;

 return VAR_4 - VAR_0;
}
