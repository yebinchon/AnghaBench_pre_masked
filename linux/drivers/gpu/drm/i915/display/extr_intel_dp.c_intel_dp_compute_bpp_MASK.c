
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_dp {int downstream_ports; int dpcd; struct intel_connector* attached_connector; } ;
struct intel_crtc_state {int pipe_bpp; } ;
struct TYPE_5__ {scalar_t__ bpc; } ;
struct TYPE_6__ {TYPE_1__ display_info; } ;
struct intel_connector {TYPE_2__ base; } ;
struct TYPE_7__ {int bpp; } ;
struct TYPE_8__ {TYPE_3__ edp; } ;
struct drm_i915_private {TYPE_4__ vbt; } ;


 int FUNC_0 (char*,int) ;
 struct drm_i915_private* FUNC_1 (struct intel_dp*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct intel_dp *VAR_0,
    struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_1(VAR_0);
 struct intel_connector *VAR_3 = VAR_0->attached_connector;
 int VAR_4, VAR_5;

 VAR_4 = VAR_1->pipe_bpp;
 VAR_5 = FUNC_2(VAR_0->dpcd, VAR_0->downstream_ports);

 if (VAR_5 > 0)
  VAR_4 = FUNC_4(VAR_4, 3*VAR_5);

 if (FUNC_3(VAR_0)) {

  if (VAR_3->base.display_info.bpc == 0 &&
      VAR_2->vbt.edp.bpp && VAR_2->vbt.edp.bpp < VAR_4) {
   FUNC_0("clamping bpp for eDP panel to BIOS-provided %i\n",
          VAR_2->vbt.edp.bpp);
   VAR_4 = VAR_2->vbt.edp.bpp;
  }
 }

 return VAR_4;
}
