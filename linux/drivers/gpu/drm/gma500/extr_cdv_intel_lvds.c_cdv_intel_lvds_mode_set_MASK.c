
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gma_crtc {int pipe; } ;
struct drm_psb_private {scalar_t__ lvds_dither; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 struct gma_crtc* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_8,
    struct drm_display_mode *VAR_9,
    struct drm_display_mode *VAR_10)
{
 struct drm_device *VAR_11 = VAR_8->dev;
 struct drm_psb_private *VAR_12 = VAR_11->dev_private;
 struct gma_crtc *VAR_13 = FUNC_1(VAR_8->crtc);
 u32 VAR_14;
 if (VAR_9->hdisplay != VAR_10->hdisplay ||
     VAR_9->vdisplay != VAR_10->vdisplay)
  VAR_14 = (VAR_4 | VAR_6 |
    VAR_0 | VAR_7 |
    VAR_1);
 else
  VAR_14 = 0;

 VAR_14 |= VAR_13->pipe << VAR_5;

 if (VAR_12->lvds_dither)
  VAR_14 |= VAR_2;

 FUNC_0(VAR_3, VAR_14);
}
