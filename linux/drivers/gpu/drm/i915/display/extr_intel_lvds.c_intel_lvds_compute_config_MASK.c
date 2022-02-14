
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_lvds_encoder {scalar_t__ a3_power; struct intel_connector* attached_connector; } ;
struct TYPE_6__ {int dev; } ;
struct intel_encoder {TYPE_3__ base; } ;
struct drm_display_mode {int flags; } ;
struct TYPE_4__ {int crtc; struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {unsigned int pipe_bpp; int has_pch_encoder; int output_format; int bw_constrained; TYPE_1__ base; } ;
struct intel_crtc {scalar_t__ pipe; } ;
struct TYPE_5__ {int fixed_mode; } ;
struct intel_connector {TYPE_2__ panel; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int scaling_mode; } ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,struct drm_display_mode*) ;
 int FUNC_5 (struct intel_crtc*,struct intel_crtc_state*,int ) ;
 int FUNC_6 (struct intel_crtc*,struct intel_crtc_state*,int ) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 struct intel_crtc* FUNC_8 (int ) ;
 struct intel_lvds_encoder* FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_10(struct intel_encoder *VAR_4,
         struct intel_crtc_state *VAR_5,
         struct drm_connector_state *VAR_6)
{
 struct drm_i915_private *VAR_7 = FUNC_7(VAR_4->base.dev);
 struct intel_lvds_encoder *VAR_8 =
  FUNC_9(&VAR_4->base);
 struct intel_connector *VAR_9 =
  VAR_8->attached_connector;
 struct drm_display_mode *VAR_10 = &VAR_5->base.adjusted_mode;
 struct intel_crtc *VAR_11 = FUNC_8(VAR_5->base.crtc);
 unsigned int VAR_12;


 if (FUNC_3(VAR_7) < 4 && VAR_11->pipe == 0) {
  FUNC_1("Can't support LVDS on pipe A\n");
  return -VAR_1;
 }

 if (VAR_8->a3_power == VAR_3)
  VAR_12 = 8*3;
 else
  VAR_12 = 6*3;

 if (VAR_12 != VAR_5->pipe_bpp && !VAR_5->bw_constrained) {
  FUNC_0("forcing display bpp (was %d) to LVDS (%d)\n",
         VAR_5->pipe_bpp, VAR_12);
  VAR_5->pipe_bpp = VAR_12;
 }

 VAR_5->output_format = VAR_2;







 FUNC_4(VAR_9->panel.fixed_mode,
          VAR_10);

 if (VAR_10->flags & VAR_0)
  return -VAR_1;

 if (FUNC_2(VAR_7)) {
  VAR_5->has_pch_encoder = 1;

  FUNC_6(VAR_11, VAR_5,
     VAR_6->scaling_mode);
 } else {
  FUNC_5(VAR_11, VAR_5,
      VAR_6->scaling_mode);

 }







 return 0;
}
