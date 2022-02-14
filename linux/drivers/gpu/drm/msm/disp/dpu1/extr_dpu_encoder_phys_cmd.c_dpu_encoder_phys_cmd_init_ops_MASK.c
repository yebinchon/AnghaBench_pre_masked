
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_phys_ops {int get_line_count; int handle_post_kickoff; int prepare_idle_pc; int restore; int irq_control; int needs_single_flush; int trigger_start; int wait_for_vblank; int wait_for_tx_complete; int prepare_for_kickoff; int wait_for_commit_done; int control_vblank_irq; int get_hw_resources; int destroy; int disable; int enable; int mode_fixup; int mode_set; int is_master; } ;


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

__attribute__((used)) static void FUNC_0(
  struct dpu_encoder_phys_ops *VAR_19)
{
 VAR_19->is_master = VAR_9;
 VAR_19->mode_set = VAR_11;
 VAR_19->mode_fixup = VAR_10;
 VAR_19->enable = VAR_3;
 VAR_19->disable = VAR_2;
 VAR_19->destroy = VAR_1;
 VAR_19->get_hw_resources = VAR_5;
 VAR_19->control_vblank_irq = VAR_0;
 VAR_19->wait_for_commit_done = VAR_16;
 VAR_19->prepare_for_kickoff = VAR_13;
 VAR_19->wait_for_tx_complete = VAR_17;
 VAR_19->wait_for_vblank = VAR_18;
 VAR_19->trigger_start = VAR_15;
 VAR_19->needs_single_flush = VAR_12;
 VAR_19->irq_control = VAR_8;
 VAR_19->restore = VAR_4;
 VAR_19->prepare_idle_pc = VAR_14;
 VAR_19->handle_post_kickoff = VAR_7;
 VAR_19->get_line_count = VAR_6;
}
