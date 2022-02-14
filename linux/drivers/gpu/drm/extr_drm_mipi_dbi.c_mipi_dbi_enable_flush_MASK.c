
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dbi_dev {int enabled; int backlight; int drm; } ;
struct drm_rect {int y2; int y1; int x2; int x1; } ;
struct drm_plane_state {struct drm_framebuffer* fb; } ;
struct drm_framebuffer {int height; int width; } ;
struct drm_crtc_state {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_framebuffer*,struct drm_rect*) ;

void FUNC_4(struct mipi_dbi_dev *VAR_0,
      struct drm_crtc_state *VAR_1,
      struct drm_plane_state *VAR_2)
{
 struct drm_framebuffer *VAR_3 = VAR_2->fb;
 struct drm_rect VAR_4 = {
  .x1 = 0,
  .x2 = VAR_3->width,
  .y1 = 0,
  .y2 = VAR_3->height,
 };
 int VAR_5;

 if (!FUNC_1(&VAR_0->drm, &VAR_5))
  return;

 VAR_0->enabled = 1;
 FUNC_3(VAR_3, &VAR_4);
 FUNC_0(VAR_0->backlight);

 FUNC_2(VAR_5);
}
