
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ c_depth; } ;
struct TYPE_3__ {scalar_t__ h_total; scalar_t__ v_total; scalar_t__ h_addressable; scalar_t__ v_addressable; scalar_t__ pix_clk_100hz; } ;
struct dc_stream_state {scalar_t__ phy_pix_clk; scalar_t__ view_format; scalar_t__ ignore_msa_timing_param; int signal; TYPE_2__ clamping; TYPE_1__ timing; } ;


 int FUNC_0 (int ) ;

bool FUNC_1(
 struct dc_stream_state *VAR_0,
 struct dc_stream_state *VAR_1)
{
 if (VAR_0->timing.h_total != VAR_1->timing.h_total)
  return 0;

 if (VAR_0->timing.v_total != VAR_1->timing.v_total)
  return 0;

 if (VAR_0->timing.h_addressable
    != VAR_1->timing.h_addressable)
  return 0;

 if (VAR_0->timing.v_addressable
    != VAR_1->timing.v_addressable)
  return 0;

 if (VAR_0->timing.pix_clk_100hz
    != VAR_1->timing.pix_clk_100hz)
  return 0;

 if (VAR_0->clamping.c_depth != VAR_1->clamping.c_depth)
  return 0;

 if (VAR_0->phy_pix_clk != VAR_1->phy_pix_clk
   && (!FUNC_0(VAR_0->signal)
   || !FUNC_0(VAR_1->signal)))
  return 0;

 if (VAR_0->view_format != VAR_1->view_format)
  return 0;

 if (VAR_0->ignore_msa_timing_param || VAR_1->ignore_msa_timing_param)
  return 0;

 return 1;
}
