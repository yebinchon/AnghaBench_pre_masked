
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc_state {int stream_count; TYPE_2__* stream_status; } ;
struct TYPE_4__ {int plane_count; TYPE_1__** plane_states; } ;
struct TYPE_3__ {scalar_t__ format; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(
  struct dc_state *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->stream_count; VAR_2++) {
  if (VAR_1->stream_status[VAR_2].plane_count == 0)
   continue;

  if (VAR_1->stream_status[VAR_2].plane_count > 1)
   return 0;

  if (VAR_1->stream_status[VAR_2].plane_states[0]->format
    >= VAR_0)
   return 0;
 }

 return 1;
}
