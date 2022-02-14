
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dce110_clk_src_shift {int dummy; } ;
struct dce110_clk_src_regs {int dummy; } ;
struct dce110_clk_src_mask {int dummy; } ;
struct TYPE_3__ {int id; int * funcs; struct dc_context* ctx; } ;
struct dce110_clk_src {struct dc_bios* bios; int ext_clk_khz; struct dce110_clk_src_mask const* cs_mask; struct dce110_clk_src_shift const* cs_shift; struct dce110_clk_src_regs const* regs; TYPE_1__ base; } ;
struct dc_context {int dummy; } ;
struct TYPE_4__ {int external_clock_source_frequency_for_dp; } ;
struct dc_bios {TYPE_2__ fw_info; int fw_info_valid; } ;
typedef enum clock_source_id { ____Placeholder_clock_source_id } clock_source_id ;


 int FUNC_0 (int) ;
 int VAR_0 ;

bool FUNC_1(
 struct dce110_clk_src *VAR_1,
 struct dc_context *VAR_2,
 struct dc_bios *VAR_3,
 enum clock_source_id VAR_4,
 const struct dce110_clk_src_regs *VAR_5,
 const struct dce110_clk_src_shift *VAR_6,
 const struct dce110_clk_src_mask *VAR_7)
{
 VAR_1->base.ctx = VAR_2;
 VAR_1->bios = VAR_3;
 VAR_1->base.id = VAR_4;
 VAR_1->base.funcs = &VAR_0;

 VAR_1->regs = VAR_5;
 VAR_1->cs_shift = VAR_6;
 VAR_1->cs_mask = VAR_7;

 if (!VAR_1->bios->fw_info_valid) {
  FUNC_0(0);
  return 0;
 }

 VAR_1->ext_clk_khz = VAR_1->bios->fw_info.external_clock_source_frequency_for_dp;

 return 1;
}
