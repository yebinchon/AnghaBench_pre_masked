
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mipi_dsi_device {int lanes; } ;
struct drm_display_mode {unsigned int hsync_end; unsigned int hsync_start; unsigned int hdisplay; int htotal; unsigned int vsync_end; unsigned int vsync_start; unsigned int vdisplay; int vtotal; } ;
struct adv7511 {int regmap_cec; struct drm_display_mode curr_mode; struct mipi_dsi_device* dsi; } ;


 int FUNC_0 (int ,int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct adv7511 *VAR_0)
{
 struct mipi_dsi_device *VAR_1 = VAR_0->dsi;
 struct drm_display_mode *VAR_2 = &VAR_0->curr_mode;
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 u8 VAR_9[] = { 6, 4, 3 };

 VAR_3 = VAR_2->hsync_end - VAR_2->hsync_start;
 VAR_4 = VAR_2->hsync_start - VAR_2->hdisplay;
 VAR_5 = VAR_2->htotal - VAR_2->hsync_end;
 VAR_6 = VAR_2->vsync_end - VAR_2->vsync_start;
 VAR_7 = VAR_2->vsync_start - VAR_2->vdisplay;
 VAR_8 = VAR_2->vtotal - VAR_2->vsync_end;


 FUNC_0(VAR_0->regmap_cec, 0x16,
       VAR_9[VAR_1->lanes - 2] << 3);


 FUNC_0(VAR_0->regmap_cec, 0x28, VAR_2->htotal >> 4);
 FUNC_0(VAR_0->regmap_cec, 0x29, (VAR_2->htotal << 4) & 0xff);
 FUNC_0(VAR_0->regmap_cec, 0x2a, VAR_3 >> 4);
 FUNC_0(VAR_0->regmap_cec, 0x2b, (VAR_3 << 4) & 0xff);
 FUNC_0(VAR_0->regmap_cec, 0x2c, VAR_4 >> 4);
 FUNC_0(VAR_0->regmap_cec, 0x2d, (VAR_4 << 4) & 0xff);
 FUNC_0(VAR_0->regmap_cec, 0x2e, VAR_5 >> 4);
 FUNC_0(VAR_0->regmap_cec, 0x2f, (VAR_5 << 4) & 0xff);


 FUNC_0(VAR_0->regmap_cec, 0x30, VAR_2->vtotal >> 4);
 FUNC_0(VAR_0->regmap_cec, 0x31, (VAR_2->vtotal << 4) & 0xff);
 FUNC_0(VAR_0->regmap_cec, 0x32, VAR_6 >> 4);
 FUNC_0(VAR_0->regmap_cec, 0x33, (VAR_6 << 4) & 0xff);
 FUNC_0(VAR_0->regmap_cec, 0x34, VAR_7 >> 4);
 FUNC_0(VAR_0->regmap_cec, 0x35, (VAR_7 << 4) & 0xff);
 FUNC_0(VAR_0->regmap_cec, 0x36, VAR_8 >> 4);
 FUNC_0(VAR_0->regmap_cec, 0x37, (VAR_8 << 4) & 0xff);
}
