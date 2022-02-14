
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_connector {int * eld; int dev; } ;
typedef int i915_reg_t ;


 int const FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int const*) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct drm_connector *VAR_0,
          i915_reg_t VAR_1, u32 VAR_2,
          i915_reg_t VAR_3, u32 VAR_4,
          i915_reg_t VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_3(VAR_0->dev);
 const u8 *VAR_7 = VAR_0->eld;
 u32 VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_1);
 VAR_8 &= VAR_2;

 if (!VAR_8)
  return 0;

 VAR_8 = FUNC_0(VAR_3);
 VAR_8 &= ~VAR_4;
 FUNC_1(VAR_3, VAR_8);

 for (VAR_9 = 0; VAR_9 < FUNC_2(VAR_7) / 4; VAR_9++)
  if (FUNC_0(VAR_5) != *((const u32 *)VAR_7 + VAR_9))
   return 0;

 return 1;
}
