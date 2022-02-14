
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msm_dsi_host {int mode_flags; int channel; int format; struct drm_display_mode* mode; } ;
struct drm_display_mode {int htotal; int vtotal; int hsync_end; int hsync_start; int vsync_end; int vsync_start; int hdisplay; int vdisplay; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct msm_dsi_host*,int ,int) ;

__attribute__((used)) static void FUNC_18(struct msm_dsi_host *VAR_10, bool VAR_11)
{
 struct drm_display_mode *VAR_12 = VAR_10->mode;
 u32 VAR_13 = 0, VAR_14 = 0;
 u32 VAR_15 = VAR_12->htotal;
 u32 VAR_16 = VAR_12->vtotal;
 u32 VAR_17 = VAR_12->hsync_end - VAR_12->hsync_start;
 u32 VAR_18 = VAR_12->vsync_end - VAR_12->vsync_start;
 u32 VAR_19 = VAR_15 - VAR_12->hsync_start;
 u32 VAR_20 = VAR_19 + VAR_12->hdisplay;
 u32 VAR_21 = VAR_16 - VAR_12->vsync_start;
 u32 VAR_22 = VAR_21 + VAR_12->vdisplay;
 u32 VAR_23 = VAR_12->hdisplay;
 u32 VAR_24;

 FUNC_0("");
 if (VAR_11) {
  VAR_15 /= 2;
  VAR_17 /= 2;
  VAR_19 /= 2;
  VAR_20 /= 2;
  VAR_23 /= 2;
 }

 if (VAR_10->mode_flags & VAR_1) {
  FUNC_17(VAR_10, VAR_2,
   FUNC_4(VAR_19) |
   FUNC_3(VAR_20));
  FUNC_17(VAR_10, VAR_4,
   FUNC_8(VAR_21) |
   FUNC_7(VAR_22));
  FUNC_17(VAR_10, VAR_9,
   FUNC_14(VAR_15 - 1) |
   FUNC_15(VAR_16 - 1));

  FUNC_17(VAR_10, VAR_3,
   FUNC_2(VAR_13) |
   FUNC_1(VAR_17));
  FUNC_17(VAR_10, VAR_5, 0);
  FUNC_17(VAR_10, VAR_6,
   FUNC_6(VAR_14) |
   FUNC_5(VAR_18));
 } else {

  VAR_24 = VAR_23 * FUNC_16(VAR_10->format) / 8 + 1;

  FUNC_17(VAR_10, VAR_7,
   FUNC_11(VAR_24) |
   FUNC_10(
     VAR_10->channel) |
   FUNC_9(
     VAR_0));

  FUNC_17(VAR_10, VAR_8,
   FUNC_12(VAR_23) |
   FUNC_13(VAR_12->vdisplay));
 }
}
