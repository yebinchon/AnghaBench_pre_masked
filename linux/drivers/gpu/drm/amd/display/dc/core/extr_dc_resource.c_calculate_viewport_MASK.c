
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int x; int width; int y; int height; } ;
struct TYPE_10__ {int x; int y; int width; int height; } ;
struct TYPE_9__ {void* v_c; void* h_c; } ;
struct scaler_data {scalar_t__ format; TYPE_3__ viewport; TYPE_2__ viewport_c; TYPE_1__ inits; } ;
struct rect {int x; int width; int y; int height; } ;
struct TYPE_12__ {struct scaler_data scl_data; } ;
struct pipe_ctx {struct dc_plane_state* plane_state; TYPE_6__* top_pipe; TYPE_5__* bottom_pipe; TYPE_4__ plane_res; struct dc_stream_state* stream; } ;
struct TYPE_15__ {scalar_t__ x; scalar_t__ width; scalar_t__ y; scalar_t__ height; } ;
struct dc_stream_state {scalar_t__ view_format; TYPE_7__ src; } ;
struct TYPE_16__ {scalar_t__ x; scalar_t__ width; scalar_t__ y; scalar_t__ height; } ;
struct dc_plane_state {int horizontal_mirror; int rotation; TYPE_8__ clip_rect; struct rect dst_rect; struct rect src_rect; } ;
struct TYPE_14__ {struct dc_plane_state* plane_state; } ;
struct TYPE_13__ {struct dc_plane_state* plane_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ,int ,int*,int*,int*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct pipe_ctx *VAR_6)
{
 const struct dc_plane_state *VAR_7 = VAR_6->plane_state;
 const struct dc_stream_state *VAR_8 = VAR_6->stream;
 struct scaler_data *VAR_9 = &VAR_6->plane_res.scl_data;
 struct rect VAR_10 = VAR_7->src_rect;
 struct rect VAR_11, VAR_12;
 int VAR_13 = (VAR_9->format == VAR_1
   || VAR_9->format == VAR_0) ? 2 : 1;
 bool VAR_14 = VAR_6->bottom_pipe &&
   VAR_6->bottom_pipe->plane_state == VAR_6->plane_state;
 bool VAR_15 = VAR_6->top_pipe &&
   VAR_6->top_pipe->plane_state == VAR_6->plane_state;
 bool VAR_16, VAR_17, VAR_18;

 if (VAR_8->view_format == VAR_2 ||
  VAR_8->view_format == VAR_3) {
  VAR_14 = 0;
  VAR_15 = 0;
 }




 VAR_12 = VAR_7->dst_rect;
 VAR_11.x = VAR_8->src.x > VAR_7->clip_rect.x ?
   VAR_8->src.x : VAR_7->clip_rect.x;

 VAR_11.width = VAR_8->src.x + VAR_8->src.width <
   VAR_7->clip_rect.x + VAR_7->clip_rect.width ?
   VAR_8->src.x + VAR_8->src.width - VAR_11.x :
   VAR_7->clip_rect.x + VAR_7->clip_rect.width - VAR_11.x ;

 VAR_11.y = VAR_8->src.y > VAR_7->clip_rect.y ?
   VAR_8->src.y : VAR_7->clip_rect.y;

 VAR_11.height = VAR_8->src.y + VAR_8->src.height <
   VAR_7->clip_rect.y + VAR_7->clip_rect.height ?
   VAR_8->src.y + VAR_8->src.height - VAR_11.y :
   VAR_7->clip_rect.y + VAR_7->clip_rect.height - VAR_11.y ;





 FUNC_0(
   VAR_7->rotation,
   VAR_7->horizontal_mirror,
   &VAR_16,
   &VAR_17,
   &VAR_18);

 if (VAR_16) {
  FUNC_1(VAR_11.x, VAR_11.y);
  FUNC_1(VAR_11.width, VAR_11.height);
  FUNC_1(VAR_12.x, VAR_12.y);
  FUNC_1(VAR_12.width, VAR_12.height);
 }
 if (VAR_18) {
  VAR_11.x = VAR_12.x + VAR_12.width - VAR_11.x - VAR_11.width;
  VAR_12.x = 0;
 }
 if (VAR_17) {
  VAR_11.y = VAR_12.y + VAR_12.height - VAR_11.y - VAR_11.height;
  VAR_12.y = 0;
 }




 VAR_9->viewport.x = VAR_10.x + (VAR_11.x - VAR_12.x) * VAR_10.width / VAR_12.width;
 VAR_9->viewport.width = VAR_11.width * VAR_10.width / VAR_12.width;

 VAR_9->viewport.y = VAR_10.y + (VAR_11.y - VAR_12.y) * VAR_10.height / VAR_12.height;
 VAR_9->viewport.height = VAR_11.height * VAR_10.height / VAR_12.height;


 if (VAR_14 || VAR_15) {
  if (VAR_16) {
   if (VAR_17 != VAR_14)
    VAR_9->viewport.height /= 2;
   else {
    VAR_9->viewport.y += VAR_9->viewport.height / 2;

    VAR_9->viewport.height = (VAR_9->viewport.height + 1) / 2;
   }
  } else {
   if (VAR_18 != VAR_14)
    VAR_9->viewport.width /= 2;
   else {
    VAR_9->viewport.x += VAR_9->viewport.width / 2;

    VAR_9->viewport.width = (VAR_9->viewport.width + 1) / 2;
   }
  }
 }


 VAR_9->viewport_c.x = VAR_9->viewport.x / VAR_13;
 VAR_9->viewport_c.y = VAR_9->viewport.y / VAR_13;
 VAR_9->inits.h_c = (VAR_9->viewport.x % VAR_13) != 0 ? VAR_4 : VAR_5;
 VAR_9->inits.v_c = (VAR_9->viewport.y % VAR_13) != 0 ? VAR_4 : VAR_5;


 VAR_9->viewport_c.width = (VAR_9->viewport.width + VAR_13 - 1) / VAR_13;
 VAR_9->viewport_c.height = (VAR_9->viewport.height + VAR_13 - 1) / VAR_13;
}
