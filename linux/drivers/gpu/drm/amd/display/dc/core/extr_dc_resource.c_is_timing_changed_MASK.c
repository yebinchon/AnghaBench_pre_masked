
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_stream_state {scalar_t__ sink; scalar_t__ output_color_space; int timing; } ;
struct dc_crtc_timing {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int *,int) ;

__attribute__((used)) static bool FUNC_1(struct dc_stream_state *VAR_0,
  struct dc_stream_state *VAR_1)
{
 if (VAR_0 == ((void*)0))
  return 1;




 if (VAR_0->sink != VAR_1->sink)
  return 1;


 if (VAR_0->output_color_space != VAR_1->output_color_space)
  return 1;

 return FUNC_0(
  &VAR_0->timing,
  &VAR_1->timing,
  sizeof(struct dc_crtc_timing)) != 0;
}
