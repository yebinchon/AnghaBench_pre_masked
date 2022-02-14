
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct TYPE_6__ {int gcp; int enable; } ;
struct TYPE_4__ {int adjusted_mode; } ;
struct intel_crtc_state {int pipe_bpp; TYPE_3__ infoframes; TYPE_1__ base; int has_infoframe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct intel_encoder *VAR_3,
          struct intel_crtc_state *VAR_4,
          struct drm_connector_state *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_3(VAR_3->base.dev);

 if (FUNC_0(VAR_6) || !VAR_4->has_infoframe)
  return;

 VAR_4->infoframes.enable |=
  FUNC_2(VAR_2);


 if (VAR_4->pipe_bpp > 24)
  VAR_4->infoframes.gcp |= VAR_0;


 if (FUNC_1(VAR_4->pipe_bpp,
           &VAR_4->base.adjusted_mode))
  VAR_4->infoframes.gcp |= VAR_1;
}
