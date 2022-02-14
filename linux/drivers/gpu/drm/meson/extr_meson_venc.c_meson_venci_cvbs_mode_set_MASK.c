
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ current_mode; } ;
struct meson_drm {TYPE_1__ venc; scalar_t__ io_base; } ;
struct meson_cvbs_enci_mode {scalar_t__ mode_tag; int hso_begin; int hso_end; int vso_even; int vso_odd; int video_prog_mode; int video_mode; int yc_delay; int pixel_start; int pixel_end; int top_field_line_start; int top_field_line_end; int bottom_field_line_start; int bottom_field_line_end; int video_saturation; int video_contrast; int video_brightness; int video_hue; int analog_sync_adj; int sch_adjust; int macv_max_amp; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_4 (int) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct meson_drm*,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

void FUNC_9(struct meson_drm *VAR_60,
          struct meson_cvbs_enci_mode *VAR_61)
{
 u32 VAR_62;

 if (VAR_61->mode_tag == VAR_60->venc.current_mode)
  return;


 FUNC_8(VAR_0 | 0x10,
         VAR_60->io_base + FUNC_5(VAR_1));
 FUNC_8(FUNC_1(2) |
         FUNC_0(1),
         VAR_60->io_base + FUNC_5(VAR_2));


 FUNC_8(0, VAR_60->io_base + FUNC_5(VAR_36));


 FUNC_8(0, VAR_60->io_base + FUNC_5(VAR_28));
 FUNC_8(0, VAR_60->io_base + FUNC_5(VAR_29));


 FUNC_8(VAR_61->hso_begin,
   VAR_60->io_base + FUNC_5(VAR_10));
 FUNC_8(VAR_61->hso_end,
   VAR_60->io_base + FUNC_5(VAR_11));


 FUNC_8(VAR_61->vso_even,
   VAR_60->io_base + FUNC_5(VAR_13));
 FUNC_8(VAR_61->vso_odd,
   VAR_60->io_base + FUNC_5(VAR_14));


 FUNC_8(VAR_7 |
         FUNC_2(VAR_61->macv_max_amp),
         VAR_60->io_base + FUNC_5(VAR_6));


 FUNC_8(VAR_61->video_prog_mode,
   VAR_60->io_base + FUNC_5(VAR_59));
 FUNC_8(VAR_61->video_mode,
   VAR_60->io_base + FUNC_5(VAR_28));
 FUNC_8(FUNC_4(2) |
         VAR_30 |
         VAR_31,
         VAR_60->io_base + FUNC_5(VAR_29));

 FUNC_7(VAR_61->sch_adjust, VAR_60->io_base + FUNC_5(VAR_33));


 FUNC_8(0x07, VAR_60->io_base + FUNC_5(VAR_12));


 FUNC_8(VAR_61->yc_delay, VAR_60->io_base + FUNC_5(VAR_34));


 FUNC_8(VAR_61->pixel_start,
   VAR_60->io_base + FUNC_5(VAR_22));
 FUNC_8(VAR_61->pixel_end,
   VAR_60->io_base + FUNC_5(VAR_21));

 FUNC_8(VAR_61->top_field_line_start,
   VAR_60->io_base + FUNC_5(VAR_20));
 FUNC_8(VAR_61->top_field_line_end,
   VAR_60->io_base + FUNC_5(VAR_19));

 FUNC_8(VAR_61->bottom_field_line_start,
   VAR_60->io_base + FUNC_5(VAR_18));
 FUNC_8(VAR_61->bottom_field_line_end,
   VAR_60->io_base + FUNC_5(VAR_17));


 FUNC_8(0, VAR_60->io_base + FUNC_5(VAR_37));


 FUNC_8(0, VAR_60->io_base + FUNC_5(VAR_5));
 FUNC_8(VAR_16 |
         FUNC_3(0x4e),
         VAR_60->io_base + FUNC_5(VAR_15));


 FUNC_8(0, VAR_60->io_base + FUNC_5(VAR_58));







 VAR_62 = VAR_41 | VAR_42 |
  VAR_43;





 FUNC_8(VAR_44 | VAR_62,
         VAR_60->io_base + FUNC_5(VAR_38));





 FUNC_8(VAR_45 | VAR_62,
         VAR_60->io_base + FUNC_5(VAR_39));





 FUNC_8(VAR_46 | VAR_62,
         VAR_60->io_base + FUNC_5(VAR_40));


 FUNC_8(0, VAR_60->io_base + FUNC_5(VAR_50));
 FUNC_8(0, VAR_60->io_base + FUNC_5(VAR_51));
 FUNC_8(0, VAR_60->io_base + FUNC_5(VAR_52));
 FUNC_8(0, VAR_60->io_base + FUNC_5(VAR_53));
 FUNC_8(0, VAR_60->io_base + FUNC_5(VAR_54));
 FUNC_8(0, VAR_60->io_base + FUNC_5(VAR_55));


 FUNC_6(VAR_60, VAR_35);


 FUNC_8(VAR_57,
         VAR_60->io_base + FUNC_5(VAR_56));


 FUNC_8(0x11, VAR_60->io_base + FUNC_5(VAR_3));
 FUNC_8(0x11, VAR_60->io_base + FUNC_5(VAR_4));


 FUNC_8(VAR_26,
         VAR_60->io_base + FUNC_5(VAR_25));


 FUNC_8(VAR_61->video_saturation,
   VAR_60->io_base + FUNC_5(VAR_32));
 FUNC_8(VAR_61->video_contrast,
   VAR_60->io_base + FUNC_5(VAR_24));
 FUNC_8(VAR_61->video_brightness,
   VAR_60->io_base + FUNC_5(VAR_23));
 FUNC_8(VAR_61->video_hue,
   VAR_60->io_base + FUNC_5(VAR_27));


 FUNC_8(VAR_48,
         VAR_60->io_base + FUNC_5(VAR_47));
 FUNC_8(0xfc48, VAR_60->io_base + FUNC_5(VAR_49));


 FUNC_8(0, VAR_60->io_base + FUNC_5(VAR_8));


 FUNC_8(VAR_61->analog_sync_adj,
   VAR_60->io_base + FUNC_5(VAR_9));

 VAR_60->venc.current_mode = VAR_61->mode_tag;
}
