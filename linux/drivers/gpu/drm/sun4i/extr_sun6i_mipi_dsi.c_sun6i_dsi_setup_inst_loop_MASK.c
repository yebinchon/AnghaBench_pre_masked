
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sun6i_dsi {int regs; struct mipi_dsi_device* device; } ;
struct mipi_dsi_device {int mode_flags; } ;
struct drm_display_mode {int htotal; int hdisplay; int clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct sun6i_dsi *VAR_4,
          struct drm_display_mode *VAR_5)
{
 struct mipi_dsi_device *VAR_6 = VAR_4->device;
 u16 VAR_7 = 50 - 1;

 if (VAR_6->mode_flags & VAR_2) {
  u32 VAR_8 = (VAR_5->htotal - VAR_5->hdisplay) * 150;

  VAR_7 = (VAR_8 / ((VAR_5->clock / 1000) * 8));
  VAR_7 -= 50;
 }

 FUNC_3(VAR_4->regs, VAR_3,
       2 << (4 * VAR_1) |
       3 << (4 * VAR_0));

 FUNC_3(VAR_4->regs, FUNC_2(0),
       FUNC_0(50 - 1) |
       FUNC_1(VAR_7));
 FUNC_3(VAR_4->regs, FUNC_2(1),
       FUNC_0(50 - 1) |
       FUNC_1(VAR_7));
}
