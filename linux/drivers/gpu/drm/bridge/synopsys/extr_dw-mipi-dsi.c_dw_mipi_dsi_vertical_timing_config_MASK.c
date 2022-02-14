
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dw_mipi_dsi {int dummy; } ;
struct drm_display_mode {scalar_t__ vsync_end; scalar_t__ vtotal; scalar_t__ vdisplay; scalar_t__ vsync_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dw_mipi_dsi*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct dw_mipi_dsi *VAR_4,
     const struct drm_display_mode *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_6 = VAR_5->vdisplay;
 VAR_7 = VAR_5->vsync_end - VAR_5->vsync_start;
 VAR_8 = VAR_5->vsync_start - VAR_5->vdisplay;
 VAR_9 = VAR_5->vtotal - VAR_5->vsync_end;

 FUNC_0(VAR_4, VAR_0, VAR_6);
 FUNC_0(VAR_4, VAR_3, VAR_7);
 FUNC_0(VAR_4, VAR_2, VAR_8);
 FUNC_0(VAR_4, VAR_1, VAR_9);
}
