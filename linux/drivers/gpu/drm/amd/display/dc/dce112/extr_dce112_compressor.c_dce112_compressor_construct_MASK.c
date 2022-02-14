
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


struct TYPE_12__ {int vertical_addressable; int horizontal_addressable; } ;
struct embedded_panel_info {TYPE_6__ lcd_timing; } ;
struct TYPE_7__ {int FBC_SUPPORT; int LPT_SUPPORT; int DUMMY_BACKEND; int CLK_GATING_DISABLED; } ;
struct TYPE_8__ {TYPE_1__ bits; scalar_t__ raw; } ;
struct TYPE_11__ {int lpt_channels_num; int memory_bus_width; int is_enabled; int embedded_panel_v_size; int embedded_panel_h_size; scalar_t__ attached_inst; scalar_t__ dram_channels_num; scalar_t__ channel_interleave_size; scalar_t__ raw_size; scalar_t__ banks_num; int min_compress_ratio; scalar_t__ preferred_requested_size; scalar_t__ allocated_size; struct dc_context* ctx; TYPE_2__ options; } ;
struct dce112_compressor {TYPE_5__ base; } ;
struct TYPE_9__ {int vram_width; } ;
struct dc_context {TYPE_3__ asic_id; struct dc_bios* dc_bios; } ;
struct dc_bios {TYPE_4__* funcs; } ;
struct TYPE_10__ {scalar_t__ (* get_embedded_panel_info ) (struct dc_bios*,struct embedded_panel_info*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dc_bios*,struct embedded_panel_info*) ;

void FUNC_1(struct dce112_compressor *VAR_2,
 struct dc_context *VAR_3)
{
 struct dc_bios *VAR_4 = VAR_3->dc_bios;
 struct embedded_panel_info VAR_5;

 VAR_2->base.options.raw = 0;
 VAR_2->base.options.bits.FBC_SUPPORT = 1;
 VAR_2->base.options.bits.LPT_SUPPORT = 1;

 VAR_2->base.lpt_channels_num = 1;
 VAR_2->base.options.bits.DUMMY_BACKEND = 0;



 if (VAR_2->base.memory_bus_width == 64)
  VAR_2->base.options.bits.LPT_SUPPORT = 0;

 VAR_2->base.options.bits.CLK_GATING_DISABLED = 0;

 VAR_2->base.ctx = VAR_3;
 VAR_2->base.embedded_panel_h_size = 0;
 VAR_2->base.embedded_panel_v_size = 0;
 VAR_2->base.memory_bus_width = VAR_3->asic_id.vram_width;
 VAR_2->base.allocated_size = 0;
 VAR_2->base.preferred_requested_size = 0;
 VAR_2->base.min_compress_ratio = VAR_1;
 VAR_2->base.banks_num = 0;
 VAR_2->base.raw_size = 0;
 VAR_2->base.channel_interleave_size = 0;
 VAR_2->base.dram_channels_num = 0;
 VAR_2->base.lpt_channels_num = 0;
 VAR_2->base.attached_inst = 0;
 VAR_2->base.is_enabled = 0;

 if (VAR_0 ==
   VAR_4->funcs->get_embedded_panel_info(VAR_4, &VAR_5)) {
  VAR_2->base.embedded_panel_h_size =
   VAR_5.lcd_timing.horizontal_addressable;
  VAR_2->base.embedded_panel_v_size =
   VAR_5.lcd_timing.vertical_addressable;
 }
}
