
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {struct hubp* hubp; } ;
struct pipe_ctx {TYPE_5__ plane_res; } ;
struct hubp {TYPE_6__* funcs; } ;
struct TYPE_7__ {int recovery_enabled; } ;
struct dc {TYPE_4__* current_state; TYPE_2__* res_pool; TYPE_1__ debug; } ;
struct TYPE_12__ {scalar_t__ (* hubp_get_underflow_status ) (struct hubp*) ;int (* set_hubp_blank_en ) (struct hubp*,int) ;int (* hubp_disable_control ) (struct hubp*,int) ;} ;
struct TYPE_9__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_10__ {TYPE_3__ res_ctx; } ;
struct TYPE_8__ {unsigned int pipe_count; int hubbub; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct hubp*) ;
 int FUNC_2 (struct hubp*,int) ;
 int FUNC_3 (struct hubp*,int) ;
 int FUNC_4 (struct hubp*,int) ;
 int FUNC_5 (struct hubp*,int) ;

__attribute__((used)) static bool FUNC_6(struct dc *VAR_0)
{
 struct hubp *VAR_1 ;
 unsigned int VAR_2;
 bool VAR_3 = 1;

 if (!VAR_0->debug.recovery_enabled)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->res_pool->pipe_count; VAR_2++) {
  struct pipe_ctx *VAR_4 =
   &VAR_0->current_state->res_ctx.pipe_ctx[VAR_2];
  if (VAR_4 != ((void*)0)) {
   VAR_1 = VAR_4->plane_res.hubp;
   if (VAR_1 != ((void*)0) && VAR_1->funcs->hubp_get_underflow_status) {
    if (VAR_1->funcs->hubp_get_underflow_status(VAR_1) != 0) {

     VAR_3 = 1;
    }
   }
  }
 }
 if (!VAR_3)
  return 0;
 for (VAR_2 = 0; VAR_2 < VAR_0->res_pool->pipe_count; VAR_2++) {
  struct pipe_ctx *VAR_5 =
   &VAR_0->current_state->res_ctx.pipe_ctx[VAR_2];
  if (VAR_5 != ((void*)0)) {
   VAR_1 = VAR_5->plane_res.hubp;

   if (VAR_1 != ((void*)0) && VAR_1->funcs->set_hubp_blank_en)
    VAR_1->funcs->set_hubp_blank_en(VAR_1, 1);
  }
 }

 FUNC_0(VAR_0->res_pool->hubbub, 1);

 for (VAR_2 = 0; VAR_2 < VAR_0->res_pool->pipe_count; VAR_2++) {
  struct pipe_ctx *VAR_6 =
   &VAR_0->current_state->res_ctx.pipe_ctx[VAR_2];
  if (VAR_6 != ((void*)0)) {
   VAR_1 = VAR_6->plane_res.hubp;

   if (VAR_1 != ((void*)0) && VAR_1->funcs->hubp_disable_control)
    VAR_1->funcs->hubp_disable_control(VAR_1, 1);
  }
 }
 for (VAR_2 = 0; VAR_2 < VAR_0->res_pool->pipe_count; VAR_2++) {
  struct pipe_ctx *VAR_7 =
   &VAR_0->current_state->res_ctx.pipe_ctx[VAR_2];
  if (VAR_7 != ((void*)0)) {
   VAR_1 = VAR_7->plane_res.hubp;

   if (VAR_1 != ((void*)0) && VAR_1->funcs->hubp_disable_control)
    VAR_1->funcs->hubp_disable_control(VAR_1, 1);
  }
 }

 FUNC_0(VAR_0->res_pool->hubbub, 0);
 for (VAR_2 = 0; VAR_2 < VAR_0->res_pool->pipe_count; VAR_2++) {
  struct pipe_ctx *VAR_8 =
   &VAR_0->current_state->res_ctx.pipe_ctx[VAR_2];
  if (VAR_8 != ((void*)0)) {
   VAR_1 = VAR_8->plane_res.hubp;

   if (VAR_1 != ((void*)0) && VAR_1->funcs->set_hubp_blank_en)
    VAR_1->funcs->set_hubp_blank_en(VAR_1, 1);
  }
 }
 return 1;

}
