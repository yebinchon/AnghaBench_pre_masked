
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int htotal; int hdisplay; int hsync_end; int hsync_start; int vsync_start; int vdisplay; } ;



__attribute__((used)) static bool
FUNC_0(const struct drm_display_mode *VAR_0)
{
 return (VAR_0->htotal - VAR_0->hdisplay == 160) &&
        (VAR_0->hsync_end - VAR_0->hdisplay == 80) &&
        (VAR_0->hsync_end - VAR_0->hsync_start == 32) &&
        (VAR_0->vsync_start - VAR_0->vdisplay == 3);
}
