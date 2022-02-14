
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef scalar_t__ u32 ;
struct TYPE_15__ {int reference; int use_pre_saw; } ;
struct TYPE_14__ {int max_output_level; int top; int speed; int ingain_tgt_max; int fast_clip_ctrl_delay; scalar_t__ cut_off_current; scalar_t__ min_output_level; scalar_t__ output_level; void* ctrl_mode; } ;
struct TYPE_13__ {int min_output_level; int max_output_level; int top; int cut_off_current; int speed; scalar_t__ output_level; void* ctrl_mode; } ;
struct TYPE_24__ {int reference; int use_pre_saw; } ;
struct TYPE_23__ {int max_output_level; int top; int speed; int fast_clip_ctrl_delay; int ingain_tgt_max; scalar_t__ cut_off_current; scalar_t__ min_output_level; scalar_t__ output_level; void* ctrl_mode; } ;
struct TYPE_22__ {int max_output_level; int top; int cut_off_current; int speed; scalar_t__ min_output_level; scalar_t__ output_level; void* ctrl_mode; } ;
struct TYPE_21__ {int reference; int use_pre_saw; } ;
struct TYPE_20__ {scalar_t__ cut_off_current; scalar_t__ top; scalar_t__ speed; scalar_t__ max_output_level; scalar_t__ min_output_level; scalar_t__ output_level; scalar_t__ ctrl_mode; } ;
struct TYPE_19__ {scalar_t__ speed; scalar_t__ max_output_level; scalar_t__ min_output_level; scalar_t__ output_level; scalar_t__ ctrl_mode; } ;
struct TYPE_18__ {int reference; int use_pre_saw; } ;
struct TYPE_17__ {scalar_t__ cut_off_current; scalar_t__ top; scalar_t__ speed; scalar_t__ max_output_level; scalar_t__ min_output_level; scalar_t__ output_level; scalar_t__ ctrl_mode; } ;
struct TYPE_16__ {scalar_t__ speed; scalar_t__ max_output_level; scalar_t__ min_output_level; scalar_t__ output_level; scalar_t__ ctrl_mode; } ;
struct drxk_state {int m_has_lna; int m_has_dvbt; int m_has_dvbc; int m_has_atv; int m_has_oob; int m_has_audio; int m_chunk_size; int m_smart_ant_inverted; int m_b_p_down_open_bridge; int m_sys_clock_freq; int m_hi_cfg_timing_div; int m_hi_cfg_wake_up_key; int demod_address; int m_b_power_down; int m_drxk_a3_patch_code; int m_vsb_pga_cfg; int m_qam_pga_cfg; int m_enable_mpeg_output; int m_insert_rs_byte; int m_invert_data; int m_invert_err; int m_invert_str; int m_invert_val; int m_invert_clk; int m_mpeg_ts_static_bitrate; int m_disable_te_ihandling; int m_fec_rs_plen; int m_fec_rs_prescale; int m_rfmirror; int m_if_agc_pol; int m_current_power_mode; scalar_t__ m_gpio_cfg; scalar_t__ m_agcfast_clip_ctrl_delay; int m_sqi_speed; int m_qam_interleave_mode; int m_constellation; void* m_demod_lock_time_out; void* m_mpeg_lock_time_out; scalar_t__ m_ts_data_strength; scalar_t__ m_dvbc_bitrate; scalar_t__ m_dvbt_bitrate; int m_drxk_state; int m_operation_mode; TYPE_12__ m_qam_pre_saw_cfg; TYPE_11__ m_qam_if_agc_cfg; TYPE_10__ m_qam_rf_agc_cfg; TYPE_9__ m_dvbt_pre_saw_cfg; TYPE_8__ m_dvbt_if_agc_cfg; TYPE_7__ m_dvbt_rf_agc_cfg; TYPE_6__ m_atv_pre_saw_cfg; TYPE_5__ m_atv_rf_agc_cfg; TYPE_4__ m_atv_if_agc_cfg; void* m_Quality93percent; void* m_Quality83percent; TYPE_3__ m_vsb_pre_saw_cfg; TYPE_2__ m_vsb_rf_agc_cfg; TYPE_1__ m_vsb_if_agc_cfg; int m_hi_cfg_ctrl; scalar_t__ m_osc_clock_freq; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static int FUNC_1(struct drxk_state *VAR_17)
{




 u32 VAR_18 = VAR_4;
 u32 VAR_19 = 0;
 u32 VAR_20 = 0;
 u32 VAR_21 = 0x7FFF;
 u32 VAR_22 = 3;

 u32 VAR_23 = VAR_4;
 u32 VAR_24 = 0;
 u32 VAR_25 = 0;
 u32 VAR_26 = 0x7FFF;
 u32 VAR_27 = 3;
 u32 VAR_28 = 9500;
 u32 VAR_29 = 4000;

 u32 VAR_30 = VAR_4;
 u32 VAR_31 = 0;
 u32 VAR_32 = 0;
 u32 VAR_33 = 0;
 u32 VAR_34 = 3;

 u32 VAR_35 = VAR_5;
 u32 VAR_36 = 0;
 u32 VAR_37 = 0;
 u32 VAR_38 = 0;
 u32 VAR_39 = 9500;
 u32 VAR_40 = 4000;
 u32 VAR_41 = 3;

 u32 VAR_42 = VAR_2;
 u32 VAR_43 = VAR_3;

 u32 VAR_44 = VAR_1;
 u32 VAR_45 = VAR_0;




 u32 VAR_46 = 0x0113;
 u32 VAR_47 = 0;
 u32 VAR_48 = VAR_7;
 u32 VAR_49 = 50000000;
 u32 VAR_50 = VAR_9 * 8;

 u32 VAR_51 = 0;

 u32 VAR_52 = 1;
 u32 VAR_53 = 0;

 FUNC_0(1, "\n");

 VAR_17->m_has_lna = 0;
 VAR_17->m_has_dvbt = 0;
 VAR_17->m_has_dvbc = 0;
 VAR_17->m_has_atv = 0;
 VAR_17->m_has_oob = 0;
 VAR_17->m_has_audio = 0;

 if (!VAR_17->m_chunk_size)
  VAR_17->m_chunk_size = 124;

 VAR_17->m_osc_clock_freq = 0;
 VAR_17->m_smart_ant_inverted = 0;
 VAR_17->m_b_p_down_open_bridge = 0;


 VAR_17->m_sys_clock_freq = 151875;


 VAR_17->m_hi_cfg_timing_div = ((VAR_17->m_sys_clock_freq / 1000) *
       VAR_13) / 1000;

 if (VAR_17->m_hi_cfg_timing_div > VAR_15)
  VAR_17->m_hi_cfg_timing_div = VAR_15;
 VAR_17->m_hi_cfg_wake_up_key = (VAR_17->demod_address << 1);

 VAR_17->m_hi_cfg_ctrl = VAR_16;

 VAR_17->m_b_power_down = (VAR_53 != 0);

 VAR_17->m_drxk_a3_patch_code = 0;



 VAR_17->m_vsb_if_agc_cfg.ctrl_mode = VAR_18;
 VAR_17->m_vsb_if_agc_cfg.output_level = VAR_19;
 VAR_17->m_vsb_if_agc_cfg.min_output_level = VAR_20;
 VAR_17->m_vsb_if_agc_cfg.max_output_level = VAR_21;
 VAR_17->m_vsb_if_agc_cfg.speed = VAR_22;
 VAR_17->m_vsb_pga_cfg = 140;


 VAR_17->m_vsb_rf_agc_cfg.ctrl_mode = VAR_23;
 VAR_17->m_vsb_rf_agc_cfg.output_level = VAR_24;
 VAR_17->m_vsb_rf_agc_cfg.min_output_level = VAR_25;
 VAR_17->m_vsb_rf_agc_cfg.max_output_level = VAR_26;
 VAR_17->m_vsb_rf_agc_cfg.speed = VAR_27;
 VAR_17->m_vsb_rf_agc_cfg.top = VAR_28;
 VAR_17->m_vsb_rf_agc_cfg.cut_off_current = VAR_29;
 VAR_17->m_vsb_pre_saw_cfg.reference = 0x07;
 VAR_17->m_vsb_pre_saw_cfg.use_pre_saw = 1;

 VAR_17->m_Quality83percent = VAR_2;
 VAR_17->m_Quality93percent = VAR_3;
 if (VAR_43 <= 500 && VAR_42 < VAR_43) {
  VAR_17->m_Quality83percent = VAR_42;
  VAR_17->m_Quality93percent = VAR_43;
 }


 VAR_17->m_atv_if_agc_cfg.ctrl_mode = VAR_30;
 VAR_17->m_atv_if_agc_cfg.output_level = VAR_31;
 VAR_17->m_atv_if_agc_cfg.min_output_level = VAR_32;
 VAR_17->m_atv_if_agc_cfg.max_output_level = VAR_33;
 VAR_17->m_atv_if_agc_cfg.speed = VAR_34;


 VAR_17->m_atv_rf_agc_cfg.ctrl_mode = VAR_35;
 VAR_17->m_atv_rf_agc_cfg.output_level = VAR_36;
 VAR_17->m_atv_rf_agc_cfg.min_output_level = VAR_37;
 VAR_17->m_atv_rf_agc_cfg.max_output_level = VAR_38;
 VAR_17->m_atv_rf_agc_cfg.speed = VAR_41;
 VAR_17->m_atv_rf_agc_cfg.top = VAR_39;
 VAR_17->m_atv_rf_agc_cfg.cut_off_current = VAR_40;
 VAR_17->m_atv_pre_saw_cfg.reference = 0x04;
 VAR_17->m_atv_pre_saw_cfg.use_pre_saw = 1;



 VAR_17->m_dvbt_rf_agc_cfg.ctrl_mode = VAR_5;
 VAR_17->m_dvbt_rf_agc_cfg.output_level = 0;
 VAR_17->m_dvbt_rf_agc_cfg.min_output_level = 0;
 VAR_17->m_dvbt_rf_agc_cfg.max_output_level = 0xFFFF;
 VAR_17->m_dvbt_rf_agc_cfg.top = 0x2100;
 VAR_17->m_dvbt_rf_agc_cfg.cut_off_current = 4000;
 VAR_17->m_dvbt_rf_agc_cfg.speed = 1;



 VAR_17->m_dvbt_if_agc_cfg.ctrl_mode = VAR_4;
 VAR_17->m_dvbt_if_agc_cfg.output_level = 0;
 VAR_17->m_dvbt_if_agc_cfg.min_output_level = 0;
 VAR_17->m_dvbt_if_agc_cfg.max_output_level = 9000;
 VAR_17->m_dvbt_if_agc_cfg.top = 13424;
 VAR_17->m_dvbt_if_agc_cfg.cut_off_current = 0;
 VAR_17->m_dvbt_if_agc_cfg.speed = 3;
 VAR_17->m_dvbt_if_agc_cfg.fast_clip_ctrl_delay = 30;
 VAR_17->m_dvbt_if_agc_cfg.ingain_tgt_max = 30000;


 VAR_17->m_dvbt_pre_saw_cfg.reference = 4;
 VAR_17->m_dvbt_pre_saw_cfg.use_pre_saw = 0;


 VAR_17->m_qam_rf_agc_cfg.ctrl_mode = VAR_5;
 VAR_17->m_qam_rf_agc_cfg.output_level = 0;
 VAR_17->m_qam_rf_agc_cfg.min_output_level = 6023;
 VAR_17->m_qam_rf_agc_cfg.max_output_level = 27000;
 VAR_17->m_qam_rf_agc_cfg.top = 0x2380;
 VAR_17->m_qam_rf_agc_cfg.cut_off_current = 4000;
 VAR_17->m_qam_rf_agc_cfg.speed = 3;


 VAR_17->m_qam_if_agc_cfg.ctrl_mode = VAR_4;
 VAR_17->m_qam_if_agc_cfg.output_level = 0;
 VAR_17->m_qam_if_agc_cfg.min_output_level = 0;
 VAR_17->m_qam_if_agc_cfg.max_output_level = 9000;
 VAR_17->m_qam_if_agc_cfg.top = 0x0511;
 VAR_17->m_qam_if_agc_cfg.cut_off_current = 0;
 VAR_17->m_qam_if_agc_cfg.speed = 3;
 VAR_17->m_qam_if_agc_cfg.ingain_tgt_max = 5119;
 VAR_17->m_qam_if_agc_cfg.fast_clip_ctrl_delay = 50;

 VAR_17->m_qam_pga_cfg = 140;
 VAR_17->m_qam_pre_saw_cfg.reference = 4;
 VAR_17->m_qam_pre_saw_cfg.use_pre_saw = 0;

 VAR_17->m_operation_mode = VAR_14;
 VAR_17->m_drxk_state = VAR_10;


 VAR_17->m_enable_mpeg_output = 1;
 VAR_17->m_insert_rs_byte = 0;
 VAR_17->m_invert_data = 0;
 VAR_17->m_invert_err = 0;
 VAR_17->m_invert_str = 0;
 VAR_17->m_invert_val = 0;
 VAR_17->m_invert_clk = (VAR_47 != 0);




 VAR_17->m_dvbt_bitrate = VAR_49;
 VAR_17->m_dvbc_bitrate = VAR_50;

 VAR_17->m_ts_data_strength = (VAR_48 & 0x07);


 VAR_17->m_mpeg_ts_static_bitrate = 19392658;
 VAR_17->m_disable_te_ihandling = 0;

 if (VAR_51)
  VAR_17->m_insert_rs_byte = 1;

 VAR_17->m_mpeg_lock_time_out = VAR_1;
 if (VAR_44 < 10000)
  VAR_17->m_mpeg_lock_time_out = VAR_44;
 VAR_17->m_demod_lock_time_out = VAR_0;
 if (VAR_45 < 10000)
  VAR_17->m_demod_lock_time_out = VAR_45;


 VAR_17->m_constellation = VAR_11;
 VAR_17->m_qam_interleave_mode = VAR_8;
 VAR_17->m_fec_rs_plen = 204 * 8;
 VAR_17->m_fec_rs_prescale = 1;

 VAR_17->m_sqi_speed = VAR_6;
 VAR_17->m_agcfast_clip_ctrl_delay = 0;

 VAR_17->m_gpio_cfg = VAR_46;

 VAR_17->m_b_power_down = 0;
 VAR_17->m_current_power_mode = VAR_12;

 VAR_17->m_rfmirror = (VAR_52 == 0);
 VAR_17->m_if_agc_pol = 0;
 return 0;
}
