
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcn10_stream_encoder_shift {int dummy; } ;
struct dcn10_stream_encoder_mask {int dummy; } ;
struct TYPE_2__ {int id; struct dc_bios* bp; struct dc_context* ctx; int * funcs; } ;
struct dcn10_stream_encoder {struct dcn10_stream_encoder_mask const* se_mask; struct dcn10_stream_encoder_shift const* se_shift; struct dcn10_stream_enc_registers const* regs; TYPE_1__ base; } ;
struct dcn10_stream_enc_registers {int dummy; } ;
struct dc_context {int dummy; } ;
struct dc_bios {int dummy; } ;
typedef enum engine_id { ____Placeholder_engine_id } engine_id ;


 int VAR_0 ;

void FUNC_0(
 struct dcn10_stream_encoder *VAR_1,
 struct dc_context *VAR_2,
 struct dc_bios *VAR_3,
 enum engine_id VAR_4,
 const struct dcn10_stream_enc_registers *VAR_5,
 const struct dcn10_stream_encoder_shift *VAR_6,
 const struct dcn10_stream_encoder_mask *VAR_7)
{
 VAR_1->base.funcs = &VAR_0;
 VAR_1->base.ctx = VAR_2;
 VAR_1->base.id = VAR_4;
 VAR_1->base.bp = VAR_3;
 VAR_1->regs = VAR_5;
 VAR_1->se_shift = VAR_6;
 VAR_1->se_mask = VAR_7;
}
