
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sun4i_tcon {int dclk_min_div; int dclk_max_div; int regs; TYPE_1__* quirks; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {unsigned int crtc_htotal; unsigned int crtc_hsync_start; unsigned int crtc_vtotal; unsigned int crtc_vsync_start; int flags; int htotal; } ;
struct TYPE_2__ {int has_channel_0; } ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int VAR_18 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct sun4i_tcon*,struct drm_display_mode const*) ;
 int FUNC_10 (struct sun4i_tcon*,int ) ;
 int FUNC_11 (struct drm_display_mode const*,int ) ;
 int FUNC_12 (struct drm_encoder const*) ;
 int FUNC_13 (struct drm_encoder const*) ;

__attribute__((used)) static void FUNC_14(struct sun4i_tcon *VAR_19,
          const struct drm_encoder *VAR_20,
          const struct drm_display_mode *VAR_21)
{
 unsigned int VAR_22;
 u8 VAR_23;
 u32 VAR_24, VAR_25 = 0;

 FUNC_6(!VAR_19->quirks->has_channel_0);

 VAR_19->dclk_min_div = 7;
 VAR_19->dclk_max_div = 7;
 FUNC_9(VAR_19, VAR_21);


 FUNC_10(VAR_19, FUNC_12(VAR_20));


 VAR_23 = FUNC_11(VAR_21, 0);
 FUNC_7(VAR_19->regs, VAR_5,
      VAR_4,
      FUNC_5(VAR_23));





 VAR_22 = VAR_21->crtc_htotal - VAR_21->crtc_hsync_start;
 FUNC_0("Setting horizontal total %d, backporch %d\n",
    VAR_21->crtc_htotal, VAR_22);


 FUNC_8(VAR_19->regs, VAR_2,
       FUNC_2(VAR_21->htotal) |
       FUNC_1(VAR_22));





 VAR_22 = VAR_21->crtc_vtotal - VAR_21->crtc_vsync_start;
 FUNC_0("Setting vertical total %d, backporch %d\n",
    VAR_21->crtc_vtotal, VAR_22);


 FUNC_8(VAR_19->regs, VAR_3,
       FUNC_4(VAR_21->crtc_vtotal * 2) |
       FUNC_3(VAR_22));

 VAR_24 = VAR_13 |
  VAR_14 |
  VAR_12;
 if (FUNC_13(VAR_20) == 24)
  VAR_24 |= VAR_11;
 else
  VAR_24 |= VAR_10;

 FUNC_8(VAR_19->regs, VAR_15, VAR_24);


 if (!(VAR_21->flags & VAR_0))
  VAR_25 |= VAR_6;

 if (!(VAR_21->flags & VAR_1))
  VAR_25 |= VAR_8;

 FUNC_8(VAR_19->regs, VAR_7, VAR_25);


 FUNC_7(VAR_19->regs, VAR_18,
      VAR_16,
      VAR_17);


 FUNC_8(VAR_19->regs, VAR_9, 0xe0000000);
}
