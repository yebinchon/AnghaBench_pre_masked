
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_dpi_timing {void* vfp_count; void* vbp_count; void* vsync_count; void* hactive_count; void* hfp_count; void* hbp_count; void* hsync_count; } ;
struct drm_display_mode {int hdisplay; int hsync_start; int hsync_end; int htotal; int vsync_start; int vdisplay; int vsync_end; int vtotal; } ;


 void* FUNC_0 (int,int,int) ;

int FUNC_1(struct drm_display_mode *VAR_0,
    struct mdfld_dsi_dpi_timing *VAR_1,
    int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_7 = VAR_0->hdisplay;
 VAR_5 = VAR_0->hsync_start - VAR_0->hdisplay;
 VAR_4 = VAR_0->hsync_end - VAR_0->hsync_start;
 VAR_6 = VAR_0->htotal - VAR_0->hsync_end;

 VAR_9 = VAR_0->vsync_start - VAR_0->vdisplay;
 VAR_8 = VAR_0->vsync_end - VAR_0->vsync_start;
 VAR_10 = VAR_0->vtotal - VAR_0->vsync_end;





 VAR_1->hsync_count = FUNC_0(
      VAR_4, VAR_2, VAR_3);
 VAR_1->hbp_count = FUNC_0(
      VAR_6, VAR_2, VAR_3);
 VAR_1->hfp_count = FUNC_0(
      VAR_5, VAR_2, VAR_3);
 VAR_1->hactive_count = FUNC_0(
      VAR_7, VAR_2, VAR_3);
 VAR_1->vsync_count = FUNC_0(
      VAR_8, VAR_2, VAR_3);
 VAR_1->vbp_count = FUNC_0(
      VAR_10, VAR_2, VAR_3);
 VAR_1->vfp_count = FUNC_0(
      VAR_9, VAR_2, VAR_3);

 return 0;
}
