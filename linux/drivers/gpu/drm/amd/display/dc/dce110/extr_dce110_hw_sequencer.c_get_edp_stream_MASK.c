
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_stream_state {scalar_t__ signal; } ;
struct dc_state {int stream_count; struct dc_stream_state** streams; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct dc_stream_state *FUNC_0(struct dc_state *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->stream_count; VAR_2++) {
  if (VAR_1->streams[VAR_2]->signal == VAR_0)
   return VAR_1->streams[VAR_2];
 }
 return ((void*)0);
}
