
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_phys_ops {int get_line_count; int needs_single_flush; int handle_post_kickoff; int prepare_for_kickoff; int irq_control; void* wait_for_tx_complete; void* wait_for_vblank; int wait_for_commit_done; int control_vblank_irq; int get_hw_resources; int destroy; int disable; int enable; int mode_fixup; int mode_set; int is_master; } ;


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
 void* VAR_14 ;

__attribute__((used)) static void FUNC_0(struct dpu_encoder_phys_ops *VAR_15)
{
 VAR_15->is_master = VAR_8;
 VAR_15->mode_set = VAR_10;
 VAR_15->mode_fixup = VAR_9;
 VAR_15->enable = VAR_3;
 VAR_15->disable = VAR_2;
 VAR_15->destroy = VAR_1;
 VAR_15->get_hw_resources = VAR_4;
 VAR_15->control_vblank_irq = VAR_0;
 VAR_15->wait_for_commit_done = VAR_13;
 VAR_15->wait_for_vblank = VAR_14;
 VAR_15->wait_for_tx_complete = VAR_14;
 VAR_15->irq_control = VAR_7;
 VAR_15->prepare_for_kickoff = VAR_12;
 VAR_15->handle_post_kickoff = VAR_6;
 VAR_15->needs_single_flush = VAR_11;
 VAR_15->get_line_count = VAR_5;
}
