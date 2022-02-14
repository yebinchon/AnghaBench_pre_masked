
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct drm_i915_private *VAR_2, u32 VAR_3)
{
 return FUNC_1(VAR_2, VAR_3) ||
  VAR_3 == FUNC_2(VAR_1) ||
  (VAR_3 >= FUNC_2(VAR_0) &&
   VAR_3 <= FUNC_2(FUNC_0(8)));
}
