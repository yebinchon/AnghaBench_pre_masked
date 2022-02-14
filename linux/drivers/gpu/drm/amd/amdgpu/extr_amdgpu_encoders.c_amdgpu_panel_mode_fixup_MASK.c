
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct drm_display_mode {unsigned int htotal; unsigned int hdisplay; unsigned int vtotal; unsigned int vdisplay; unsigned int hsync_start; unsigned int vsync_start; unsigned int hsync_end; unsigned int vsync_end; unsigned int crtc_hdisplay; unsigned int crtc_vdisplay; unsigned int crtc_htotal; unsigned int crtc_hsync_start; unsigned int crtc_hsync_end; unsigned int crtc_vtotal; unsigned int crtc_vsync_start; unsigned int crtc_vsync_end; int flags; int clock; } ;
struct amdgpu_encoder {struct drm_display_mode native_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_display_mode*,int ) ;
 struct amdgpu_encoder* FUNC_1 (struct drm_encoder*) ;

void FUNC_2(struct drm_encoder *VAR_1,
        struct drm_display_mode *VAR_2)
{
 struct amdgpu_encoder *VAR_3 = FUNC_1(VAR_1);
 struct drm_display_mode *VAR_4 = &VAR_3->native_mode;
 unsigned VAR_5 = VAR_4->htotal - VAR_4->hdisplay;
 unsigned VAR_6 = VAR_4->vtotal - VAR_4->vdisplay;
 unsigned VAR_7 = VAR_4->hsync_start - VAR_4->hdisplay;
 unsigned VAR_8 = VAR_4->vsync_start - VAR_4->vdisplay;
 unsigned VAR_9 = VAR_4->hsync_end - VAR_4->hsync_start;
 unsigned VAR_10 = VAR_4->vsync_end - VAR_4->vsync_start;

 VAR_2->clock = VAR_4->clock;
 VAR_2->flags = VAR_4->flags;

 VAR_2->hdisplay = VAR_4->hdisplay;
 VAR_2->vdisplay = VAR_4->vdisplay;

 VAR_2->htotal = VAR_4->hdisplay + VAR_5;
 VAR_2->hsync_start = VAR_4->hdisplay + VAR_7;
 VAR_2->hsync_end = VAR_2->hsync_start + VAR_9;

 VAR_2->vtotal = VAR_4->vdisplay + VAR_6;
 VAR_2->vsync_start = VAR_4->vdisplay + VAR_8;
 VAR_2->vsync_end = VAR_2->vsync_start + VAR_10;

 FUNC_0(VAR_2, VAR_0);

 VAR_2->crtc_hdisplay = VAR_4->hdisplay;
 VAR_2->crtc_vdisplay = VAR_4->vdisplay;

 VAR_2->crtc_htotal = VAR_2->crtc_hdisplay + VAR_5;
 VAR_2->crtc_hsync_start = VAR_2->crtc_hdisplay + VAR_7;
 VAR_2->crtc_hsync_end = VAR_2->crtc_hsync_start + VAR_9;

 VAR_2->crtc_vtotal = VAR_2->crtc_vdisplay + VAR_6;
 VAR_2->crtc_vsync_start = VAR_2->crtc_vdisplay + VAR_8;
 VAR_2->crtc_vsync_end = VAR_2->crtc_vsync_start + VAR_10;

}
