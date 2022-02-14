
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_hw_ctl_ops {int get_bitmask_intf; int get_bitmask_mixer; int get_bitmask_sspp; int setup_blendstage; int clear_all_blendstages; int wait_reset_status; int reset; int setup_intf_cfg; int trigger_pending; int trigger_start; int get_flush_register; int trigger_flush; int get_pending_flush; int update_pending_flush; int clear_pending_flush; } ;


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

__attribute__((used)) static void FUNC_0(struct dpu_hw_ctl_ops *VAR_15,
  unsigned long VAR_16)
{
 VAR_15->clear_pending_flush = VAR_1;
 VAR_15->update_pending_flush = VAR_13;
 VAR_15->get_pending_flush = VAR_6;
 VAR_15->trigger_flush = VAR_10;
 VAR_15->get_flush_register = VAR_5;
 VAR_15->trigger_start = VAR_12;
 VAR_15->trigger_pending = VAR_11;
 VAR_15->setup_intf_cfg = VAR_7;
 VAR_15->reset = VAR_8;
 VAR_15->wait_reset_status = VAR_14;
 VAR_15->clear_all_blendstages = VAR_0;
 VAR_15->setup_blendstage = VAR_9;
 VAR_15->get_bitmask_sspp = VAR_4;
 VAR_15->get_bitmask_mixer = VAR_3;
 VAR_15->get_bitmask_intf = VAR_2;
}
