
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


struct timing_generator {TYPE_5__* funcs; } ;
struct TYPE_13__ {struct timing_generator* tg; } ;
struct TYPE_9__ {TYPE_7__* hubp; } ;
struct pipe_ctx {TYPE_6__ stream_res; TYPE_2__ plane_res; struct dc_plane_state* plane_state; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_11__ {int is_flip_pending; int is_right_eye; TYPE_3__ current_address; TYPE_3__ requested_address; } ;
struct dc_plane_state {TYPE_4__ status; } ;
struct TYPE_14__ {TYPE_1__* funcs; } ;
struct TYPE_12__ {int (* is_stereo_left_eye ) (struct timing_generator*) ;} ;
struct TYPE_8__ {int (* hubp_is_flip_pending ) (TYPE_7__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (struct timing_generator*) ;

__attribute__((used)) static void FUNC_2(struct pipe_ctx *VAR_1)
{
 struct dc_plane_state *VAR_2 = VAR_1->plane_state;
 struct timing_generator *VAR_3 = VAR_1->stream_res.tg;
 bool VAR_4;

 if (VAR_2 == ((void*)0))
  return;

 VAR_4 = VAR_1->plane_res.hubp->funcs->hubp_is_flip_pending(
     VAR_1->plane_res.hubp);

 VAR_2->status.is_flip_pending = VAR_2->status.is_flip_pending || VAR_4;

 if (!VAR_4)
  VAR_2->status.current_address = VAR_2->status.requested_address;

 if (VAR_2->status.current_address.type == VAR_0 &&
   VAR_3->funcs->is_stereo_left_eye) {
  VAR_2->status.is_right_eye =
    !VAR_3->funcs->is_stereo_left_eye(VAR_1->stream_res.tg);
 }
}
