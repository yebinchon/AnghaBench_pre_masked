
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * init_pipes; int init_hw; int disable_vga; int * dsc_pg_control; int hubp_pg_control; int dpp_pg_control; int enable_power_gating_plane; int plane_atomic_disable; int disable_plane; int init_blank; int set_flip_control_gsl; int update_mpcc; int reset_hw_ctx_wrap; int setup_vupdate_interrupt; int enable_stream_gating; int disable_stream_gating; int init_vm_ctx; int init_sys_ctx; int disable_stream; int enable_stream; int program_dmdata_engine; int dmdata_status_done; int blank_pixel_data; int update_odm; int program_output_csc; int disable_writeback; int enable_writeback; int update_bandwidth; int prepare_bandwidth; int optimize_bandwidth; int pipe_control_lock_global; int pipe_control_lock; int apply_ctx_for_surface; int set_output_transfer_func; int set_input_transfer_func; int program_triplebuffer; int enable_stream_timing; int update_plane_addr; int unblank_stream; } ;
struct dc {TYPE_2__ hwss; TYPE_1__* ctx; } ;
struct TYPE_3__ {int dce_environment; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
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

void FUNC_2(struct dc *VAR_38)
{
 FUNC_1(VAR_38);
 VAR_38->hwss.unblank_stream = VAR_33;
 VAR_38->hwss.update_plane_addr = VAR_37;
 VAR_38->hwss.enable_stream_timing = VAR_13;
 VAR_38->hwss.program_triplebuffer = VAR_27;
 VAR_38->hwss.set_input_transfer_func = VAR_30;
 VAR_38->hwss.set_output_transfer_func = VAR_31;
 VAR_38->hwss.apply_ctx_for_surface = VAR_0;
 VAR_38->hwss.pipe_control_lock = VAR_21;
 VAR_38->hwss.pipe_control_lock_global = VAR_22;
 VAR_38->hwss.optimize_bandwidth = VAR_20;
 VAR_38->hwss.prepare_bandwidth = VAR_24;
 VAR_38->hwss.update_bandwidth = VAR_34;
 VAR_38->hwss.enable_writeback = VAR_14;
 VAR_38->hwss.disable_writeback = VAR_6;
 VAR_38->hwss.program_output_csc = VAR_26;
 VAR_38->hwss.update_odm = VAR_36;
 VAR_38->hwss.blank_pixel_data = VAR_1;
 VAR_38->hwss.dmdata_status_done = VAR_7;
 VAR_38->hwss.program_dmdata_engine = VAR_25;
 VAR_38->hwss.enable_stream = VAR_11;
 VAR_38->hwss.disable_stream = VAR_3;
 VAR_38->hwss.init_sys_ctx = VAR_18;
 VAR_38->hwss.init_vm_ctx = VAR_19;
 VAR_38->hwss.disable_stream_gating = VAR_4;
 VAR_38->hwss.enable_stream_gating = VAR_12;
 VAR_38->hwss.setup_vupdate_interrupt = VAR_32;
 VAR_38->hwss.reset_hw_ctx_wrap = VAR_28;
 VAR_38->hwss.update_mpcc = VAR_35;
 VAR_38->hwss.set_flip_control_gsl = VAR_29;
 VAR_38->hwss.init_blank = VAR_17;
 VAR_38->hwss.disable_plane = VAR_2;
 VAR_38->hwss.plane_atomic_disable = VAR_23;
 VAR_38->hwss.enable_power_gating_plane = VAR_10;
 VAR_38->hwss.dpp_pg_control = VAR_8;
 VAR_38->hwss.hubp_pg_control = VAR_16;



 VAR_38->hwss.dsc_pg_control = ((void*)0);

 VAR_38->hwss.disable_vga = VAR_5;

 if (FUNC_0(VAR_38->ctx->dce_environment)) {
  VAR_38->hwss.init_hw = VAR_15;
  VAR_38->hwss.init_pipes = ((void*)0);
 }


}
