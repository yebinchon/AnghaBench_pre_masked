
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int reference; int use_pre_saw; void* standard; } ;
struct TYPE_11__ {int max_output_level; int speed; int top; int cut_off_current; scalar_t__ min_output_level; void* ctrl_mode; void* standard; } ;
struct TYPE_10__ {int reference; int use_pre_saw; void* standard; } ;
struct TYPE_9__ {int max_output_level; int speed; int top; int cut_off_current; scalar_t__ min_output_level; void* ctrl_mode; void* standard; } ;
struct TYPE_8__ {int max_output_level; int speed; int top; scalar_t__ min_output_level; void* ctrl_mode; void* standard; } ;
struct TYPE_7__ {int max_output_level; int speed; int top; scalar_t__ min_output_level; void* ctrl_mode; void* standard; } ;
struct drxj_data {int qam_pga_cfg; int vsb_pga_cfg; TYPE_6__ vsb_pre_saw_cfg; TYPE_5__ vsb_rf_agc_cfg; TYPE_4__ qam_pre_saw_cfg; TYPE_3__ qam_rf_agc_cfg; TYPE_2__ vsb_if_agc_cfg; TYPE_1__ qam_if_agc_cfg; scalar_t__ has_lna; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static void FUNC_0(struct drxj_data *VAR_4)
{

 if (VAR_4->has_lna) {


  VAR_4->qam_if_agc_cfg.standard = VAR_3;
  VAR_4->qam_if_agc_cfg.ctrl_mode = VAR_1;
  VAR_4->qam_pga_cfg = 140 + (11 * 13);

  VAR_4->vsb_if_agc_cfg.standard = VAR_2;
  VAR_4->vsb_if_agc_cfg.ctrl_mode = VAR_1;
  VAR_4->vsb_pga_cfg = 140 + (11 * 13);
 } else {


  VAR_4->qam_if_agc_cfg.standard = VAR_3;
  VAR_4->qam_if_agc_cfg.ctrl_mode = VAR_0;
  VAR_4->qam_if_agc_cfg.min_output_level = 0;
  VAR_4->qam_if_agc_cfg.max_output_level = 0x7FFF;
  VAR_4->qam_if_agc_cfg.speed = 3;
  VAR_4->qam_if_agc_cfg.top = 1297;
  VAR_4->qam_pga_cfg = 140;

  VAR_4->vsb_if_agc_cfg.standard = VAR_2;
  VAR_4->vsb_if_agc_cfg.ctrl_mode = VAR_0;
  VAR_4->vsb_if_agc_cfg.min_output_level = 0;
  VAR_4->vsb_if_agc_cfg.max_output_level = 0x7FFF;
  VAR_4->vsb_if_agc_cfg.speed = 3;
  VAR_4->vsb_if_agc_cfg.top = 1024;
  VAR_4->vsb_pga_cfg = 140;
 }



 VAR_4->qam_rf_agc_cfg.standard = VAR_3;
 VAR_4->qam_rf_agc_cfg.ctrl_mode = VAR_0;
 VAR_4->qam_rf_agc_cfg.min_output_level = 0;
 VAR_4->qam_rf_agc_cfg.max_output_level = 0x7FFF;
 VAR_4->qam_rf_agc_cfg.speed = 3;
 VAR_4->qam_rf_agc_cfg.top = 9500;
 VAR_4->qam_rf_agc_cfg.cut_off_current = 4000;
 VAR_4->qam_pre_saw_cfg.standard = VAR_3;
 VAR_4->qam_pre_saw_cfg.reference = 0x07;
 VAR_4->qam_pre_saw_cfg.use_pre_saw = 1;


 VAR_4->vsb_rf_agc_cfg.standard = VAR_2;
 VAR_4->vsb_rf_agc_cfg.ctrl_mode = VAR_0;
 VAR_4->vsb_rf_agc_cfg.min_output_level = 0;
 VAR_4->vsb_rf_agc_cfg.max_output_level = 0x7FFF;
 VAR_4->vsb_rf_agc_cfg.speed = 3;
 VAR_4->vsb_rf_agc_cfg.top = 9500;
 VAR_4->vsb_rf_agc_cfg.cut_off_current = 4000;
 VAR_4->vsb_pre_saw_cfg.standard = VAR_2;
 VAR_4->vsb_pre_saw_cfg.reference = 0x07;
 VAR_4->vsb_pre_saw_cfg.use_pre_saw = 1;
}
