
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mid_intel_hdmi_priv {int hdmi_reg; scalar_t__ has_hdmi_audio; } ;
struct gma_encoder {struct mid_intel_hdmi_priv* dev_priv; } ;
struct gma_crtc {int pipe; } ;
struct drm_encoder {struct drm_crtc* crtc; struct drm_device* dev; } ;
struct drm_display_mode {int flags; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct gma_crtc* FUNC_2 (struct drm_crtc*) ;
 struct gma_encoder* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_7,
   struct drm_display_mode *VAR_8,
   struct drm_display_mode *VAR_9)
{
 struct drm_device *VAR_10 = VAR_7->dev;
 struct gma_encoder *VAR_11 = FUNC_3(VAR_7);
 struct mid_intel_hdmi_priv *VAR_12 = VAR_11->dev_priv;
 u32 VAR_13;
 struct drm_crtc *VAR_14 = VAR_7->crtc;
 struct gma_crtc *VAR_15 = FUNC_2(VAR_14);

 VAR_13 = (2 << 10);

 if (VAR_9->flags & VAR_1)
  VAR_13 |= VAR_6;
 if (VAR_9->flags & VAR_0)
  VAR_13 |= VAR_4;

 if (VAR_15->pipe == 1)
  VAR_13 |= VAR_2;

 if (VAR_12->has_hdmi_audio) {
  VAR_13 |= VAR_3;
  VAR_13 |= VAR_5;
 }

 FUNC_1(VAR_12->hdmi_reg, VAR_13);
 FUNC_0(VAR_12->hdmi_reg);
}
