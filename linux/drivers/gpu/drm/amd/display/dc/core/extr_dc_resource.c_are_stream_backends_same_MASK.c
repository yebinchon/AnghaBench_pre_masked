
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_stream_state {scalar_t__ dpms_off; } ;


 scalar_t__ FUNC_0 (struct dc_stream_state*,struct dc_stream_state*) ;
 scalar_t__ FUNC_1 (struct dc_stream_state*,struct dc_stream_state*) ;
 scalar_t__ FUNC_2 (struct dc_stream_state*,struct dc_stream_state*) ;

__attribute__((used)) static bool FUNC_3(
 struct dc_stream_state *VAR_0, struct dc_stream_state *VAR_1)
{
 if (VAR_0 == VAR_1)
  return 1;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return 0;

 if (FUNC_1(VAR_0, VAR_1))
  return 0;

 if (FUNC_0(VAR_0, VAR_1))
  return 0;

 if (VAR_0->dpms_off != VAR_1->dpms_off)
  return 0;

 if (FUNC_2(VAR_0, VAR_1))
  return 0;

 return 1;
}
