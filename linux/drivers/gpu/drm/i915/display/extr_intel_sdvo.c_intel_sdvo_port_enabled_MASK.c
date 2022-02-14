
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

bool FUNC_3(struct drm_i915_private *VAR_7,
        i915_reg_t VAR_8, enum pipe *VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_1(VAR_8);


 if (FUNC_0(VAR_7))
  *VAR_9 = (VAR_10 & VAR_3) >> VAR_6;
 else if (FUNC_2(VAR_7))
  *VAR_9 = (VAR_10 & VAR_2) >> VAR_5;
 else
  *VAR_9 = (VAR_10 & VAR_1) >> VAR_4;

 return VAR_10 & VAR_0;
}
