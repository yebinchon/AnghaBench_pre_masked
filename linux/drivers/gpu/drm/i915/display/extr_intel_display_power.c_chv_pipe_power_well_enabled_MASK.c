
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i915_power_well {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*,int ) ;

__attribute__((used)) static bool FUNC_8(struct drm_i915_private *VAR_2,
     struct i915_power_well *VAR_3)
{
 enum pipe VAR_4 = VAR_0;
 bool VAR_5;
 u32 VAR_6, VAR_7;

 FUNC_5(VAR_2);

 VAR_6 = FUNC_7(VAR_2, VAR_1) & FUNC_1(VAR_4);




 FUNC_4(VAR_6 != FUNC_3(VAR_4) && VAR_6 != FUNC_2(VAR_4));
 VAR_5 = VAR_6 == FUNC_3(VAR_4);





 VAR_7 = FUNC_7(VAR_2, VAR_1) & FUNC_0(VAR_4);
 FUNC_4(VAR_7 << 16 != VAR_6);

 FUNC_6(VAR_2);

 return VAR_5;
}
