
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_state {int stream_count; int ** streams; TYPE_1__* stream_status; } ;
struct TYPE_2__ {int plane_count; int * plane_states; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct dc_state *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->stream_count; VAR_1++) {
  for (VAR_2 = 0; VAR_2 < VAR_0->stream_status[VAR_1].plane_count; VAR_2++)
   FUNC_0(
    VAR_0->stream_status[VAR_1].plane_states[VAR_2]);

  VAR_0->stream_status[VAR_1].plane_count = 0;
  FUNC_1(VAR_0->streams[VAR_1]);
  VAR_0->streams[VAR_1] = ((void*)0);
 }
}
