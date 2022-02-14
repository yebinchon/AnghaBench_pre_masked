
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct drm_i915_private *VAR_6, u32 VAR_7)
{
 return (VAR_7 >= FUNC_0(VAR_4) &&
  VAR_7 <= FUNC_0(VAR_5)) ||
  (VAR_7 >= FUNC_0(VAR_2) &&
   VAR_7 <= FUNC_0(VAR_3)) ||
  (VAR_7 >= FUNC_0(VAR_0) &&
   VAR_7 <= FUNC_0(VAR_1));
}
