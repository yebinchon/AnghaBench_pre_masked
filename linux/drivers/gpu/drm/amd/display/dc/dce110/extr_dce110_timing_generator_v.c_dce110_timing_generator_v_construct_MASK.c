
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bp; struct dc_context* ctx; int * funcs; } ;
struct dce110_timing_generator {int min_h_blank; int min_h_front_porch; int min_h_back_porch; scalar_t__ max_v_total; scalar_t__ max_h_total; TYPE_1__ base; int controller_id; } ;
struct dc_context {int dc_bios; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_0(
 struct dce110_timing_generator *VAR_4,
 struct dc_context *VAR_5)
{
 VAR_4->controller_id = VAR_0;

 VAR_4->base.funcs = &VAR_3;

 VAR_4->base.ctx = VAR_5;
 VAR_4->base.bp = VAR_5->dc_bios;

 VAR_4->max_h_total = VAR_1 + 1;
 VAR_4->max_v_total = VAR_2 + 1;

 VAR_4->min_h_blank = 56;
 VAR_4->min_h_front_porch = 4;
 VAR_4->min_h_back_porch = 4;
}
