
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dc_state {int stream_count; TYPE_4__** streams; TYPE_1__* stream_status; } ;
struct TYPE_6__ {int width; int height; } ;
struct dc_plane_state {scalar_t__ format; TYPE_2__ src_rect; } ;
struct TYPE_7__ {scalar_t__ pixel_encoding; } ;
struct TYPE_8__ {TYPE_3__ timing; } ;
struct TYPE_5__ {int plane_count; struct dc_plane_state** plane_states; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(
  struct dc_state *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->stream_count; VAR_3++) {
  if (VAR_2->stream_status[VAR_3].plane_count == 0)
   continue;

  if (VAR_2->stream_status[VAR_3].plane_count > 2)
   return 0;

  for (VAR_4 = 0; VAR_4 < VAR_2->stream_status[VAR_3].plane_count; VAR_4++) {
   struct dc_plane_state *VAR_5 =
    VAR_2->stream_status[VAR_3].plane_states[VAR_4];


   if (VAR_5->format >= VAR_1) {

    if ((VAR_5->src_rect.width > 1920 ||
     VAR_5->src_rect.height > 1080))
     return 0;





    if (VAR_4 == 0)
     return 0;




    if (VAR_2->streams[VAR_3]->timing.pixel_encoding
      != VAR_0)
     return 0;

   }

  }
 }

 return 1;
}
