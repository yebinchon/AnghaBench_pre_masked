
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct intel_crtc *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_3(VAR_2->base.dev);
 enum pipe VAR_4 = VAR_2->pipe;
 u32 VAR_5;

 VAR_5 = FUNC_0(FUNC_2(VAR_4));






 VAR_5 |= VAR_0;






 VAR_5 |= VAR_1;
 FUNC_1(FUNC_2(VAR_4), VAR_5);
}
