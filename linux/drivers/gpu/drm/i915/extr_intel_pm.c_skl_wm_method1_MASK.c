
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fixed_16_16_t ;
typedef int u8 ;
typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private const*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static uint_fixed_16_16_t
FUNC_3(const struct drm_i915_private *VAR_1, u32 VAR_2,
        u8 VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 uint_fixed_16_16_t VAR_7;

 if (VAR_4 == 0)
  return VAR_0;

 VAR_6 = VAR_4 * VAR_2 * VAR_3;
 VAR_7 = FUNC_2(VAR_6, 1000 * VAR_5);

 if (FUNC_0(VAR_1) >= 10)
  VAR_7 = FUNC_1(VAR_7, 1);

 return VAR_7;
}
