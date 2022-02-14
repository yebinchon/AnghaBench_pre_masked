
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(struct drm_i915_private *VAR_2,
        enum pipe VAR_3)
{
 i915_reg_t VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5, VAR_6;
 u32 VAR_7;

 if (FUNC_1(VAR_2, 2))
  VAR_7 = VAR_0;
 else
  VAR_7 = VAR_1;

 VAR_5 = FUNC_0(VAR_4) & VAR_7;
 FUNC_3(5);
 VAR_6 = FUNC_0(VAR_4) & VAR_7;

 return VAR_5 != VAR_6;
}
