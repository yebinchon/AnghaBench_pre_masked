
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int pix_clk_100hz; } ;
struct dc_stream_state {scalar_t__ signal; TYPE_4__ timing; TYPE_3__* ctx; TYPE_5__* link; } ;
struct dc_sink {scalar_t__ sink_signal; } ;
struct TYPE_10__ {scalar_t__ connector_signal; } ;
struct TYPE_8__ {TYPE_2__* dc; } ;
struct TYPE_6__ {scalar_t__ dual_link_dvi; } ;
struct TYPE_7__ {TYPE_1__ caps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

void FUNC_1(struct dc_stream_state *VAR_4, struct dc_sink *VAR_5)
{
 if (VAR_5->sink_signal == VAR_2)
  VAR_4->signal = VAR_4->link->connector_signal;
 else
  VAR_4->signal = VAR_5->sink_signal;

 if (FUNC_0(VAR_4->signal)) {
  if (VAR_4->ctx->dc->caps.dual_link_dvi &&
   (VAR_4->timing.pix_clk_100hz / 10) > VAR_3 &&
   VAR_5->sink_signal != VAR_1)
   VAR_4->signal = VAR_0;
  else
   VAR_4->signal = VAR_1;
 }
}
