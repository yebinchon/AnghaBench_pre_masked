
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_stream_state {scalar_t__ ignore_msa_timing_param; } ;


 int FUNC_0 (struct dc_stream_state*,struct dc_stream_state*) ;

bool FUNC_1(
 struct dc_stream_state *VAR_0, struct dc_stream_state *VAR_1)
{

 if (!FUNC_0(VAR_0, VAR_1))
  return 0;

 if (VAR_0->ignore_msa_timing_param != VAR_1->ignore_msa_timing_param)
  return 0;

 return 1;
}
