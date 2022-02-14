
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct dc_stream_status {int dummy; } ;
struct dc_stream_state {int dummy; } ;
struct dc_state {size_t stream_count; struct dc_stream_status* stream_status; struct dc_stream_state** streams; } ;



struct dc_stream_status *FUNC_0(
 struct dc_state *VAR_0,
 struct dc_stream_state *VAR_1)
{
 uint8_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->stream_count; VAR_2++) {
  if (VAR_1 == VAR_0->streams[VAR_2])
   return &VAR_0->stream_status[VAR_2];
 }

 return ((void*)0);
}
