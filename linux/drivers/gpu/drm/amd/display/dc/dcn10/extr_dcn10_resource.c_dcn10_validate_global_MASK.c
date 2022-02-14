
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dc_state {int stream_count; TYPE_1__* stream_status; } ;
struct TYPE_9__ {int enable; } ;
struct TYPE_8__ {int width; scalar_t__ height; } ;
struct TYPE_7__ {int width; scalar_t__ height; } ;
struct dc_plane_state {scalar_t__ format; TYPE_4__ dcc; TYPE_3__ src_rect; TYPE_2__ dst_rect; } ;
struct dc {TYPE_5__* dcn_soc; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_10__ {int number_of_channels; } ;
struct TYPE_6__ {int plane_count; struct dc_plane_state** plane_states; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static enum dc_status FUNC_0(struct dc *VAR_4, struct dc_state *VAR_5)
{
 int VAR_6, VAR_7;
 bool VAR_8 = 0;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 bool VAR_11 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_5->stream_count; VAR_6++) {
  if (VAR_5->stream_status[VAR_6].plane_count == 0)
   continue;

  if (VAR_5->stream_status[VAR_6].plane_count > 2)
   return VAR_1;

  for (VAR_7 = 0; VAR_7 < VAR_5->stream_status[VAR_6].plane_count; VAR_7++) {
   struct dc_plane_state *VAR_12 =
    VAR_5->stream_status[VAR_6].plane_states[VAR_7];


   if (VAR_12->format >= VAR_3) {

    if (VAR_12->src_rect.width > VAR_12->dst_rect.width ||
      VAR_12->src_rect.height > VAR_12->dst_rect.height)
     VAR_8 = 1;

    if (VAR_12->src_rect.width >= 3840)
     VAR_9 = 1;

   } else {
    if (VAR_12->src_rect.width >= 3840)
     VAR_10 = 1;
    if (!VAR_12->dcc.enable)
     VAR_11 = 1;
   }
  }
 }






 if (VAR_9 && VAR_10 && VAR_8 && VAR_11 &&
   VAR_4->dcn_soc->number_of_channels == 1)
  return VAR_0;

 return VAR_2;
}
