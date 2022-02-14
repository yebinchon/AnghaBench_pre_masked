
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {void* horz; void* horz_c; void* vert; void* vert_c; } ;
struct TYPE_20__ {void* v_c; void* v_c_bot; void* v; void* v_bot; void* h_c; void* h; } ;
struct TYPE_13__ {int height; int y; int width; int x; } ;
struct TYPE_19__ {scalar_t__ v_taps_c; scalar_t__ h_taps_c; scalar_t__ v_taps; scalar_t__ h_taps; } ;
struct TYPE_12__ {int height; int y; int width; int x; } ;
struct TYPE_15__ {int x; int y; } ;
struct scaler_data {scalar_t__ format; TYPE_10__ ratios; TYPE_9__ inits; TYPE_2__ viewport_c; TYPE_8__ taps; TYPE_1__ viewport; TYPE_4__ recout; } ;
struct rect {int x; int width; int y; int height; } ;
struct TYPE_14__ {struct scaler_data scl_data; } ;
struct pipe_ctx {struct dc_plane_state* plane_state; TYPE_3__ plane_res; struct dc_stream_state* stream; } ;
struct TYPE_18__ {int x; int width; int y; int height; } ;
struct TYPE_17__ {int x; int width; int y; int height; } ;
struct dc_stream_state {TYPE_7__ src; TYPE_6__ dst; } ;
struct TYPE_16__ {int x; int width; int y; int height; } ;
struct dc_plane_state {TYPE_5__ dst_rect; int horizontal_mirror; int rotation; struct rect src_rect; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int,int,scalar_t__,void*,void**,int *,int *) ;
 void* FUNC_1 (void*,void*) ;
 int FUNC_2 (void*,scalar_t__) ;
 void* FUNC_3 (int ,int) ;
 void* FUNC_4 (void*,int) ;
 int FUNC_5 (int ,int ,int*,int*,int*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct pipe_ctx *VAR_2)
{
 const struct dc_plane_state *VAR_3 = VAR_2->plane_state;
 const struct dc_stream_state *VAR_4 = VAR_2->stream;
 struct scaler_data *VAR_5 = &VAR_2->plane_res.scl_data;
 struct rect VAR_6 = VAR_2->plane_state->src_rect;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11 = (VAR_5->format == VAR_1
   || VAR_5->format == VAR_0) ? 2 : 1;
 bool VAR_12, VAR_13, VAR_14;




 FUNC_5(
   VAR_3->rotation,
   VAR_3->horizontal_mirror,
   &VAR_12,
   &VAR_13,
   &VAR_14);


 VAR_9 = VAR_6.x + VAR_6.width;
 VAR_10 = VAR_6.y + VAR_6.height;
 if (VAR_14)
  VAR_6.x = 0;
 if (VAR_13)
  VAR_6.y = 0;
 if (VAR_12) {
  FUNC_6(VAR_6.x, VAR_6.y);
  FUNC_6(VAR_6.width, VAR_6.height);
 }





 VAR_7 = VAR_5->recout.x - (VAR_4->dst.x + (VAR_3->dst_rect.x - VAR_4->src.x)
     * VAR_4->dst.width / VAR_4->src.width -
     VAR_6.x * VAR_3->dst_rect.width / VAR_6.width
     * VAR_4->dst.width / VAR_4->src.width);
 VAR_8 = VAR_5->recout.y - (VAR_4->dst.y + (VAR_3->dst_rect.y - VAR_4->src.y)
     * VAR_4->dst.height / VAR_4->src.height -
     VAR_6.y * VAR_3->dst_rect.height / VAR_6.height
     * VAR_4->dst.height / VAR_4->src.height);
 if (VAR_12)
  FUNC_6(VAR_7, VAR_8);






 VAR_5->inits.h = FUNC_4(FUNC_3(
   FUNC_2(VAR_5->ratios.horz, VAR_5->taps.h_taps + 1), 2), 19);

 VAR_5->inits.h_c = FUNC_4(FUNC_1(VAR_5->inits.h_c, FUNC_3(
   FUNC_2(VAR_5->ratios.horz_c, VAR_5->taps.h_taps_c + 1), 2)), 19);

 VAR_5->inits.v = FUNC_4(FUNC_3(
   FUNC_2(VAR_5->ratios.vert, VAR_5->taps.v_taps + 1), 2), 19);

 VAR_5->inits.v_c = FUNC_4(FUNC_1(VAR_5->inits.v_c, FUNC_3(
   FUNC_2(VAR_5->ratios.vert_c, VAR_5->taps.v_taps_c + 1), 2)), 19);





 FUNC_0(
   VAR_14,
   VAR_7,
   VAR_9,
   VAR_12 ? VAR_5->taps.v_taps : VAR_5->taps.h_taps,
   VAR_12 ? VAR_5->ratios.vert : VAR_5->ratios.horz,
   VAR_12 ? &VAR_5->inits.v : &VAR_5->inits.h,
   &VAR_5->viewport.x,
   &VAR_5->viewport.width);
 FUNC_0(
   VAR_14,
   VAR_7,
   VAR_9 / VAR_11,
   VAR_12 ? VAR_5->taps.v_taps_c : VAR_5->taps.h_taps_c,
   VAR_12 ? VAR_5->ratios.vert_c : VAR_5->ratios.horz_c,
   VAR_12 ? &VAR_5->inits.v_c : &VAR_5->inits.h_c,
   &VAR_5->viewport_c.x,
   &VAR_5->viewport_c.width);
 FUNC_0(
   VAR_13,
   VAR_8,
   VAR_10,
   VAR_12 ? VAR_5->taps.h_taps : VAR_5->taps.v_taps,
   VAR_12 ? VAR_5->ratios.horz : VAR_5->ratios.vert,
   VAR_12 ? &VAR_5->inits.h : &VAR_5->inits.v,
   &VAR_5->viewport.y,
   &VAR_5->viewport.height);
 FUNC_0(
   VAR_13,
   VAR_8,
   VAR_10 / VAR_11,
   VAR_12 ? VAR_5->taps.h_taps_c : VAR_5->taps.v_taps_c,
   VAR_12 ? VAR_5->ratios.horz_c : VAR_5->ratios.vert_c,
   VAR_12 ? &VAR_5->inits.h_c : &VAR_5->inits.v_c,
   &VAR_5->viewport_c.y,
   &VAR_5->viewport_c.height);


 VAR_5->inits.v_bot = FUNC_1(VAR_5->inits.v, VAR_5->ratios.vert);
 VAR_5->inits.v_c_bot = FUNC_1(VAR_5->inits.v_c, VAR_5->ratios.vert_c);

}
