
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__** crtcs; } ;
struct radeon_device {TYPE_2__ mode_info; } ;
struct drm_display_mode {int hdisplay; int crtc_hdisplay; } ;
struct TYPE_3__ {void* lb_vblank_lead_lines; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct radeon_device *VAR_7,
         struct drm_display_mode *VAR_8,
         struct drm_display_mode *VAR_9)
{
 u32 VAR_10;


 u32 VAR_11 = 8192;
 VAR_10 = FUNC_1(VAR_2) & VAR_0;
 VAR_10 &= ~VAR_1;

 if (VAR_8 && VAR_9) {
  if (VAR_8->hdisplay > VAR_9->hdisplay) {
   if (VAR_8->hdisplay > 2560)
    VAR_10 |= VAR_5;
   else
    VAR_10 |= VAR_3;
  } else if (VAR_9->hdisplay > VAR_8->hdisplay) {
   if (VAR_9->hdisplay > 2560)
    VAR_10 |= VAR_4;
   else
    VAR_10 |= VAR_3;
  } else
   VAR_10 |= VAR_3;
 } else if (VAR_8) {
  VAR_10 |= VAR_6;
 } else if (VAR_9) {
  VAR_10 |= VAR_4;
 }
 FUNC_2(VAR_2, VAR_10);


 if (VAR_8)
  VAR_7->mode_info.crtcs[0]->lb_vblank_lead_lines = FUNC_0(VAR_11, VAR_8->crtc_hdisplay);

 if (VAR_9)
  VAR_7->mode_info.crtcs[1]->lb_vblank_lead_lines = FUNC_0(VAR_11, VAR_9->crtc_hdisplay);
}
