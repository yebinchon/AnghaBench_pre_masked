
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drm_display_mode {int crtc_htotal; int crtc_hsync_start; int crtc_hdisplay; int crtc_vtotal; int crtc_vsync_start; int crtc_vdisplay; int crtc_hsync_end; int hdisplay; int crtc_vsync_end; int clock; } ;


 char* FUNC_0 (char*,int,int) ;
 char* FUNC_1 (char*,int,int) ;
 char* FUNC_2 (char*,int,int) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, struct drm_display_mode *VAR_1)
{
 u16 VAR_2, VAR_3;
 u16 VAR_4, VAR_5;
 u16 VAR_6;


 VAR_2 = VAR_1->crtc_htotal - VAR_1->crtc_hsync_start;
 VAR_0 = FUNC_2(VAR_0, 0x01, VAR_2);

 VAR_4 = VAR_2 + VAR_1->crtc_hdisplay;
 VAR_0 = FUNC_2(VAR_0, 0x03, VAR_4);


 VAR_3 = VAR_1->crtc_vtotal - VAR_1->crtc_vsync_start;
 VAR_0 = FUNC_2(VAR_0, 0x05, VAR_3);

 VAR_5 = VAR_3 + VAR_1->crtc_vdisplay;
 VAR_0 = FUNC_2(VAR_0, 0x07, VAR_5);


 VAR_0 = FUNC_2(VAR_0, 0x09,
     VAR_1->crtc_htotal - 1);


 VAR_0 = FUNC_2(VAR_0, 0x0B, 1);


 VAR_0 = FUNC_2(VAR_0, 0x0D,
     VAR_1->crtc_hsync_end - VAR_1->crtc_hsync_start + 1);


 VAR_0 = FUNC_0(VAR_0, 0x0F, VAR_1->hdisplay);


 VAR_6 = VAR_1->crtc_vtotal;
 VAR_0 = FUNC_2(VAR_0, 0x11, VAR_6);


 VAR_0 = FUNC_2(VAR_0, 0x13, 0);


 VAR_0 = FUNC_2(VAR_0, 0x15, VAR_1->crtc_vsync_end - VAR_1->crtc_vsync_start);


 VAR_0 = FUNC_0(VAR_0, 0x17, VAR_1->crtc_vdisplay);

 VAR_0 = FUNC_1(VAR_0, 0x1B,
          VAR_1->clock / 5);

 return VAR_0;
}
