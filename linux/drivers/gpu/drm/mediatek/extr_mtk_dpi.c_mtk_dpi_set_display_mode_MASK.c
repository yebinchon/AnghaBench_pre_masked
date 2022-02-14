
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videomode {unsigned int pixelclock; int flags; int vactive; int hactive; int vfront_porch; int vback_porch; int vsync_len; int hfront_porch; int hback_porch; int hsync_len; int member_0; } ;
struct mtk_dpi_yc_limit {int c_bottom; int c_top; int y_bottom; int y_top; } ;
struct mtk_dpi_sync_param {int shift_half_line; int front_porch; int back_porch; int sync_width; int member_0; } ;
struct mtk_dpi_polarities {void* vsync_pol; void* hsync_pol; void* de_pol; void* ck_pol; } ;
struct mtk_dpi {int color_format; int yc_map; int channel_swap; int bit_num; int dev; int pixel_clk; int tvd_clk; TYPE_1__* conf; } ;
struct drm_display_mode {int flags; int clock; } ;
struct TYPE_2__ {unsigned int (* cal_factor ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,char*,unsigned long,unsigned int) ;
 int FUNC_3 (struct drm_display_mode*,struct videomode*) ;
 int FUNC_4 (struct mtk_dpi*) ;
 int FUNC_5 (struct mtk_dpi*,int) ;
 int FUNC_6 (struct mtk_dpi*,int ) ;
 int FUNC_7 (struct mtk_dpi*,struct mtk_dpi_yc_limit*) ;
 int FUNC_8 (struct mtk_dpi*,int ) ;
 int FUNC_9 (struct mtk_dpi*,int ) ;
 int FUNC_10 (struct mtk_dpi*) ;
 int FUNC_11 (struct mtk_dpi*,int ,int) ;
 int FUNC_12 (struct mtk_dpi*,struct mtk_dpi_sync_param*) ;
 int FUNC_13 (struct mtk_dpi*,int) ;
 int FUNC_14 (struct mtk_dpi*,struct mtk_dpi_polarities*) ;
 int FUNC_15 (struct mtk_dpi*,struct mtk_dpi_sync_param*) ;
 int FUNC_16 (struct mtk_dpi*,struct mtk_dpi_sync_param*) ;
 int FUNC_17 (struct mtk_dpi*,struct mtk_dpi_sync_param*) ;
 int FUNC_18 (struct mtk_dpi*,struct mtk_dpi_sync_param*) ;
 int FUNC_19 (struct mtk_dpi*,int ) ;
 int FUNC_20 (struct mtk_dpi*,int) ;
 unsigned int FUNC_21 (int ) ;

__attribute__((used)) static int FUNC_22(struct mtk_dpi *VAR_6,
        struct drm_display_mode *VAR_7)
{
 struct mtk_dpi_yc_limit VAR_8;
 struct mtk_dpi_polarities VAR_9;
 struct mtk_dpi_sync_param VAR_10;
 struct mtk_dpi_sync_param VAR_11 = { 0 };
 struct mtk_dpi_sync_param VAR_12 = { 0 };
 struct mtk_dpi_sync_param VAR_13 = { 0 };
 struct mtk_dpi_sync_param VAR_14 = { 0 };
 struct videomode VAR_15 = { 0 };
 unsigned long VAR_16;
 unsigned int VAR_17;


 VAR_17 = VAR_6->conf->cal_factor(VAR_7->clock);
 FUNC_3(VAR_7, &VAR_15);
 VAR_16 = VAR_15.pixelclock * VAR_17;

 FUNC_2(VAR_6->dev, "Want PLL %lu Hz, pixel clock %lu Hz\n",
  VAR_16, VAR_15.pixelclock);

 FUNC_1(VAR_6->tvd_clk, VAR_16);
 VAR_16 = FUNC_0(VAR_6->tvd_clk);

 VAR_15.pixelclock = VAR_16 / VAR_17;
 FUNC_1(VAR_6->pixel_clk, VAR_15.pixelclock);
 VAR_15.pixelclock = FUNC_0(VAR_6->pixel_clk);

 FUNC_2(VAR_6->dev, "Got  PLL %lu Hz, pixel clock %lu Hz\n",
  VAR_16, VAR_15.pixelclock);

 VAR_8.c_bottom = 0x0010;
 VAR_8.c_top = 0x0FE0;
 VAR_8.y_bottom = 0x0010;
 VAR_8.y_top = 0x0FE0;

 VAR_9.ck_pol = VAR_4;
 VAR_9.de_pol = VAR_5;
 VAR_9.hsync_pol = VAR_15.flags & VAR_0 ?
       VAR_4 : VAR_5;
 VAR_9.vsync_pol = VAR_15.flags & VAR_2 ?
       VAR_4 : VAR_5;
 VAR_10.sync_width = VAR_15.hsync_len;
 VAR_10.back_porch = VAR_15.hback_porch;
 VAR_10.front_porch = VAR_15.hfront_porch;
 VAR_10.shift_half_line = 0;
 VAR_11.sync_width = VAR_15.vsync_len;
 VAR_11.back_porch = VAR_15.vback_porch;
 VAR_11.front_porch = VAR_15.vfront_porch;
 VAR_11.shift_half_line = 0;

 if (VAR_15.flags & VAR_1 &&
     VAR_7->flags & VAR_3) {
  VAR_12 = VAR_11;
  VAR_13 = VAR_11;
  VAR_14 = VAR_11;
  VAR_12.shift_half_line = 1;
  VAR_14.shift_half_line = 1;
 } else if (VAR_15.flags & VAR_1 &&
     !(VAR_7->flags & VAR_3)) {
  VAR_12 = VAR_11;
  VAR_12.shift_half_line = 1;
 } else if (!(VAR_15.flags & VAR_1) &&
     VAR_7->flags & VAR_3) {
  VAR_13 = VAR_11;
 }
 FUNC_20(VAR_6, 1);
 FUNC_14(VAR_6, &VAR_9);

 FUNC_12(VAR_6, &VAR_10);
 FUNC_16(VAR_6, &VAR_11);
 FUNC_18(VAR_6, &VAR_13);
 FUNC_15(VAR_6, &VAR_12);
 FUNC_17(VAR_6, &VAR_14);

 FUNC_5(VAR_6, !!(VAR_7->flags & VAR_3));
 FUNC_13(VAR_6, !!(VAR_15.flags &
      VAR_1));
 if (VAR_15.flags & VAR_1)
  FUNC_11(VAR_6, VAR_15.hactive, VAR_15.vactive >> 1);
 else
  FUNC_11(VAR_6, VAR_15.hactive, VAR_15.vactive);

 FUNC_7(VAR_6, &VAR_8);
 FUNC_6(VAR_6, VAR_6->bit_num);
 FUNC_8(VAR_6, VAR_6->channel_swap);
 FUNC_19(VAR_6, VAR_6->yc_map);
 FUNC_9(VAR_6, VAR_6->color_format);
 FUNC_4(VAR_6);
 FUNC_10(VAR_6);
 FUNC_20(VAR_6, 0);

 return 0;
}
