
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int colorspace; } ;
union hdmi_infoframe {TYPE_2__ avi; } ;
typedef int u8 ;
struct intel_lspcon {int active; } ;
struct intel_encoder {int base; } ;
struct intel_digital_port {int (* write_infoframe ) (struct intel_encoder*,struct intel_crtc_state const*,int ,int *,scalar_t__) ;struct intel_lspcon lspcon; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_4__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {scalar_t__ output_format; scalar_t__ limited_color_range; scalar_t__ lspcon_downsampling; TYPE_1__ base; } ;
struct drm_connector_state {int connector; } ;
typedef scalar_t__ ssize_t ;
typedef int buf ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,struct drm_display_mode const*) ;
 int FUNC_2 (TYPE_2__*,int ,struct drm_display_mode const*,int ) ;
 struct intel_digital_port* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (union hdmi_infoframe*,int *,int) ;
 int FUNC_5 (struct intel_encoder*,struct intel_crtc_state const*,int ,int *,scalar_t__) ;

void FUNC_6(struct intel_encoder *VAR_8,
      bool VAR_9,
      const struct intel_crtc_state *VAR_10,
      const struct drm_connector_state *VAR_11)
{
 ssize_t VAR_12;
 union hdmi_infoframe VAR_13;
 u8 VAR_14[VAR_7];
 struct intel_digital_port *VAR_15 = FUNC_3(&VAR_8->base);
 struct intel_lspcon *VAR_16 = &VAR_15->lspcon;
 const struct drm_display_mode *VAR_17 =
  &VAR_10->base.adjusted_mode;

 if (!VAR_16->active) {
  FUNC_0("Writing infoframes while LSPCON disabled ?\n");
  return;
 }



 VAR_12 = FUNC_1(&VAR_13.avi,
             VAR_11->connector,
             VAR_17);
 if (VAR_12 < 0) {
  FUNC_0("couldn't fill AVI infoframe\n");
  return;
 }

 if (VAR_10->output_format == VAR_6) {
  if (VAR_10->lspcon_downsampling)
   VAR_13.avi.colorspace = VAR_1;
  else
   VAR_13.avi.colorspace = VAR_2;
 } else {
  VAR_13.avi.colorspace = VAR_0;
 }

 FUNC_2(&VAR_13.avi,
        VAR_11->connector,
        VAR_17,
        VAR_10->limited_color_range ?
        VAR_5 :
        VAR_4);

 VAR_12 = FUNC_4(&VAR_13, VAR_14, sizeof(VAR_14));
 if (VAR_12 < 0) {
  FUNC_0("Failed to pack AVI IF\n");
  return;
 }

 VAR_15->write_infoframe(VAR_8, VAR_10, VAR_3,
      VAR_14, VAR_12);
}
