
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tv_mode {scalar_t__ vback_porch; scalar_t__ vsync_len; scalar_t__ vfront_porch; scalar_t__ vdisplay; scalar_t__ hback_porch; scalar_t__ hsync_len; scalar_t__ hfront_porch; scalar_t__ hdisplay; } ;
struct drm_display_mode {int clock; scalar_t__ vsync_end; scalar_t__ vtotal; scalar_t__ vsync_start; scalar_t__ vdisplay; scalar_t__ hsync_end; scalar_t__ htotal; scalar_t__ hsync_start; scalar_t__ hdisplay; int flags; int type; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(const struct tv_mode *VAR_2,
          struct drm_display_mode *VAR_3)
{
 FUNC_0("Creating mode %s\n", VAR_3->name);

 VAR_3->type = VAR_1;
 VAR_3->clock = 13500;
 VAR_3->flags = VAR_0;

 VAR_3->hdisplay = VAR_2->hdisplay;
 VAR_3->hsync_start = VAR_3->hdisplay + VAR_2->hfront_porch;
 VAR_3->hsync_end = VAR_3->hsync_start + VAR_2->hsync_len;
 VAR_3->htotal = VAR_3->hsync_end + VAR_2->hback_porch;

 VAR_3->vdisplay = VAR_2->vdisplay;
 VAR_3->vsync_start = VAR_3->vdisplay + VAR_2->vfront_porch;
 VAR_3->vsync_end = VAR_3->vsync_start + VAR_2->vsync_len;
 VAR_3->vtotal = VAR_3->vsync_end + VAR_2->vback_porch;
}
