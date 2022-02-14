
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dw_mipi_dsi {int dummy; } ;
struct drm_display_mode {scalar_t__ hsync_end; scalar_t__ htotal; scalar_t__ hsync_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dw_mipi_dsi*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct dw_mipi_dsi*,struct drm_display_mode const*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct dw_mipi_dsi *VAR_3,
       const struct drm_display_mode *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_5 = VAR_4->htotal;
 VAR_6 = VAR_4->hsync_end - VAR_4->hsync_start;
 VAR_7 = VAR_4->htotal - VAR_4->hsync_end;





 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5);
 FUNC_0(VAR_3, VAR_1, VAR_8);

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_6);
 FUNC_0(VAR_3, VAR_2, VAR_8);

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_7);
 FUNC_0(VAR_3, VAR_0, VAR_8);
}
