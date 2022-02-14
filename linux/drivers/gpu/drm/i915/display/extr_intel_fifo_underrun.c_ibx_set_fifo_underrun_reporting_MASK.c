
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_i915_private*,int ) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_3,
         enum pipe VAR_4,
         bool VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_2(VAR_3);
 u32 VAR_7 = (VAR_4 == VAR_0) ?
  VAR_1 : VAR_2;

 if (VAR_5)
  FUNC_1(VAR_6, VAR_7);
 else
  FUNC_0(VAR_6, VAR_7);
}
