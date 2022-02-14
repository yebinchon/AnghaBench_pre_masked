
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_stream_state {scalar_t__ signal; int dpms_off; } ;
struct dc_state {int stream_count; struct dc_stream_state** streams; } ;
struct dc {int dummy; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(
  struct dc *VAR_1,
  struct dc_state *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2->stream_count; VAR_3++) {
  const struct dc_stream_state *VAR_5 = VAR_2->streams[VAR_3];







  if (!VAR_5->dpms_off || VAR_5->signal == VAR_0)
   VAR_4++;
 }

 return VAR_4;
}
