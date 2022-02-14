
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*,int,int ) ;
 int FUNC_1 (struct drm_i915_private*,int,int ) ;
 struct drm_i915_private* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_1,
        enum pipe VAR_2, bool VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_2(VAR_1);

 if (VAR_3)
  FUNC_1(VAR_4, VAR_2, VAR_0);
 else
  FUNC_0(VAR_4, VAR_2, VAR_0);
}
