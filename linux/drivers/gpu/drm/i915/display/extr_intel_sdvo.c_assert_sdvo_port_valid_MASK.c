
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 scalar_t__ FUNC_0 (struct drm_i915_private const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(const struct drm_i915_private *VAR_2,
       enum port VAR_3)
{
 if (FUNC_0(VAR_2))
  FUNC_1(VAR_3 != VAR_0);
 else
  FUNC_1(VAR_3 != VAR_0 && VAR_3 != VAR_1);
}
