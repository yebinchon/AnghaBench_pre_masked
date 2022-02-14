
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {unsigned int crtc_hsync_start; unsigned int crtc_hdisplay; unsigned int crtc_vsync_start; unsigned int crtc_vdisplay; unsigned int crtc_hsync_end; unsigned int crtc_vsync_end; int flags; int clock; } ;
struct adv7511 {int hsync_polarity; int vsync_polarity; scalar_t__ type; int f_tmds; int curr_mode; int regmap; scalar_t__ embedded_sync; } ;
typedef enum adv7511_sync_polarity { ____Placeholder_adv7511_sync_polarity } adv7511_sync_polarity ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct adv7511*,struct drm_display_mode const*) ;
 int FUNC_2 (int *,struct drm_display_mode const*) ;
 int FUNC_3 (struct drm_display_mode const*) ;
 int FUNC_4 (int ,int,int,unsigned int) ;
 int FUNC_5 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct adv7511 *VAR_13,
        const struct drm_display_mode *VAR_14,
        const struct drm_display_mode *VAR_15)
{
 unsigned int VAR_16;
 unsigned int VAR_17 = 0;
 unsigned int VAR_18 = 0;

 if (VAR_13->embedded_sync) {
  unsigned int VAR_19, VAR_20;
  unsigned int VAR_21, VAR_22;

  VAR_19 = VAR_15->crtc_hsync_start -
          VAR_15->crtc_hdisplay;
  VAR_21 = VAR_15->crtc_vsync_start -
          VAR_15->crtc_vdisplay;
  VAR_20 = VAR_15->crtc_hsync_end -
       VAR_15->crtc_hsync_start;
  VAR_22 = VAR_15->crtc_vsync_end -
       VAR_15->crtc_vsync_start;


  VAR_21 += 1;

  FUNC_5(VAR_13->regmap, VAR_4,
        ((VAR_19 >> 10) & 0x7) << 5);
  FUNC_5(VAR_13->regmap, FUNC_0(0),
        (VAR_19 >> 2) & 0xff);
  FUNC_5(VAR_13->regmap, FUNC_0(1),
        ((VAR_19 & 0x3) << 6) |
        ((VAR_20 >> 4) & 0x3f));
  FUNC_5(VAR_13->regmap, FUNC_0(2),
        ((VAR_20 & 0xf) << 4) |
        ((VAR_21 >> 6) & 0xf));
  FUNC_5(VAR_13->regmap, FUNC_0(3),
        ((VAR_21 & 0x3f) << 2) |
        ((VAR_22 >> 8) & 0x3));
  FUNC_5(VAR_13->regmap, FUNC_0(4),
        VAR_22 & 0xff);

  VAR_17 = !(VAR_15->flags & VAR_11);
  VAR_18 = !(VAR_15->flags & VAR_12);
 } else {
  enum adv7511_sync_polarity VAR_23;
  enum adv7511_sync_polarity VAR_24;






  if (VAR_15->flags & VAR_9)
   VAR_23 = VAR_6;
  else
   VAR_23 = VAR_5;

  if (VAR_15->flags & VAR_10)
   VAR_24 = VAR_6;
  else
   VAR_24 = VAR_5;

  if (VAR_13->hsync_polarity != VAR_23 &&
      VAR_13->hsync_polarity !=
      VAR_7)
   VAR_17 = 1;

  if (VAR_13->vsync_polarity != VAR_24 &&
      VAR_13->vsync_polarity !=
      VAR_7)
   VAR_18 = 1;
 }

 if (FUNC_3(VAR_14) <= 24)
  VAR_16 = VAR_0;
 else if (FUNC_3(VAR_14) <= 25)
  VAR_16 = VAR_1;
 else if (FUNC_3(VAR_14) <= 30)
  VAR_16 = VAR_2;
 else
  VAR_16 = VAR_3;

 FUNC_4(VAR_13->regmap, 0xfb,
  0x6, VAR_16 << 1);
 FUNC_4(VAR_13->regmap, 0x17,
  0x60, (VAR_18 << 6) | (VAR_17 << 5));

 if (VAR_13->type == VAR_8)
  FUNC_1(VAR_13, VAR_15);

 FUNC_2(&VAR_13->curr_mode, VAR_15);






 VAR_13->f_tmds = VAR_14->clock;
}
