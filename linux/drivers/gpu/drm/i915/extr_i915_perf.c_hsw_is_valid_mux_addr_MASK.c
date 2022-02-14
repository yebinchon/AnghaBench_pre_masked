
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct drm_i915_private *VAR_3, u32 VAR_4)
{
 return FUNC_0(VAR_3, VAR_4) ||
  (VAR_4 >= 0x25100 && VAR_4 <= 0x2FF90) ||
  (VAR_4 >= FUNC_1(VAR_1) &&
   VAR_4 <= FUNC_1(VAR_2)) ||
  VAR_4 == FUNC_1(VAR_0);
}
