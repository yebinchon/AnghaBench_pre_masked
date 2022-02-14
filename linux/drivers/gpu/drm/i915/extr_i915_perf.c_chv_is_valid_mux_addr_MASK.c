
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*,int) ;

__attribute__((used)) static bool FUNC_1(struct drm_i915_private *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0, VAR_1) ||
  (VAR_1 >= 0x182300 && VAR_1 <= 0x1823A4);
}
