
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int osd1_commit; int osd1_ctrl_stat; int* osd1_blk0_cfg; int osd_sc_ctrl0; int osd_sc_i_wh_m1; int osd_sc_o_h_start_end; int osd_sc_o_v_start_end; int osd_sc_v_ini_phase; int osd_sc_v_phase_step; int osd_sc_h_ini_phase; int osd_sc_h_phase_step; int osd_sc_h_ctrl0; int osd_sc_v_ctrl0; int vd1_commit; int vd1_planes; int vd1_if0_gen_reg; int vd1_if0_gen_reg2; int viu_vd1_fmt_ctrl; int viu_vd1_fmt_w; int vd1_if0_canvas0; int vd1_if0_luma_x0; int vd1_if0_luma_y0; int vd1_if0_chroma_x0; int vd1_if0_chroma_y0; int vd1_if0_repeat_loop; int vd1_if0_luma0_rpt_pat; int vd1_if0_chroma0_rpt_pat; int vd1_range_map_y; int vd1_range_map_cb; int vd1_range_map_cr; int vpp_pic_in_height; int vpp_postblend_vd1_h_start_end; int vpp_blend_vd2_h_start_end; int vpp_postblend_vd1_v_start_end; int vpp_blend_vd2_v_start_end; int vpp_hsc_region12_startp; int vpp_hsc_region34_startp; int vpp_hsc_region4_endp; int vpp_hsc_start_phase_step; int vpp_hsc_region1_phase_slope; int vpp_hsc_region3_phase_slope; int vpp_line_in_length; int vpp_preblend_h_size; int vpp_vsc_region12_startp; int vpp_vsc_region34_startp; int vpp_vsc_region4_endp; int vpp_vsc_start_phase_step; int vpp_vsc_ini_phase; int vpp_vsc_phase_ctrl; int vpp_hsc_phase_ctrl; int vd1_height0; int vd1_stride0; int vd1_addr0; int vd1_height1; int vd1_stride1; int vd1_addr1; int vd1_height2; int vd1_stride2; int vd1_addr2; scalar_t__ vd1_enabled; int osd1_height; int osd1_stride; int osd1_addr; scalar_t__ osd1_enabled; } ;
struct meson_drm {TYPE_2__* drm; int crtc; TYPE_1__ viu; scalar_t__ io_base; int canvas_id_vd1_0; int canvas; int canvas_id_vd1_1; int canvas_id_vd1_2; int canvas_id_osd1; } ;
struct meson_crtc {int * event; int (* enable_vd1 ) (struct meson_drm*) ;scalar_t__ viu_offset; int (* enable_osd1 ) (struct meson_drm*) ;} ;
struct TYPE_4__ {int event_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int FUNC_0 (int) ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int FUNC_1 (int) ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct meson_drm*) ;
 int FUNC_10 (struct meson_drm*) ;
 struct meson_crtc* FUNC_11 (int ) ;
 int FUNC_12 (int,scalar_t__) ;

void FUNC_13(struct meson_drm *VAR_89)
{
 struct meson_crtc *VAR_90 = FUNC_11(VAR_89->crtc);
 unsigned long VAR_91;


 if (VAR_89->viu.osd1_enabled && VAR_89->viu.osd1_commit) {
  FUNC_12(VAR_89->viu.osd1_ctrl_stat,
    VAR_89->io_base + FUNC_2(VAR_48));
  FUNC_12(VAR_89->viu.osd1_blk0_cfg[0],
    VAR_89->io_base + FUNC_2(VAR_43));
  FUNC_12(VAR_89->viu.osd1_blk0_cfg[1],
    VAR_89->io_base + FUNC_2(VAR_44));
  FUNC_12(VAR_89->viu.osd1_blk0_cfg[2],
    VAR_89->io_base + FUNC_2(VAR_45));
  FUNC_12(VAR_89->viu.osd1_blk0_cfg[3],
    VAR_89->io_base + FUNC_2(VAR_46));
  FUNC_12(VAR_89->viu.osd1_blk0_cfg[4],
    VAR_89->io_base + FUNC_2(VAR_47));
  FUNC_12(VAR_89->viu.osd_sc_ctrl0,
    VAR_89->io_base + FUNC_2(VAR_69));
  FUNC_12(VAR_89->viu.osd_sc_i_wh_m1,
    VAR_89->io_base + FUNC_2(VAR_66));
  FUNC_12(VAR_89->viu.osd_sc_o_h_start_end,
    VAR_89->io_base + FUNC_2(VAR_67));
  FUNC_12(VAR_89->viu.osd_sc_o_v_start_end,
    VAR_89->io_base + FUNC_2(VAR_68));
  FUNC_12(VAR_89->viu.osd_sc_v_ini_phase,
    VAR_89->io_base + FUNC_2(VAR_71));
  FUNC_12(VAR_89->viu.osd_sc_v_phase_step,
    VAR_89->io_base + FUNC_2(VAR_72));
  FUNC_12(VAR_89->viu.osd_sc_h_ini_phase,
    VAR_89->io_base + FUNC_2(VAR_64));
  FUNC_12(VAR_89->viu.osd_sc_h_phase_step,
    VAR_89->io_base + FUNC_2(VAR_65));
  FUNC_12(VAR_89->viu.osd_sc_h_ctrl0,
    VAR_89->io_base + FUNC_2(VAR_63));
  FUNC_12(VAR_89->viu.osd_sc_v_ctrl0,
    VAR_89->io_base + FUNC_2(VAR_70));

  FUNC_6(VAR_89->canvas, VAR_89->canvas_id_osd1,
    VAR_89->viu.osd1_addr, VAR_89->viu.osd1_stride,
    VAR_89->viu.osd1_height, VAR_2,
    VAR_0, 0);


  if (VAR_90->enable_osd1)
   VAR_90->enable_osd1(VAR_89);

  VAR_89->viu.osd1_commit = 0;
 }


 if (VAR_89->viu.vd1_enabled && VAR_89->viu.vd1_commit) {

  switch (VAR_89->viu.vd1_planes) {
  case 3:
   FUNC_6(VAR_89->canvas,
         VAR_89->canvas_id_vd1_2,
         VAR_89->viu.vd1_addr2,
         VAR_89->viu.vd1_stride2,
         VAR_89->viu.vd1_height2,
         VAR_2,
         VAR_0,
         VAR_1);

  case 2:
   FUNC_6(VAR_89->canvas,
         VAR_89->canvas_id_vd1_1,
         VAR_89->viu.vd1_addr1,
         VAR_89->viu.vd1_stride1,
         VAR_89->viu.vd1_height1,
         VAR_2,
         VAR_0,
         VAR_1);

  case 1:
   FUNC_6(VAR_89->canvas,
         VAR_89->canvas_id_vd1_0,
         VAR_89->viu.vd1_addr0,
         VAR_89->viu.vd1_stride0,
         VAR_89->viu.vd1_height0,
         VAR_2,
         VAR_0,
         VAR_1);
  };

  FUNC_12(VAR_89->viu.vd1_if0_gen_reg,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_12));
  FUNC_12(VAR_89->viu.vd1_if0_gen_reg,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_34));
  FUNC_12(VAR_89->viu.vd1_if0_gen_reg2,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_13));
  FUNC_12(VAR_89->viu.viu_vd1_fmt_ctrl,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_49));
  FUNC_12(VAR_89->viu.viu_vd1_fmt_ctrl,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_51));
  FUNC_12(VAR_89->viu.viu_vd1_fmt_w,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_50));
  FUNC_12(VAR_89->viu.viu_vd1_fmt_w,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_52));
  FUNC_12(VAR_89->viu.vd1_if0_canvas0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_3));
  FUNC_12(VAR_89->viu.vd1_if0_canvas0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_4));
  FUNC_12(VAR_89->viu.vd1_if0_canvas0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_25));
  FUNC_12(VAR_89->viu.vd1_if0_canvas0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_26));
  FUNC_12(VAR_89->viu.vd1_if0_luma_x0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_17));
  FUNC_12(VAR_89->viu.vd1_if0_luma_x0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_18));
  FUNC_12(VAR_89->viu.vd1_if0_luma_x0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_38));
  FUNC_12(VAR_89->viu.vd1_if0_luma_x0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_39));
  FUNC_12(VAR_89->viu.vd1_if0_luma_y0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_19));
  FUNC_12(VAR_89->viu.vd1_if0_luma_y0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_20));
  FUNC_12(VAR_89->viu.vd1_if0_luma_y0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_40));
  FUNC_12(VAR_89->viu.vd1_if0_luma_y0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_41));
  FUNC_12(VAR_89->viu.vd1_if0_chroma_x0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_8));
  FUNC_12(VAR_89->viu.vd1_if0_chroma_x0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_9));
  FUNC_12(VAR_89->viu.vd1_if0_chroma_x0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_30));
  FUNC_12(VAR_89->viu.vd1_if0_chroma_x0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_31));
  FUNC_12(VAR_89->viu.vd1_if0_chroma_y0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_10));
  FUNC_12(VAR_89->viu.vd1_if0_chroma_y0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_11));
  FUNC_12(VAR_89->viu.vd1_if0_chroma_y0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_32));
  FUNC_12(VAR_89->viu.vd1_if0_chroma_y0,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_33));
  FUNC_12(VAR_89->viu.vd1_if0_repeat_loop,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_24));
  FUNC_12(VAR_89->viu.vd1_if0_repeat_loop,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_42));
  FUNC_12(VAR_89->viu.vd1_if0_luma0_rpt_pat,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_14));
  FUNC_12(VAR_89->viu.vd1_if0_luma0_rpt_pat,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_35));
  FUNC_12(VAR_89->viu.vd1_if0_luma0_rpt_pat,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_15));
  FUNC_12(VAR_89->viu.vd1_if0_luma0_rpt_pat,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_36));
  FUNC_12(VAR_89->viu.vd1_if0_chroma0_rpt_pat,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_5));
  FUNC_12(VAR_89->viu.vd1_if0_chroma0_rpt_pat,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_27));
  FUNC_12(VAR_89->viu.vd1_if0_chroma0_rpt_pat,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_6));
  FUNC_12(VAR_89->viu.vd1_if0_chroma0_rpt_pat,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_28));
  FUNC_12(0, VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_16));
  FUNC_12(0, VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_7));
  FUNC_12(0, VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_37));
  FUNC_12(0, VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_29));
  FUNC_12(VAR_89->viu.vd1_range_map_y,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_23));
  FUNC_12(VAR_89->viu.vd1_range_map_cb,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_21));
  FUNC_12(VAR_89->viu.vd1_range_map_cr,
    VAR_89->io_base + VAR_90->viu_offset +
    FUNC_2(VAR_22));
  FUNC_12(FUNC_1(4) |
          FUNC_0(4) |
          VAR_81 |
          VAR_80 |
          VAR_78 |
          VAR_82,
    VAR_89->io_base + FUNC_2(VAR_79));
  FUNC_12(VAR_89->viu.vpp_pic_in_height,
    VAR_89->io_base + FUNC_2(VAR_73));
  FUNC_12(VAR_89->viu.vpp_postblend_vd1_h_start_end,
   VAR_89->io_base + FUNC_2(VAR_74));
  FUNC_12(VAR_89->viu.vpp_blend_vd2_h_start_end,
   VAR_89->io_base + FUNC_2(VAR_53));
  FUNC_12(VAR_89->viu.vpp_postblend_vd1_v_start_end,
   VAR_89->io_base + FUNC_2(VAR_75));
  FUNC_12(VAR_89->viu.vpp_blend_vd2_v_start_end,
   VAR_89->io_base + FUNC_2(VAR_54));
  FUNC_12(VAR_89->viu.vpp_hsc_region12_startp,
    VAR_89->io_base + FUNC_2(VAR_56));
  FUNC_12(VAR_89->viu.vpp_hsc_region34_startp,
    VAR_89->io_base + FUNC_2(VAR_58));
  FUNC_12(VAR_89->viu.vpp_hsc_region4_endp,
    VAR_89->io_base + FUNC_2(VAR_60));
  FUNC_12(VAR_89->viu.vpp_hsc_start_phase_step,
    VAR_89->io_base + FUNC_2(VAR_61));
  FUNC_12(VAR_89->viu.vpp_hsc_region1_phase_slope,
   VAR_89->io_base + FUNC_2(VAR_57));
  FUNC_12(VAR_89->viu.vpp_hsc_region3_phase_slope,
   VAR_89->io_base + FUNC_2(VAR_59));
  FUNC_12(VAR_89->viu.vpp_line_in_length,
    VAR_89->io_base + FUNC_2(VAR_62));
  FUNC_12(VAR_89->viu.vpp_preblend_h_size,
    VAR_89->io_base + FUNC_2(VAR_76));
  FUNC_12(VAR_89->viu.vpp_vsc_region12_startp,
    VAR_89->io_base + FUNC_2(VAR_85));
  FUNC_12(VAR_89->viu.vpp_vsc_region34_startp,
    VAR_89->io_base + FUNC_2(VAR_86));
  FUNC_12(VAR_89->viu.vpp_vsc_region4_endp,
    VAR_89->io_base + FUNC_2(VAR_87));
  FUNC_12(VAR_89->viu.vpp_vsc_start_phase_step,
    VAR_89->io_base + FUNC_2(VAR_88));
  FUNC_12(VAR_89->viu.vpp_vsc_ini_phase,
    VAR_89->io_base + FUNC_2(VAR_83));
  FUNC_12(VAR_89->viu.vpp_vsc_phase_ctrl,
    VAR_89->io_base + FUNC_2(VAR_84));
  FUNC_12(VAR_89->viu.vpp_hsc_phase_ctrl,
    VAR_89->io_base + FUNC_2(VAR_55));
  FUNC_12(0x42, VAR_89->io_base + FUNC_2(VAR_77));


  if (VAR_90->enable_vd1)
   VAR_90->enable_vd1(VAR_89);

  VAR_89->viu.vd1_commit = 0;
 }

 FUNC_3(VAR_89->crtc);

 FUNC_7(&VAR_89->drm->event_lock, VAR_91);
 if (VAR_90->event) {
  FUNC_4(VAR_89->crtc, VAR_90->event);
  FUNC_5(VAR_89->crtc);
  VAR_90->event = ((void*)0);
 }
 FUNC_8(&VAR_89->drm->event_lock, VAR_91);
}
