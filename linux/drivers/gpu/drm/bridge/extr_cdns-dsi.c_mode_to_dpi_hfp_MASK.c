
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {unsigned int hsync_start; unsigned int hdisplay; unsigned int crtc_hsync_start; unsigned int crtc_hdisplay; } ;



__attribute__((used)) static unsigned int FUNC_0(const struct drm_display_mode *VAR_0,
        bool VAR_1)
{
 if (VAR_1)
  return VAR_0->hsync_start - VAR_0->hdisplay;

 return VAR_0->crtc_hsync_start - VAR_0->crtc_hdisplay;
}
