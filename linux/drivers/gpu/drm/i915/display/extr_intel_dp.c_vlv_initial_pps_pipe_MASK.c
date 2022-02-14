
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* vlv_pipe_check ) (struct drm_i915_private*,int) ;
typedef scalar_t__ u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;

__attribute__((used)) static enum pipe
FUNC_3(struct drm_i915_private *VAR_4,
       enum port VAR_5,
       vlv_pipe_check VAR_6)
{
 enum pipe VAR_7;

 for (VAR_7 = VAR_2; VAR_7 <= VAR_3; VAR_7++) {
  u32 VAR_8 = FUNC_0(FUNC_2(VAR_7)) &
   VAR_1;

  if (VAR_8 != FUNC_1(VAR_5))
   continue;

  if (!VAR_6(VAR_4, VAR_7))
   continue;

  return VAR_7;
 }

 return VAR_0;
}
