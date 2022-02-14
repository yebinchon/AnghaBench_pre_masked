
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sun6i_dsi {int regs; struct mipi_dsi_device* device; } ;
struct mipi_dsi_device {int mode_flags; int format; } ;
struct drm_display_mode {int hsync_end; int hdisplay; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct sun6i_dsi*,struct drm_display_mode*,int,int) ;
 int FUNC_8 (struct sun6i_dsi*,struct drm_display_mode*,int) ;
 int FUNC_9 (struct sun6i_dsi*,struct drm_display_mode*) ;

__attribute__((used)) static void FUNC_10(struct sun6i_dsi *VAR_6,
      struct drm_display_mode *VAR_7)
{
 struct mipi_dsi_device *VAR_8 = VAR_6->device;
 u32 VAR_9 = 0;

 if (VAR_8->mode_flags & VAR_0) {
  u16 VAR_10 = FUNC_9(VAR_6, VAR_7);
  u16 VAR_11, VAR_12;

  VAR_12 = FUNC_8(VAR_6, VAR_7, VAR_10);
  VAR_11 = FUNC_7(VAR_6, VAR_7, VAR_10, VAR_12);

  FUNC_6(VAR_6->regs, VAR_1,
        FUNC_0(VAR_11) |
        FUNC_1(VAR_12));

  FUNC_6(VAR_6->regs, VAR_2,
        FUNC_2(VAR_10) |
        FUNC_3(VAR_3));

  VAR_9 = VAR_4;
 } else if ((VAR_7->hsync_end - VAR_7->hdisplay) > 20) {

  u16 VAR_13 = (VAR_7->hsync_end - VAR_7->hdisplay) - 20;

  VAR_13 *= FUNC_5(VAR_8->format);
  VAR_13 /= 32;

  VAR_9 = (VAR_4 |
         FUNC_4(VAR_13));
 }

 FUNC_6(VAR_6->regs, VAR_5, VAR_9);
}
