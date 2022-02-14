
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_display_mode {int clock; int vrefresh; scalar_t__ vtotal; scalar_t__ htotal; scalar_t__ vsync_end; scalar_t__ vsync_start; scalar_t__ vdisplay; scalar_t__ hsync_end; scalar_t__ hsync_start; scalar_t__ hdisplay; } ;


 int FUNC_0 (struct drm_display_mode*) ;

void FUNC_1(struct drm_display_mode *VAR_0)
{
 VAR_0->hsync_start = VAR_0->hdisplay + 50;
 VAR_0->hsync_end = VAR_0->hsync_start + 50;
 VAR_0->htotal = VAR_0->hsync_end + 50;

 VAR_0->vsync_start = VAR_0->vdisplay + 50;
 VAR_0->vsync_end = VAR_0->vsync_start + 50;
 VAR_0->vtotal = VAR_0->vsync_end + 50;

 VAR_0->clock = (u32)VAR_0->htotal * (u32)VAR_0->vtotal / 100 * 6;
 VAR_0->vrefresh = FUNC_0(VAR_0);
}
