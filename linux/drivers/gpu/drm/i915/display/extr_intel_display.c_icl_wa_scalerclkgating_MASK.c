
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct drm_i915_private *VAR_1, enum pipe VAR_2,
         bool VAR_3)
{
 if (VAR_3)
  FUNC_2(FUNC_0(VAR_2),
      FUNC_1(FUNC_0(VAR_2)) | VAR_0);
 else
  FUNC_2(FUNC_0(VAR_2),
      FUNC_1(FUNC_0(VAR_2)) & ~VAR_0);
}
