
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sun4i_tcon {int dclk_min_div; int dclk_max_div; int regs; int dclk; TYPE_1__* quirks; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {unsigned int crtc_htotal; unsigned int crtc_hsync_start; unsigned int crtc_vtotal; unsigned int crtc_vsync_start; unsigned int crtc_hsync_end; unsigned int crtc_vsync_end; int flags; } ;
struct drm_display_info {int bus_flags; } ;
struct drm_connector {struct drm_display_info display_info; } ;
struct TYPE_2__ {int has_channel_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int) ;
 int VAR_7 ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ,int,int) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (struct sun4i_tcon*,struct drm_display_mode const*) ;
 int FUNC_13 (struct sun4i_tcon*,struct drm_connector*) ;
 int FUNC_14 (struct drm_display_mode const*,int ) ;
 struct drm_connector* FUNC_15 (struct drm_encoder const*) ;

__attribute__((used)) static void FUNC_16(struct sun4i_tcon *VAR_18,
         const struct drm_encoder *VAR_19,
         const struct drm_display_mode *VAR_20)
{
 struct drm_connector *VAR_21 = FUNC_15(VAR_19);
 const struct drm_display_info *VAR_22 = &VAR_21->display_info;
 unsigned int VAR_23, VAR_24, VAR_25;
 u8 VAR_26;
 u32 VAR_27 = 0;

 FUNC_8(!VAR_18->quirks->has_channel_0);

 VAR_18->dclk_min_div = 6;
 VAR_18->dclk_max_div = 127;
 FUNC_12(VAR_18, VAR_20);


 FUNC_13(VAR_18, VAR_21);


 VAR_26 = FUNC_14(VAR_20, 0);
 FUNC_10(VAR_18->regs, VAR_9,
      VAR_8,
      FUNC_7(VAR_26));





 VAR_23 = VAR_20->crtc_htotal - VAR_20->crtc_hsync_start;
 FUNC_0("Setting horizontal total %d, backporch %d\n",
    VAR_20->crtc_htotal, VAR_23);


 FUNC_11(VAR_18->regs, VAR_5,
       FUNC_2(VAR_20->crtc_htotal) |
       FUNC_1(VAR_23));





 VAR_23 = VAR_20->crtc_vtotal - VAR_20->crtc_vsync_start;
 FUNC_0("Setting vertical total %d, backporch %d\n",
    VAR_20->crtc_vtotal, VAR_23);


 FUNC_11(VAR_18->regs, VAR_6,
       FUNC_4(VAR_20->crtc_vtotal * 2) |
       FUNC_3(VAR_23));


 VAR_24 = VAR_20->crtc_hsync_end - VAR_20->crtc_hsync_start;
 VAR_25 = VAR_20->crtc_vsync_end - VAR_20->crtc_vsync_start;
 FUNC_0("Setting HSYNC %d, VSYNC %d\n", VAR_24, VAR_25);
 FUNC_11(VAR_18->regs, VAR_7,
       FUNC_6(VAR_25) |
       FUNC_5(VAR_24));


 if (VAR_20->flags & VAR_3)
  VAR_27 |= VAR_11;

 if (VAR_20->flags & VAR_4)
  VAR_27 |= VAR_13;

 if (VAR_22->bus_flags & VAR_0)
  VAR_27 |= VAR_10;
 if (VAR_22->bus_flags & VAR_2)
  FUNC_9(VAR_18->dclk, 240);

 if (VAR_22->bus_flags & VAR_1)
  FUNC_9(VAR_18->dclk, 0);

 FUNC_10(VAR_18->regs, VAR_12,
      VAR_11 |
      VAR_13 |
      VAR_10,
      VAR_27);


 FUNC_10(VAR_18->regs, VAR_17,
      VAR_15,
      VAR_16);


 FUNC_11(VAR_18->regs, VAR_14, 0);
}
