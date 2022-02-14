
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int clock; int vtotal; int vsync_end; int vsync_start; int vdisplay; int htotal; int hsync_end; int hsync_start; int hdisplay; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_display_mode*,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_display_mode *VAR_1,
 struct drm_display_mode *VAR_2)
{
 VAR_2->hdisplay = VAR_1->hdisplay;
 VAR_2->hsync_start = VAR_1->hsync_start;
 VAR_2->hsync_end = VAR_1->hsync_end;
 VAR_2->htotal = VAR_1->htotal;

 VAR_2->vdisplay = VAR_1->vdisplay;
 VAR_2->vsync_start = VAR_1->vsync_start;
 VAR_2->vsync_end = VAR_1->vsync_end;
 VAR_2->vtotal = VAR_1->vtotal;

 VAR_2->clock = VAR_1->clock;

 FUNC_0(VAR_2, VAR_0);
}
