
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct TYPE_5__ {int flags; int crtc_clock; } ;
struct TYPE_6__ {TYPE_2__ adjusted_mode; } ;
struct intel_crtc_state {TYPE_3__ base; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_encoder*) ;
 int FUNC_1 (struct intel_encoder*,struct intel_crtc_state*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct intel_encoder *VAR_4,
          struct intel_crtc_state *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_3(VAR_4->base.dev);

 FUNC_1(VAR_4, VAR_5);

 VAR_5->base.adjusted_mode.flags &= ~(VAR_2 |
           VAR_0 |
           VAR_3 |
           VAR_1);
 VAR_5->base.adjusted_mode.flags |= FUNC_0(VAR_4);

 VAR_5->base.adjusted_mode.crtc_clock = FUNC_2(VAR_6);
}
