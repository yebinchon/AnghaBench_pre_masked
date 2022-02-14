
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct dc_state {scalar_t__ stream_count; scalar_t__* streams; } ;
struct dc {TYPE_1__* current_state; } ;
struct TYPE_2__ {scalar_t__ stream_count; scalar_t__* streams; } ;



__attribute__((used)) static bool FUNC_0(
  struct dc *VAR_0,
  struct dc_state *VAR_1)
{
 uint8_t VAR_2;

 if (VAR_1->stream_count != VAR_0->current_state->stream_count)
  return 1;

 for (VAR_2 = 0; VAR_2 < VAR_0->current_state->stream_count; VAR_2++) {
  if (VAR_0->current_state->streams[VAR_2] != VAR_1->streams[VAR_2])
   return 1;
 }

 return 0;
}
