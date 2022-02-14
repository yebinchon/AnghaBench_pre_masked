
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum port { ____Placeholder_port } port ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int VAR_7 ;
 int FUNC_4 (struct drm_i915_private*,int,int*) ;

bool FUNC_5(struct drm_i915_private *VAR_8,
      i915_reg_t VAR_9, enum port VAR_10,
      enum pipe *VAR_11)
{
 bool VAR_12;
 u32 VAR_13;

 VAR_13 = FUNC_1(VAR_9);

 VAR_12 = VAR_13 & VAR_6;


 if (FUNC_3(VAR_8) && VAR_10 == VAR_7)
  *VAR_11 = (VAR_13 & VAR_2) >> VAR_5;
 else if (FUNC_0(VAR_8) && VAR_10 != VAR_7)
  VAR_12 &= FUNC_4(VAR_8, VAR_10, VAR_11);
 else if (FUNC_2(VAR_8))
  *VAR_11 = (VAR_13 & VAR_1) >> VAR_4;
 else
  *VAR_11 = (VAR_13 & VAR_0) >> VAR_3;

 return VAR_12;
}
