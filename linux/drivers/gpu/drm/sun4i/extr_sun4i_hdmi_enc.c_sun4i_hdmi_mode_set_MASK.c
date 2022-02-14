
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sun4i_hdmi {scalar_t__ base; TYPE_1__* variant; int tmds_clk; int mod_clk; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int crtc_clock; unsigned int hdisplay; unsigned int vdisplay; unsigned int htotal; unsigned int hsync_start; unsigned int vtotal; unsigned int vsync_start; unsigned int hsync_end; unsigned int vsync_end; int flags; } ;
struct TYPE_2__ {int pad_ctrl1_init_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int) ;
 struct sun4i_hdmi* FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct drm_encoder *VAR_14,
    struct drm_display_mode *VAR_15,
    struct drm_display_mode *VAR_16)
{
 struct sun4i_hdmi *VAR_17 = FUNC_3(VAR_14);
 unsigned int VAR_18, VAR_19;
 u32 VAR_20;

 FUNC_2(VAR_17->mod_clk, VAR_15->crtc_clock * 1000);
 FUNC_2(VAR_17->tmds_clk, VAR_15->crtc_clock * 1000);


 FUNC_5(VAR_4,
        VAR_17->base + VAR_5);
 VAR_20 = FUNC_4(VAR_17->base + VAR_3);
 VAR_20 &= VAR_2;
 VAR_20 |= VAR_17->variant->pad_ctrl1_init_val;
 FUNC_5(VAR_20, VAR_17->base + VAR_3);
 VAR_20 = FUNC_4(VAR_17->base + VAR_3);


 FUNC_5(FUNC_0(VAR_15->hdisplay) |
        FUNC_1(VAR_15->vdisplay),
        VAR_17->base + VAR_6);

 VAR_18 = VAR_15->htotal - VAR_15->hsync_start;
 VAR_19 = VAR_15->vtotal - VAR_15->vsync_start;
 FUNC_5(FUNC_0(VAR_18) | FUNC_1(VAR_19),
        VAR_17->base + VAR_7);

 VAR_18 = VAR_15->hsync_start - VAR_15->hdisplay;
 VAR_19 = VAR_15->vsync_start - VAR_15->vdisplay;
 FUNC_5(FUNC_0(VAR_18) | FUNC_1(VAR_19),
        VAR_17->base + VAR_8);

 VAR_18 = VAR_15->hsync_end - VAR_15->hsync_start;
 VAR_19 = VAR_15->vsync_end - VAR_15->vsync_start;
 FUNC_5(FUNC_0(VAR_18) | FUNC_1(VAR_19),
        VAR_17->base + VAR_13);

 VAR_20 = VAR_11;
 if (VAR_15->flags & VAR_0)
  VAR_20 |= VAR_9;

 if (VAR_15->flags & VAR_1)
  VAR_20 |= VAR_12;

 FUNC_5(VAR_20, VAR_17->base + VAR_10);
}
