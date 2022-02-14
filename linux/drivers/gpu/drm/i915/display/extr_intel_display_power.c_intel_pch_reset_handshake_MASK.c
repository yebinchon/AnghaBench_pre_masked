
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_5,
          bool VAR_6)
{
 i915_reg_t VAR_7;
 u32 VAR_8, VAR_9;

 if (FUNC_2(VAR_5)) {
  VAR_7 = VAR_0;
  VAR_8 = VAR_3 | VAR_4;
 } else {
  VAR_7 = VAR_1;
  VAR_8 = VAR_2;
 }

 VAR_9 = FUNC_0(VAR_7);

 if (VAR_6)
  VAR_9 |= VAR_8;
 else
  VAR_9 &= ~VAR_8;

 FUNC_1(VAR_7, VAR_9);
}
