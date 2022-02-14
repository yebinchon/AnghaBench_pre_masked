
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*,int ,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (struct drm_i915_private*,int ,int ) ;
 int FUNC_3 (struct drm_i915_private*,int ,int ) ;

__attribute__((used)) static inline bool FUNC_4(struct drm_i915_private *VAR_1,
      u32 VAR_2, u32 VAR_3,
      u32 VAR_4)
{
 if (FUNC_1(VAR_1, 9) && !FUNC_2(VAR_1, VAR_2,
           VAR_3))
  return 0;

 if ((FUNC_1(VAR_1, 9) ||
      FUNC_0(VAR_1, VAR_0, VAR_0)) &&
     !FUNC_3(VAR_1, VAR_3, VAR_4))
  return 0;

 return 1;
}
