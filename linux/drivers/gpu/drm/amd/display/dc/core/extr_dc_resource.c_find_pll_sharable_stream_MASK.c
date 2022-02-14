
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_stream_state {TYPE_1__* link; int signal; } ;
struct dc_state {int stream_count; struct dc_stream_state** streams; } ;
struct TYPE_2__ {scalar_t__ connector_signal; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dc_stream_state*,struct dc_stream_state*) ;

__attribute__((used)) static struct dc_stream_state *FUNC_2(
  struct dc_stream_state *VAR_1,
  struct dc_state *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->stream_count; VAR_3++) {
  struct dc_stream_state *VAR_4 = VAR_2->streams[VAR_3];


  if (FUNC_1(
   VAR_1, VAR_4)
   && !FUNC_0(VAR_4->signal)
   && VAR_4->link->connector_signal
   != VAR_0)
   return VAR_4;

 }

 return ((void*)0);
}
