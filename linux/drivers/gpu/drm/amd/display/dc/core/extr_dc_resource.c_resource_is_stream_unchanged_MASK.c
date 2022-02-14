
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_stream_state {int dummy; } ;
struct dc_state {int stream_count; struct dc_stream_state** streams; } ;


 scalar_t__ FUNC_0 (struct dc_stream_state*,struct dc_stream_state*) ;

bool FUNC_1(
 struct dc_state *VAR_0, struct dc_stream_state *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->stream_count; VAR_2++) {
  struct dc_stream_state *VAR_3 = VAR_0->streams[VAR_2];

  if (FUNC_0(VAR_3, VAR_1))
    return 1;
 }

 return 0;
}
