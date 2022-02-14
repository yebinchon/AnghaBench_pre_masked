
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_crtc {int dev; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_2__ {int pipe; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct drm_crtc*) ;

u32 FUNC_4(struct drm_crtc *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_2(VAR_0->dev);
 enum pipe VAR_2 = FUNC_3(VAR_0)->pipe;

 return FUNC_0(FUNC_1(VAR_2));
}
