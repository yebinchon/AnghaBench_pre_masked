
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int crtc_clock; int clock; int crtc_hdisplay; int hdisplay; int crtc_hsync_start; int hsync_start; int crtc_hsync_end; int hsync_end; int crtc_htotal; int htotal; int crtc_vdisplay; int vdisplay; int crtc_vsync_start; int vsync_start; int crtc_vsync_end; int vsync_end; int crtc_vtotal; int vtotal; int flags; int vscan; void* crtc_hblank_end; void* crtc_hblank_start; void* crtc_vblank_end; void* crtc_vblank_start; int hskew; int crtc_hskew; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (int,int) ;

void FUNC_2(struct drm_display_mode *VAR_7, int VAR_8)
{
 if (!VAR_7)
  return;

 VAR_7->crtc_clock = VAR_7->clock;
 VAR_7->crtc_hdisplay = VAR_7->hdisplay;
 VAR_7->crtc_hsync_start = VAR_7->hsync_start;
 VAR_7->crtc_hsync_end = VAR_7->hsync_end;
 VAR_7->crtc_htotal = VAR_7->htotal;
 VAR_7->crtc_hskew = VAR_7->hskew;
 VAR_7->crtc_vdisplay = VAR_7->vdisplay;
 VAR_7->crtc_vsync_start = VAR_7->vsync_start;
 VAR_7->crtc_vsync_end = VAR_7->vsync_end;
 VAR_7->crtc_vtotal = VAR_7->vtotal;

 if (VAR_7->flags & VAR_6) {
  if (VAR_8 & VAR_0) {
   VAR_7->crtc_vdisplay /= 2;
   VAR_7->crtc_vsync_start /= 2;
   VAR_7->crtc_vsync_end /= 2;
   VAR_7->crtc_vtotal /= 2;
  }
 }

 if (!(VAR_8 & VAR_1)) {
  if (VAR_7->flags & VAR_5) {
   VAR_7->crtc_vdisplay *= 2;
   VAR_7->crtc_vsync_start *= 2;
   VAR_7->crtc_vsync_end *= 2;
   VAR_7->crtc_vtotal *= 2;
  }
 }

 if (!(VAR_8 & VAR_2)) {
  if (VAR_7->vscan > 1) {
   VAR_7->crtc_vdisplay *= VAR_7->vscan;
   VAR_7->crtc_vsync_start *= VAR_7->vscan;
   VAR_7->crtc_vsync_end *= VAR_7->vscan;
   VAR_7->crtc_vtotal *= VAR_7->vscan;
  }
 }

 if (VAR_8 & VAR_3) {
  unsigned int VAR_9 = VAR_7->flags & VAR_4;

  switch (VAR_9) {
  case 128:
   VAR_7->crtc_clock *= 2;
   VAR_7->crtc_vdisplay += VAR_7->crtc_vtotal;
   VAR_7->crtc_vsync_start += VAR_7->crtc_vtotal;
   VAR_7->crtc_vsync_end += VAR_7->crtc_vtotal;
   VAR_7->crtc_vtotal += VAR_7->crtc_vtotal;
   break;
  }
 }

 VAR_7->crtc_vblank_start = FUNC_1(VAR_7->crtc_vsync_start, VAR_7->crtc_vdisplay);
 VAR_7->crtc_vblank_end = FUNC_0(VAR_7->crtc_vsync_end, VAR_7->crtc_vtotal);
 VAR_7->crtc_hblank_start = FUNC_1(VAR_7->crtc_hsync_start, VAR_7->crtc_hdisplay);
 VAR_7->crtc_hblank_end = FUNC_0(VAR_7->crtc_hsync_end, VAR_7->crtc_htotal);
}
