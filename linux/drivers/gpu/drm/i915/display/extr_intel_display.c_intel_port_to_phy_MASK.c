
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum phy { ____Placeholder_phy } phy ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;

enum phy FUNC_1(struct drm_i915_private *VAR_2, enum port VAR_3)
{
 if (FUNC_0(VAR_2) && VAR_3 == VAR_1)
  return VAR_0;

 return (enum phy)VAR_3;
}
