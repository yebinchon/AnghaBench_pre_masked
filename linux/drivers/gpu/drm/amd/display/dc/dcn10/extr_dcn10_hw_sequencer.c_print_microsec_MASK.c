
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int const uint32_t ;
struct dc_log_buffer_ctx {int dummy; } ;
struct dc_context {TYPE_3__* dc; } ;
struct TYPE_6__ {TYPE_2__* res_pool; } ;
struct TYPE_4__ {int dchub_ref_clock_inKhz; } ;
struct TYPE_5__ {TYPE_1__ ref_clocks; } ;


 int FUNC_0 (char*,unsigned int const,unsigned int const) ;

void FUNC_1(struct dc_context *VAR_0,
 struct dc_log_buffer_ctx *VAR_1,
 uint32_t VAR_2)
{
 const uint32_t VAR_3 = VAR_0->dc->res_pool->ref_clocks.dchub_ref_clock_inKhz / 1000;
 static const unsigned int VAR_4 = 1000;
 uint32_t VAR_5 = (VAR_2 * VAR_4) / VAR_3;

 FUNC_0("  %11d.%03d",
   VAR_5 / VAR_4,
   VAR_5 % VAR_4);
}
