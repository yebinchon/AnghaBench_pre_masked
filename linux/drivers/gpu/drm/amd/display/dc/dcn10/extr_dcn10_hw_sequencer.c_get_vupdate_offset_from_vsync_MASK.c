
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vstartup_start; } ;
struct pipe_ctx {TYPE_2__ pipe_dlg_param; TYPE_3__* stream; } ;
struct TYPE_4__ {scalar_t__ INTERLACE; } ;
struct dc_crtc_timing {int v_addressable; int v_border_bottom; int v_front_porch; int v_total; int v_border_top; TYPE_1__ flags; } ;
struct TYPE_6__ {struct dc_crtc_timing timing; } ;


 int FUNC_0 (struct dc_crtc_timing*) ;

int FUNC_1(struct pipe_ctx *VAR_0)
{
 const struct dc_crtc_timing *VAR_1 = &VAR_0->stream->timing;
 struct dc_crtc_timing VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_2 = *VAR_1;
 FUNC_0(&VAR_2);

 VAR_5 = VAR_2.flags.INTERLACE ? 2 : 1;

 VAR_3 = VAR_2.v_addressable +
   VAR_2.v_border_bottom +
   VAR_2.v_front_porch;

 VAR_4 = (VAR_2.v_total -
   VAR_3 -
   VAR_2.v_border_top)
   * VAR_5;

 VAR_6 = VAR_4 -
   VAR_0->pipe_dlg_param.vstartup_start + 1;

 return VAR_6;
}
