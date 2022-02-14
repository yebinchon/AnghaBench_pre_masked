
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int vsync_start; int vdisplay; int vsync_end; int vtotal; int clock; } ;



__attribute__((used)) static void FUNC_0(struct drm_display_mode *VAR_0,
         int VAR_1, int VAR_2,
         int VAR_3)
{
 int VAR_4 = VAR_0->vsync_start - VAR_0->vdisplay + VAR_3;
 int VAR_5 = VAR_0->vsync_end - VAR_0->vdisplay + VAR_3;
 int VAR_6 = VAR_0->vtotal * VAR_1 /
  (VAR_0->vdisplay - VAR_2 - VAR_3);

 VAR_0->clock = VAR_0->clock * VAR_6 / VAR_0->vtotal;

 VAR_0->vdisplay = VAR_1;
 VAR_0->vsync_start = VAR_1 + VAR_4 * VAR_6 / VAR_0->vtotal;
 VAR_0->vsync_end = VAR_1 + VAR_5 * VAR_6 / VAR_0->vtotal;
 VAR_0->vtotal = VAR_6;
}
