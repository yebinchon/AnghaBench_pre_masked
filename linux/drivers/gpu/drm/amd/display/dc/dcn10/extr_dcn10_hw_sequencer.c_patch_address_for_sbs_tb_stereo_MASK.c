
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pipe_ctx {TYPE_3__* stream; struct dc_plane_state* plane_state; TYPE_1__* top_pipe; } ;
struct TYPE_9__ {int left_addr; int right_addr; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_4__ grph_stereo; } ;
struct dc_plane_state {TYPE_5__ address; } ;
struct TYPE_7__ {scalar_t__ timing_3d_format; } ;
struct TYPE_8__ {scalar_t__ view_format; TYPE_2__ timing; } ;
struct TYPE_6__ {struct dc_plane_state* plane_state; } ;
typedef int PHYSICAL_ADDRESS_LOC ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(
  struct pipe_ctx *VAR_4, PHYSICAL_ADDRESS_LOC *VAR_5)
{
 struct dc_plane_state *VAR_6 = VAR_4->plane_state;
 bool VAR_7 = VAR_4->top_pipe &&
   VAR_4->top_pipe->plane_state == VAR_4->plane_state;
 if (VAR_7 && VAR_6->address.type == VAR_0 &&
  (VAR_4->stream->timing.timing_3d_format ==
   VAR_1 ||
   VAR_4->stream->timing.timing_3d_format ==
   VAR_2)) {
  *VAR_5 = VAR_6->address.grph_stereo.left_addr;
  VAR_6->address.grph_stereo.left_addr =
  VAR_6->address.grph_stereo.right_addr;
  return 1;
 } else {
  if (VAR_4->stream->view_format != VAR_3 &&
   VAR_6->address.type != VAR_0) {
   VAR_6->address.type = VAR_0;
   VAR_6->address.grph_stereo.right_addr =
   VAR_6->address.grph_stereo.left_addr;
  }
 }
 return 0;
}
