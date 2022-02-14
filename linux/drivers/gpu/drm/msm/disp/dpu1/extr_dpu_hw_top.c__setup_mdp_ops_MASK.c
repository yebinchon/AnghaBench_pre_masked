
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_hw_mdp_ops {int intf_audio_select; int reset_ubwc; int get_safe_status; int setup_vsync_source; int get_danger_status; int setup_clk_force_ctrl; int setup_split_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct dpu_hw_mdp_ops *VAR_7,
  unsigned long VAR_8)
{
 VAR_7->setup_split_pipe = VAR_5;
 VAR_7->setup_clk_force_ctrl = VAR_4;
 VAR_7->get_danger_status = VAR_0;
 VAR_7->setup_vsync_source = VAR_6;
 VAR_7->get_safe_status = VAR_1;
 VAR_7->reset_ubwc = VAR_3;
 VAR_7->intf_audio_select = VAR_2;
}
