
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int clock; int demod_address; int insert_rs_byte; } ;
struct TYPE_5__ {int cpOpt; int cpNexpOfs; int tdCal2k; int tdCal8k; } ;
struct TYPE_8__ {int R1; int R2; int R3; int outputLevel; int settleLevel; int minOutputLevel; int maxOutputLevel; int speed; void* ctrlMode; } ;
struct TYPE_7__ {int outputLevel; int settleLevel; int minOutputLevel; int maxOutputLevel; int speed; int R1; int R2; int R3; void* ctrlMode; } ;
struct drxd_state {int app_env_default; int app_env_diversity; int m_EcOcRegOcModeLop; int chip_adr; int intermediate_freq; int expected_sys_clock_freq; int sys_clock_freq; int osc_clock_freq; int enable_parallel; int hi_cfg_timing_div; int hi_cfg_bridge_delay; int m_FeAgRegAgAgcSio; int m_FeAgRegAgPwd; TYPE_2__ config; int insert_rs_byte; scalar_t__ tuner_mirrors; scalar_t__ type_A; scalar_t__ PGA; int drxd_state; int cscd_state; scalar_t__ osc_clock_deviation; int * m_HiI2cPatch; TYPE_1__ noise_cal; TYPE_4__ rf_agc_cfg; TYPE_3__ if_agc_cfg; } ;
typedef enum app_env { ____Placeholder_app_env } app_env ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_0(struct drxd_state *VAR_16, u32 VAR_17)
{
 u32 VAR_18 = 0xffffffff;
 u32 VAR_19 = 528;
 u32 VAR_20 = 0;
 u32 VAR_21 = VAR_8;
 u32 VAR_22 = 0;
 u32 VAR_23 = 0;
 u32 VAR_24 = 820;
 u32 VAR_25 = 2200;
 u32 VAR_26 = 150;
 u32 VAR_27 = 0;
 u32 VAR_28 = 0xffffffff;
 u32 VAR_29 = 0xffffffff;
 u32 VAR_30 = 0xffffffff;
 u32 VAR_31 = 0xffffffff;
 u32 VAR_32 = 0xffffffff;
 u32 VAR_33 = 820;
 u32 VAR_34 = 2200;
 u32 VAR_35 = 150;
 u32 VAR_36 = VAR_16->config.clock;
 u32 VAR_37 = 0;
 u32 VAR_38 = 4;
 u32 VAR_39 = VAR_13;
 u32 VAR_40 = VAR_12;
 u32 VAR_41 = 0;
 u32 VAR_42 = VAR_4;
 u32 VAR_43 = VAR_3;
 u32 VAR_44 = VAR_15;

 VAR_16->if_agc_cfg.ctrlMode = VAR_0;
 VAR_16->if_agc_cfg.outputLevel = 0;
 VAR_16->if_agc_cfg.settleLevel = 140;
 VAR_16->if_agc_cfg.minOutputLevel = 0;
 VAR_16->if_agc_cfg.maxOutputLevel = 1023;
 VAR_16->if_agc_cfg.speed = 904;

 if (VAR_27 == 1 && VAR_28 <= VAR_8) {
  VAR_16->if_agc_cfg.ctrlMode = VAR_2;
  VAR_16->if_agc_cfg.outputLevel = (u16) (VAR_28);
 }

 if (VAR_27 == 0 &&
     VAR_29 <= VAR_8 &&
     VAR_30 <= VAR_8 &&
     VAR_31 <= VAR_8 &&
     VAR_32 <= VAR_8) {
  VAR_16->if_agc_cfg.ctrlMode = VAR_0;
  VAR_16->if_agc_cfg.settleLevel = (u16) (VAR_29);
  VAR_16->if_agc_cfg.minOutputLevel = (u16) (VAR_30);
  VAR_16->if_agc_cfg.maxOutputLevel = (u16) (VAR_31);
  VAR_16->if_agc_cfg.speed = (u16) (VAR_32);
 }

 VAR_16->if_agc_cfg.R1 = (u16) (VAR_33);
 VAR_16->if_agc_cfg.R2 = (u16) (VAR_34);
 VAR_16->if_agc_cfg.R3 = (u16) (VAR_35);

 VAR_16->rf_agc_cfg.R1 = (u16) (VAR_24);
 VAR_16->rf_agc_cfg.R2 = (u16) (VAR_25);
 VAR_16->rf_agc_cfg.R3 = (u16) (VAR_26);

 VAR_16->rf_agc_cfg.ctrlMode = VAR_0;

 if (VAR_23 == 1 && VAR_18 <= VAR_8) {
  VAR_16->rf_agc_cfg.ctrlMode = VAR_2;
  VAR_16->rf_agc_cfg.outputLevel = (u16) (VAR_18);
 }

 if (VAR_23 == 0 &&
     VAR_19 <= VAR_8 &&
     VAR_20 <= VAR_8 &&
     VAR_21 <= VAR_8 &&
     VAR_22 <= VAR_8) {
  VAR_16->rf_agc_cfg.ctrlMode = VAR_0;
  VAR_16->rf_agc_cfg.settleLevel = (u16) (VAR_19);
  VAR_16->rf_agc_cfg.minOutputLevel = (u16) (VAR_20);
  VAR_16->rf_agc_cfg.maxOutputLevel = (u16) (VAR_21);
  VAR_16->rf_agc_cfg.speed = (u16) (VAR_22);
 }

 if (VAR_23 == 2)
  VAR_16->rf_agc_cfg.ctrlMode = VAR_1;

 if (VAR_42 <= 2)
  VAR_16->app_env_default = (enum app_env)
      (VAR_42);
 if (VAR_43 <= 2)
  VAR_16->app_env_diversity = (enum app_env)
      (VAR_43);

 if (VAR_44 == VAR_14) {

  VAR_16->noise_cal.cpOpt = 0;
  VAR_16->noise_cal.cpNexpOfs = 40;
  VAR_16->noise_cal.tdCal2k = -40;
  VAR_16->noise_cal.tdCal8k = -24;
 } else {

  VAR_16->noise_cal.cpOpt = 1;
  VAR_16->noise_cal.cpNexpOfs = 0;
  VAR_16->noise_cal.tdCal2k = -21;
  VAR_16->noise_cal.tdCal8k = -24;
 }
 VAR_16->m_EcOcRegOcModeLop = (u16) (VAR_38);

 VAR_16->chip_adr = (VAR_16->config.demod_address << 1) | 1;
 switch (VAR_41) {
 case 1:
  VAR_16->m_HiI2cPatch = VAR_9;
  break;
 case 3:
  VAR_16->m_HiI2cPatch = VAR_10;
  break;
 default:
  VAR_16->m_HiI2cPatch = ((void*)0);
 }


 VAR_16->intermediate_freq = (u16) (VAR_17 / 1000);

 VAR_16->expected_sys_clock_freq = 48000;

 VAR_16->sys_clock_freq = 48000;
 VAR_16->osc_clock_freq = (u16) VAR_36;
 VAR_16->osc_clock_deviation = 0;
 VAR_16->cscd_state = VAR_5;
 VAR_16->drxd_state = VAR_11;

 VAR_16->PGA = 0;
 VAR_16->type_A = 0;
 VAR_16->tuner_mirrors = 0;


 VAR_16->insert_rs_byte = VAR_16->config.insert_rs_byte;
 VAR_16->enable_parallel = (VAR_37 != 1);




 VAR_16->hi_cfg_timing_div = (u16) ((VAR_16->sys_clock_freq / 1000) *
       VAR_39) / 1000;


 VAR_16->hi_cfg_bridge_delay = (u16) ((VAR_16->osc_clock_freq / 1000) *
         VAR_40) / 1000;

 VAR_16->m_FeAgRegAgPwd = VAR_7;

 VAR_16->m_FeAgRegAgAgcSio = VAR_6;
 return 0;
}
