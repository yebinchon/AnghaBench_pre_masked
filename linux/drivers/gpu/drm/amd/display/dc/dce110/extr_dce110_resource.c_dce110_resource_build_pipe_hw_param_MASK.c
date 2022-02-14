
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


struct TYPE_9__ {int pix_clk_params; } ;
struct pipe_ctx {TYPE_6__* stream; int pll_settings; TYPE_3__ stream_res; TYPE_5__* clock_source; } ;
struct TYPE_8__ {int pixel_encoding; } ;
struct TYPE_7__ {int pixel_encoding; } ;
struct TYPE_12__ {TYPE_2__ timing; TYPE_1__ clamping; int bit_depth_params; } ;
struct TYPE_11__ {TYPE_4__* funcs; } ;
struct TYPE_10__ {int (* get_pix_clk_dividers ) (TYPE_5__*,int *,int *) ;} ;


 int FUNC_0 (struct pipe_ctx*,int *) ;
 int FUNC_1 (TYPE_6__*,int *) ;
 int FUNC_2 (TYPE_5__*,int *,int *) ;

void FUNC_3(struct pipe_ctx *VAR_0)
{
 FUNC_0(VAR_0, &VAR_0->stream_res.pix_clk_params);
 VAR_0->clock_source->funcs->get_pix_clk_dividers(
  VAR_0->clock_source,
  &VAR_0->stream_res.pix_clk_params,
  &VAR_0->pll_settings);
 FUNC_1(VAR_0->stream,
   &VAR_0->stream->bit_depth_params);
 VAR_0->stream->clamping.pixel_encoding = VAR_0->stream->timing.pixel_encoding;
}
