
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct rect {scalar_t__ x; int width; scalar_t__ y; int height; } ;
struct TYPE_13__ {scalar_t__ x; int width; scalar_t__ y; int height; } ;
struct TYPE_14__ {TYPE_6__ recout; } ;
struct TYPE_12__ {TYPE_7__ scl_data; } ;
struct pipe_ctx {TYPE_5__ plane_res; struct dc_plane_state* plane_state; TYPE_2__* top_pipe; TYPE_1__* bottom_pipe; struct dc_stream_state* stream; } ;
struct TYPE_11__ {scalar_t__ x; int width; scalar_t__ y; int height; } ;
struct TYPE_10__ {scalar_t__ x; int width; scalar_t__ y; int height; } ;
struct dc_stream_state {scalar_t__ view_format; TYPE_4__ dst; TYPE_3__ src; } ;
struct dc_plane_state {struct rect clip_rect; } ;
struct TYPE_9__ {struct dc_plane_state* plane_state; } ;
struct TYPE_8__ {struct dc_plane_state* plane_state; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pipe_ctx *VAR_1)
{
 const struct dc_plane_state *VAR_2 = VAR_1->plane_state;
 const struct dc_stream_state *VAR_3 = VAR_1->stream;
 struct rect VAR_4 = VAR_2->clip_rect;
 bool VAR_5 = VAR_1->bottom_pipe &&
   VAR_1->bottom_pipe->plane_state == VAR_1->plane_state;
 bool VAR_6 = VAR_1->top_pipe &&
   VAR_1->top_pipe->plane_state == VAR_1->plane_state;
 bool VAR_7 = VAR_3->view_format == VAR_0;

 VAR_1->plane_res.scl_data.recout.x = VAR_3->dst.x;
 if (VAR_3->src.x < VAR_4.x)
  VAR_1->plane_res.scl_data.recout.x += (VAR_4.x
   - VAR_3->src.x) * VAR_3->dst.width
      / VAR_3->src.width;

 VAR_1->plane_res.scl_data.recout.width = VAR_4.width *
   VAR_3->dst.width / VAR_3->src.width;
 if (VAR_1->plane_res.scl_data.recout.width + VAR_1->plane_res.scl_data.recout.x >
   VAR_3->dst.x + VAR_3->dst.width)
  VAR_1->plane_res.scl_data.recout.width =
   VAR_3->dst.x + VAR_3->dst.width
      - VAR_1->plane_res.scl_data.recout.x;

 VAR_1->plane_res.scl_data.recout.y = VAR_3->dst.y;
 if (VAR_3->src.y < VAR_4.y)
  VAR_1->plane_res.scl_data.recout.y += (VAR_4.y
   - VAR_3->src.y) * VAR_3->dst.height
      / VAR_3->src.height;

 VAR_1->plane_res.scl_data.recout.height = VAR_4.height *
   VAR_3->dst.height / VAR_3->src.height;
 if (VAR_1->plane_res.scl_data.recout.height + VAR_1->plane_res.scl_data.recout.y >
   VAR_3->dst.y + VAR_3->dst.height)
  VAR_1->plane_res.scl_data.recout.height =
   VAR_3->dst.y + VAR_3->dst.height
      - VAR_1->plane_res.scl_data.recout.y;


 if (VAR_6 && VAR_7) {
  VAR_1->plane_res.scl_data.recout.y +=
    VAR_1->plane_res.scl_data.recout.height / 2;

  VAR_1->plane_res.scl_data.recout.height =
    (VAR_1->plane_res.scl_data.recout.height + 1) / 2;
 } else if (VAR_5 && VAR_7)
  VAR_1->plane_res.scl_data.recout.height /= 2;
 else if (VAR_6) {
  VAR_1->plane_res.scl_data.recout.x +=
    VAR_1->plane_res.scl_data.recout.width / 2;

  VAR_1->plane_res.scl_data.recout.width =
    (VAR_1->plane_res.scl_data.recout.width + 1) / 2;
 } else if (VAR_5)
  VAR_1->plane_res.scl_data.recout.width /= 2;
}
