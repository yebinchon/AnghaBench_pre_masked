
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int FBC_SUPPORT; int DUMMY_BACKEND; int CLK_GATING_DISABLED; } ;
struct TYPE_6__ {TYPE_1__ bits; scalar_t__ raw; } ;
struct TYPE_8__ {int lpt_channels_num; int is_enabled; int * funcs; int attached_inst; scalar_t__ dram_channels_num; scalar_t__ channel_interleave_size; scalar_t__ raw_size; scalar_t__ banks_num; int min_compress_ratio; scalar_t__ preferred_requested_size; scalar_t__ allocated_size; int memory_bus_width; scalar_t__ embedded_panel_v_size; scalar_t__ embedded_panel_h_size; struct dc_context* ctx; TYPE_2__ options; } ;
struct dce110_compressor {TYPE_4__ base; } ;
struct TYPE_7__ {int vram_width; } ;
struct dc_context {TYPE_3__ asic_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct dce110_compressor *VAR_3,
 struct dc_context *VAR_4)
{

 VAR_3->base.options.raw = 0;
 VAR_3->base.options.bits.FBC_SUPPORT = 1;


 VAR_3->base.lpt_channels_num = 1;
 VAR_3->base.options.bits.DUMMY_BACKEND = 0;







 VAR_3->base.options.bits.CLK_GATING_DISABLED = 0;

 VAR_3->base.ctx = VAR_4;
 VAR_3->base.embedded_panel_h_size = 0;
 VAR_3->base.embedded_panel_v_size = 0;
 VAR_3->base.memory_bus_width = VAR_4->asic_id.vram_width;
 VAR_3->base.allocated_size = 0;
 VAR_3->base.preferred_requested_size = 0;
 VAR_3->base.min_compress_ratio = VAR_1;
 VAR_3->base.banks_num = 0;
 VAR_3->base.raw_size = 0;
 VAR_3->base.channel_interleave_size = 0;
 VAR_3->base.dram_channels_num = 0;
 VAR_3->base.lpt_channels_num = 0;
 VAR_3->base.attached_inst = VAR_0;
 VAR_3->base.is_enabled = 0;
 VAR_3->base.funcs = &VAR_2;

}
