
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tv_mode {int mode; int chroma_freq; TYPE_4__* resync_params; int vblank_level; TYPE_3__* color_gains; TYPE_2__* burst_levels; TYPE_1__* video_levels; int line_number; int front_porch; int back_porch; scalar_t__ dac_bit25_en; scalar_t__ dac3_en; scalar_t__ yc_en; } ;
struct sun4i_tv {int regs; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_8__ {scalar_t__ field; int line; int pixel; } ;
struct TYPE_7__ {int cr; int cb; } ;
struct TYPE_6__ {int cr; int cb; } ;
struct TYPE_5__ {int black; int blank; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
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
 int FUNC_9 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_10 (int,int) ;
 int VAR_21 ;
 int FUNC_11 (int,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_24 ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ) ;
 int VAR_25 ;
 int FUNC_16 (int,int ) ;
 int VAR_26 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_21 (int) ;
 int FUNC_22 (int ) ;
 struct sun4i_tv* FUNC_23 (struct drm_encoder*) ;
 int FUNC_24 (int ,int ,int ,int) ;
 int FUNC_25 (int ,int ,int) ;
 struct tv_mode* FUNC_26 (struct drm_display_mode*) ;

__attribute__((used)) static void FUNC_27(struct drm_encoder *VAR_32,
         struct drm_display_mode *VAR_33,
         struct drm_display_mode *VAR_34)
{
 struct sun4i_tv *VAR_35 = FUNC_23(VAR_32);
 const struct tv_mode *VAR_36 = FUNC_26(VAR_33);


 FUNC_24(VAR_35->regs, VAR_23,
      VAR_22,
      FUNC_11(0, 1) |
      FUNC_11(1, 2) |
      FUNC_11(2, 3) |
      FUNC_11(3, 4));


 FUNC_25(VAR_35->regs, VAR_11,
       VAR_36->mode |
       (VAR_36->yc_en ? VAR_12 : 0) |
       VAR_7 |
       VAR_10 |
       VAR_9 |
       VAR_8);


 FUNC_25(VAR_35->regs, VAR_20,
       FUNC_9(0) |
       (VAR_36->dac3_en ? FUNC_9(3) : 0) |
       VAR_18 |
       VAR_16 |
       VAR_19 |
       VAR_17 |
       (VAR_36->dac_bit25_en ? FUNC_0(25) : 0) |
       FUNC_0(30));


 FUNC_25(VAR_35->regs, VAR_26,
       FUNC_16(1, 0) |
       FUNC_16(2, 0));

 FUNC_25(VAR_35->regs, VAR_14,
       VAR_36->chroma_freq);


 FUNC_25(VAR_35->regs, VAR_27,
       FUNC_17(VAR_36->back_porch) |
       FUNC_18(VAR_36->front_porch));


 FUNC_25(VAR_35->regs, VAR_25,
       FUNC_14(22) |
       FUNC_15(VAR_36->line_number));

 FUNC_25(VAR_35->regs, VAR_24,
       FUNC_13(VAR_36->video_levels->blank) |
       FUNC_12(VAR_36->video_levels->black));

 FUNC_25(VAR_35->regs, VAR_21,
       FUNC_10(0, 0x18) |
       FUNC_10(1, 0x18) |
       FUNC_10(2, 0x18) |
       FUNC_10(3, 0x18));

 FUNC_25(VAR_35->regs, VAR_6,
       FUNC_7(VAR_36->burst_levels->cb) |
       FUNC_8(VAR_36->burst_levels->cr));


 FUNC_25(VAR_35->regs, VAR_4,
       FUNC_4(126) |
       FUNC_3(68) |
       FUNC_2(22));

 FUNC_25(VAR_35->regs, VAR_5,
       FUNC_5(VAR_36->color_gains->cb) |
       FUNC_6(VAR_36->color_gains->cr));

 FUNC_25(VAR_35->regs, VAR_31,
       FUNC_21(0x10) |
       FUNC_22(VAR_36->vblank_level));

 FUNC_25(VAR_35->regs, VAR_3,
       FUNC_1(1440));


 FUNC_25(VAR_35->regs, VAR_15,
       VAR_13);

 FUNC_25(VAR_35->regs, VAR_2,
       VAR_0 |
       VAR_1);

 FUNC_25(VAR_35->regs, VAR_29,
       FUNC_20(VAR_36->resync_params->pixel) |
       FUNC_19(VAR_36->resync_params->line) |
       (VAR_36->resync_params->field ?
        VAR_28 : 0));

 FUNC_25(VAR_35->regs, VAR_30, 0);
}
