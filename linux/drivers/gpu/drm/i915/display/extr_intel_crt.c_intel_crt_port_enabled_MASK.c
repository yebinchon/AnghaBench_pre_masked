
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;

bool FUNC_2(struct drm_i915_private *VAR_5,
       i915_reg_t VAR_6, enum pipe *VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_6);


 if (FUNC_0(VAR_5))
  *VAR_7 = (VAR_8 & VAR_2) >> VAR_4;
 else
  *VAR_7 = (VAR_8 & VAR_1) >> VAR_3;

 return VAR_8 & VAR_0;
}
