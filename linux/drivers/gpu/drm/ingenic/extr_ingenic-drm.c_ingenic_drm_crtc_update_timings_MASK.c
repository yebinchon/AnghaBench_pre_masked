
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_drm {int map; scalar_t__ panel_is_sharp; } ;
struct drm_display_mode {unsigned int vsync_end; unsigned int vsync_start; unsigned int vtotal; unsigned int vdisplay; unsigned int hsync_end; unsigned int hsync_start; unsigned int htotal; unsigned int hdisplay; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ingenic_drm *VAR_19,
         struct drm_display_mode *VAR_20)
{
 unsigned int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;

 VAR_21 = VAR_20->vsync_end - VAR_20->vsync_start;
 VAR_22 = VAR_20->vtotal - VAR_20->vsync_start;
 VAR_23 = VAR_22 + VAR_20->vdisplay;
 VAR_24 = VAR_23 + VAR_20->vsync_start - VAR_20->vdisplay;

 VAR_25 = VAR_20->hsync_end - VAR_20->hsync_start;
 VAR_26 = VAR_20->htotal - VAR_20->hsync_start;
 VAR_27 = VAR_26 + VAR_20->hdisplay;
 VAR_28 = VAR_27 + VAR_20->hsync_start - VAR_20->hdisplay;

 FUNC_0(VAR_19->map, VAR_18,
       0 << VAR_9 |
       VAR_21 << VAR_8);

 FUNC_0(VAR_19->map, VAR_13,
       0 << VAR_5 |
       VAR_25 << VAR_4);

 FUNC_0(VAR_19->map, VAR_17,
       VAR_28 << VAR_6 |
       VAR_24 << VAR_7);

 FUNC_0(VAR_19->map, VAR_11,
       VAR_26 << VAR_1 |
       VAR_27 << VAR_0);
 FUNC_0(VAR_19->map, VAR_12,
       VAR_22 << VAR_3 |
       VAR_23 << VAR_2);

 if (VAR_19->panel_is_sharp) {
  FUNC_0(VAR_19->map, VAR_14, VAR_27 << 16 | (VAR_27 + 1));
  FUNC_0(VAR_19->map, VAR_10, VAR_27 << 16 | (VAR_27 + 1));
  FUNC_0(VAR_19->map, VAR_16, VAR_25 << 16 | (VAR_25 + 1));
  FUNC_0(VAR_19->map, VAR_15, VAR_20->htotal << 16);
 }
}
