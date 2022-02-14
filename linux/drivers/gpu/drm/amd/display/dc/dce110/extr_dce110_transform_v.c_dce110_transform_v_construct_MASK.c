
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * funcs; struct dc_context* ctx; } ;
struct dce_transform {int lb_pixel_depth_supported; int prescaler_on; int lb_memory_size; int lb_bits_per_entry; TYPE_1__ base; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

bool FUNC_0(
 struct dce_transform *VAR_6,
 struct dc_context *VAR_7)
{
 VAR_6->base.ctx = VAR_7;

 VAR_6->base.funcs = &VAR_5;

 VAR_6->lb_pixel_depth_supported =
   VAR_1 |
   VAR_2 |
   VAR_3;

 VAR_6->prescaler_on = 1;
 VAR_6->lb_bits_per_entry = VAR_0;
 VAR_6->lb_memory_size = VAR_4;

 return 1;
}
