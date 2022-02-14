
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


struct TYPE_14__ {TYPE_7__* tg; } ;
struct TYPE_11__ {TYPE_8__* mi; } ;
struct pipe_ctx {TYPE_6__ stream_res; TYPE_3__ plane_res; struct dc_plane_state* plane_state; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_12__ {int is_right_eye; TYPE_2__ current_address; scalar_t__ is_flip_pending; } ;
struct dc_plane_state {TYPE_4__ status; int visible; } ;
struct TYPE_16__ {TYPE_2__ current_address; TYPE_2__ request_address; TYPE_1__* funcs; } ;
struct TYPE_15__ {TYPE_5__* funcs; } ;
struct TYPE_13__ {int (* is_stereo_left_eye ) (TYPE_7__*) ;} ;
struct TYPE_9__ {scalar_t__ (* mem_input_is_flip_pending ) (TYPE_8__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_7__*) ;

__attribute__((used)) static void FUNC_2(struct pipe_ctx *VAR_1)
{
 struct dc_plane_state *VAR_2 = VAR_1->plane_state;

 if (VAR_2 == ((void*)0))
  return;

 VAR_2->status.is_flip_pending =
   VAR_1->plane_res.mi->funcs->mem_input_is_flip_pending(
     VAR_1->plane_res.mi);

 if (VAR_2->status.is_flip_pending && !VAR_2->visible)
  VAR_1->plane_res.mi->current_address = VAR_1->plane_res.mi->request_address;

 VAR_2->status.current_address = VAR_1->plane_res.mi->current_address;
 if (VAR_1->plane_res.mi->current_address.type == VAR_0 &&
   VAR_1->stream_res.tg->funcs->is_stereo_left_eye) {
  VAR_2->status.is_right_eye = !VAR_1->stream_res.tg->funcs->is_stereo_left_eye(VAR_1->stream_res.tg);

 }
}
