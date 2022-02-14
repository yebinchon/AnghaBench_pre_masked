
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tv_mode {int progressive; int clock; } ;
struct TYPE_10__ {int top; int bottom; } ;
struct intel_tv_connector_state {int bypass_vfilter; TYPE_5__ margins; } ;
struct TYPE_6__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_display_mode {int crtc_hdisplay; int crtc_vdisplay; int flags; int clock; int crtc_clock; char* name; int private_flags; } ;
struct TYPE_7__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int pipe_bpp; int port_clock; int output_format; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_8__ {int top; int bottom; int right; int left; } ;
struct TYPE_9__ {TYPE_3__ margins; } ;
struct drm_connector_state {TYPE_4__ tv; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*,int ) ;
 struct tv_mode* FUNC_4 (struct drm_connector_state*) ;
 int FUNC_5 (struct drm_display_mode*,struct tv_mode const*) ;
 int FUNC_6 (struct drm_display_mode*,int,int ,int ) ;
 int FUNC_7 (struct drm_display_mode*,int,int,int) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*,int) ;
 int FUNC_9 (struct drm_display_mode*,struct drm_connector_state*,int) ;
 struct drm_i915_private* FUNC_10 (int ) ;
 struct intel_tv_connector_state* FUNC_11 (struct drm_connector_state*) ;

__attribute__((used)) static int
FUNC_12(struct intel_encoder *VAR_5,
   struct intel_crtc_state *VAR_6,
   struct drm_connector_state *VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_10(VAR_5->base.dev);
 struct intel_tv_connector_state *VAR_9 =
  FUNC_11(VAR_7);
 const struct tv_mode *VAR_10 = FUNC_4(VAR_7);
 struct drm_display_mode *VAR_11 =
  &VAR_6->base.adjusted_mode;
 int VAR_12 = VAR_11->crtc_hdisplay;
 int VAR_13 = VAR_11->crtc_vdisplay;

 if (!VAR_10)
  return -VAR_2;

 if (VAR_11->flags & VAR_0)
  return -VAR_2;

 VAR_6->output_format = VAR_4;

 FUNC_0("forcing bpc to 8 for TV\n");
 VAR_6->pipe_bpp = 8*3;

 VAR_6->port_clock = VAR_10->clock;

 FUNC_5(VAR_11, VAR_10);
 FUNC_3(VAR_11, 0);

 if (FUNC_8(VAR_8, VAR_12) ||
     !FUNC_9(VAR_11, VAR_7, VAR_13)) {
  int VAR_14, VAR_15, VAR_16;

  VAR_14 = VAR_11->crtc_vdisplay - VAR_13;

  if (VAR_14 < 0) {
   FUNC_0("No vertical scaling for >1024 pixel wide modes\n");
   return -VAR_2;
  }




  VAR_15 = VAR_7->tv.margins.top;
  VAR_16 = VAR_7->tv.margins.bottom;

  if (VAR_15 + VAR_16)
   VAR_15 = VAR_14 * VAR_15 / (VAR_15 + VAR_16);
  else
   VAR_15 = VAR_14 / 2;
  VAR_16 = VAR_14 - VAR_15;

  VAR_9->margins.top = VAR_15;
  VAR_9->margins.bottom = VAR_16;

  VAR_9->bypass_vfilter = 1;

  if (!VAR_10->progressive) {
   VAR_11->clock /= 2;
   VAR_11->crtc_clock /= 2;
   VAR_11->flags |= VAR_1;
  }
 } else {
  VAR_9->margins.top = VAR_7->tv.margins.top;
  VAR_9->margins.bottom = VAR_7->tv.margins.bottom;

  VAR_9->bypass_vfilter = 0;
 }

 FUNC_0("TV mode:\n");
 FUNC_2(VAR_11);
 FUNC_6(VAR_11, VAR_12,
      VAR_7->tv.margins.left,
      VAR_7->tv.margins.right);
 FUNC_7(VAR_11, VAR_13,
     VAR_9->margins.top,
     VAR_9->margins.bottom);
 FUNC_3(VAR_11, 0);
 VAR_11->name[0] = '\0';


 if (FUNC_1(VAR_8))
  VAR_11->private_flags |=
   VAR_3;

 return 0;
}
