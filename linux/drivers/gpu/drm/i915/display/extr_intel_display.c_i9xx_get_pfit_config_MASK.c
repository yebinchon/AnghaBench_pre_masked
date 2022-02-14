
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int control; void* pgm_ratios; } ;
struct intel_crtc_state {TYPE_1__ gmch_pfit; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct intel_crtc *VAR_6,
     struct intel_crtc_state *VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_3(VAR_6->base.dev);
 u32 VAR_9;

 if (!FUNC_2(VAR_8))
  return;

 VAR_9 = FUNC_0(VAR_0);
 if (!(VAR_9 & VAR_1))
  return;


 if (FUNC_1(VAR_8) < 4) {
  if (VAR_6->pipe != VAR_5)
   return;
 } else {
  if ((VAR_9 & VAR_3) != (VAR_6->pipe << VAR_4))
   return;
 }

 VAR_7->gmch_pfit.control = VAR_9;
 VAR_7->gmch_pfit.pgm_ratios = FUNC_0(VAR_2);
}
