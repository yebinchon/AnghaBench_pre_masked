
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct dce110_timing_generator_offsets {int dummy; } ;
struct TYPE_2__ {size_t inst; int bp; struct dc_context* ctx; int * funcs; } ;
struct dce110_timing_generator {int min_h_blank; int min_h_front_porch; int min_h_back_porch; scalar_t__ max_v_total; scalar_t__ max_h_total; TYPE_1__ base; int derived_offsets; struct dce110_timing_generator_offsets offsets; scalar_t__ controller_id; } ;
struct dc_context {int dc_bios; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

void FUNC_0(
 struct dce110_timing_generator *VAR_5,
 struct dc_context *VAR_6,
 uint32_t VAR_7,
 const struct dce110_timing_generator_offsets *VAR_8)
{
 VAR_5->controller_id = VAR_0 + VAR_7;
 VAR_5->base.inst = VAR_7;
 VAR_5->offsets = *VAR_8;
 VAR_5->derived_offsets = VAR_4[VAR_7];

 VAR_5->base.funcs = &VAR_3;

 VAR_5->base.ctx = VAR_6;
 VAR_5->base.bp = VAR_6->dc_bios;

 VAR_5->max_h_total = VAR_1 + 1;
 VAR_5->max_v_total = VAR_2 + 1;

 VAR_5->min_h_blank = 56;
 VAR_5->min_h_front_porch = 4;
 VAR_5->min_h_back_porch = 4;
}
