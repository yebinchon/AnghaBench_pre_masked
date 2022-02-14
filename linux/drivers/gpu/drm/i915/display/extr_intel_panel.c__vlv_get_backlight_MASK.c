
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static u32 FUNC_3(struct drm_i915_private *VAR_3, enum pipe VAR_4)
{
 if (FUNC_2(VAR_4 != VAR_1 && VAR_4 != VAR_2))
  return 0;

 return FUNC_0(FUNC_1(VAR_4)) & VAR_0;
}
