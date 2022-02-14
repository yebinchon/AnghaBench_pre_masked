
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dcn_dpp_shift {int dummy; } ;
struct dcn_dpp_registers {int dummy; } ;
struct dcn_dpp_mask {int dummy; } ;
struct TYPE_2__ {int * caps; int * funcs; int inst; struct dc_context* ctx; } ;
struct dcn10_dpp {int lb_pixel_depth_supported; int lb_memory_size; int lb_bits_per_entry; struct dcn_dpp_mask const* tf_mask; struct dcn_dpp_shift const* tf_shift; struct dcn_dpp_registers const* tf_regs; TYPE_1__ base; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_0(
 struct dcn10_dpp *VAR_7,
 struct dc_context *VAR_8,
 uint32_t VAR_9,
 const struct dcn_dpp_registers *VAR_10,
 const struct dcn_dpp_shift *VAR_11,
 const struct dcn_dpp_mask *VAR_12)
{
 VAR_7->base.ctx = VAR_8;

 VAR_7->base.inst = VAR_9;
 VAR_7->base.funcs = &VAR_6;
 VAR_7->base.caps = &VAR_5;

 VAR_7->tf_regs = VAR_10;
 VAR_7->tf_shift = VAR_11;
 VAR_7->tf_mask = VAR_12;

 VAR_7->lb_pixel_depth_supported =
  VAR_1 |
  VAR_2 |
  VAR_3;

 VAR_7->lb_bits_per_entry = VAR_0;
 VAR_7->lb_memory_size = VAR_4;
}
