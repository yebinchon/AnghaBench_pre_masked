
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


struct TYPE_10__ {int dispclk_khz; int yclk_khz; } ;
struct TYPE_11__ {TYPE_4__ dce; } ;
struct TYPE_12__ {TYPE_5__ bw; } ;
struct TYPE_9__ {TYPE_2__* pipe_ctx; } ;
struct dc_state {TYPE_6__ bw_ctx; TYPE_3__ res_ctx; } ;
struct dc {TYPE_1__* res_pool; } ;
struct TYPE_8__ {scalar_t__ stream; } ;
struct TYPE_7__ {int pipe_count; } ;


 int VAR_0 ;

bool FUNC_0(
 struct dc *VAR_1,
 struct dc_state *VAR_2,
 bool VAR_3)
{
 int VAR_4;
 bool VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1->res_pool->pipe_count; VAR_4++) {
  if (VAR_2->res_ctx.pipe_ctx[VAR_4].stream)
   VAR_5 = 1;
 }

 if (VAR_5) {

  VAR_2->bw_ctx.bw.dce.dispclk_khz = 681000;
  VAR_2->bw_ctx.bw.dce.yclk_khz = 250000 * VAR_0;
 } else {
  VAR_2->bw_ctx.bw.dce.dispclk_khz = 0;
  VAR_2->bw_ctx.bw.dce.yclk_khz = 0;
 }

 return 1;
}
