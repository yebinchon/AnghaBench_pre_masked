
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int height_mm; int width_mm; int vtotal; int htotal; int vsync_end; int hsync_end; int vsync_start; int hsync_start; int vdisplay; int hdisplay; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct drm_display_mode *VAR_1,
    unsigned int VAR_2)
{
 if (VAR_2 == 0 || VAR_2 == 180) {
  return 0;
 } else if (VAR_2 == 90 || VAR_2 == 270) {
  FUNC_0(VAR_1->hdisplay, VAR_1->vdisplay);
  FUNC_0(VAR_1->hsync_start, VAR_1->vsync_start);
  FUNC_0(VAR_1->hsync_end, VAR_1->vsync_end);
  FUNC_0(VAR_1->htotal, VAR_1->vtotal);
  FUNC_0(VAR_1->width_mm, VAR_1->height_mm);
  return 0;
 } else {
  return -VAR_0;
 }
}
