
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ hsync_start; scalar_t__ hsync_end; scalar_t__ htotal; scalar_t__ hskew; scalar_t__ vdisplay; scalar_t__ vsync_start; scalar_t__ vsync_end; scalar_t__ vtotal; scalar_t__ vscan; } ;



__attribute__((used)) static bool FUNC_0(const struct drm_display_mode *VAR_0,
       const struct drm_display_mode *VAR_1)
{
 return VAR_0->hdisplay == VAR_1->hdisplay &&
  VAR_0->hsync_start == VAR_1->hsync_start &&
  VAR_0->hsync_end == VAR_1->hsync_end &&
  VAR_0->htotal == VAR_1->htotal &&
  VAR_0->hskew == VAR_1->hskew &&
  VAR_0->vdisplay == VAR_1->vdisplay &&
  VAR_0->vsync_start == VAR_1->vsync_start &&
  VAR_0->vsync_end == VAR_1->vsync_end &&
  VAR_0->vtotal == VAR_1->vtotal &&
  VAR_0->vscan == VAR_1->vscan;
}
