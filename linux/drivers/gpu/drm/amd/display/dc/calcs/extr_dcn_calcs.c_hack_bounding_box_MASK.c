
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dcn_bw_internal_vars {int dummy; } ;
struct dc_state {int stream_count; TYPE_2__** streams; } ;
struct dc_debug_options {scalar_t__ pipe_split_policy; scalar_t__ force_single_disp_pipe_split; } ;
struct TYPE_3__ {int pix_clk_100hz; } ;
struct TYPE_4__ {TYPE_1__ timing; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dcn_bw_internal_vars*) ;
 int FUNC_1 (struct dcn_bw_internal_vars*,int ) ;

__attribute__((used)) static void FUNC_2(struct dcn_bw_internal_vars *VAR_2,
  struct dc_debug_options *VAR_3,
  struct dc_state *VAR_4)
{
 if (VAR_3->pipe_split_policy == VAR_0)
  FUNC_0(VAR_2);

 if (VAR_3->pipe_split_policy == VAR_1 &&
  VAR_4->stream_count >= 2)
  FUNC_0(VAR_2);

 if (VAR_4->stream_count == 1 &&
   VAR_3->force_single_disp_pipe_split)
  FUNC_1(VAR_2, VAR_4->streams[0]->timing.pix_clk_100hz);
}
