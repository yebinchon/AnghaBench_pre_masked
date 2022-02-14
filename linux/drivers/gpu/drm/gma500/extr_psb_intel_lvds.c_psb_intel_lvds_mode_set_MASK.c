
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_psb_private {scalar_t__ lvds_dither; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct drm_encoder *VAR_7,
    struct drm_display_mode *VAR_8,
    struct drm_display_mode *VAR_9)
{
 struct drm_device *VAR_10 = VAR_7->dev;
 struct drm_psb_private *VAR_11 = VAR_10->dev_private;
 u32 VAR_12;
 if (VAR_8->hdisplay != VAR_9->hdisplay ||
     VAR_8->vdisplay != VAR_9->vdisplay)
  VAR_12 = (VAR_4 | VAR_5 |
    VAR_0 | VAR_6 |
    VAR_1);
 else
  VAR_12 = 0;

 if (VAR_11->lvds_dither)
  VAR_12 |= VAR_2;

 FUNC_0(VAR_3, VAR_12);
}
