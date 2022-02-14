
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dcn_hubp2_shift {int dummy; } ;
struct dcn_hubp2_registers {int dummy; } ;
struct dcn_hubp2_mask {int dummy; } ;
struct TYPE_2__ {int mpcc_id; int opp_id; int inst; struct dc_context* ctx; int * funcs; } ;
struct dcn21_hubp {TYPE_1__ base; struct dcn_hubp2_mask const* hubp_mask; struct dcn_hubp2_shift const* hubp_shift; struct dcn_hubp2_registers const* hubp_regs; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(
 struct dcn21_hubp *VAR_2,
 struct dc_context *VAR_3,
 uint32_t VAR_4,
 const struct dcn_hubp2_registers *VAR_5,
 const struct dcn_hubp2_shift *VAR_6,
 const struct dcn_hubp2_mask *VAR_7)
{
 VAR_2->base.funcs = &VAR_1;
 VAR_2->base.ctx = VAR_3;
 VAR_2->hubp_regs = VAR_5;
 VAR_2->hubp_shift = VAR_6;
 VAR_2->hubp_mask = VAR_7;
 VAR_2->base.inst = VAR_4;
 VAR_2->base.opp_id = VAR_0;
 VAR_2->base.mpcc_id = 0xf;

 return 1;
}
