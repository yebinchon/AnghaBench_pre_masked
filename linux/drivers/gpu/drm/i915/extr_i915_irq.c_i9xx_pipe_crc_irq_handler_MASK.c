
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct drm_i915_private*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct drm_i915_private *VAR_0,
          enum pipe VAR_1)
{
 u32 VAR_2, VAR_3;

 if (FUNC_1(VAR_0) >= 3)
  VAR_2 = FUNC_0(FUNC_6(VAR_1));
 else
  VAR_2 = 0;

 if (FUNC_1(VAR_0) >= 5 || FUNC_2(VAR_0))
  VAR_3 = FUNC_0(FUNC_7(VAR_1));
 else
  VAR_3 = 0;

 FUNC_8(VAR_0, VAR_1,
         FUNC_0(FUNC_5(VAR_1)),
         FUNC_0(FUNC_4(VAR_1)),
         FUNC_0(FUNC_3(VAR_1)),
         VAR_2, VAR_3);
}
