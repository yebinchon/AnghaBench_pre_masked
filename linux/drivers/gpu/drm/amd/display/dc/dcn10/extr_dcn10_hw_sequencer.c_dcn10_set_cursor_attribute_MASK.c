
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


struct TYPE_10__ {TYPE_5__* dpp; TYPE_6__* hubp; } ;
struct pipe_ctx {TYPE_4__ plane_res; TYPE_1__* stream; } ;
struct dc_cursor_attributes {int dummy; } ;
struct TYPE_12__ {TYPE_2__* funcs; } ;
struct TYPE_11__ {TYPE_3__* funcs; } ;
struct TYPE_9__ {int (* set_cursor_attributes ) (TYPE_5__*,struct dc_cursor_attributes*) ;} ;
struct TYPE_8__ {int (* set_cursor_attributes ) (TYPE_6__*,struct dc_cursor_attributes*) ;} ;
struct TYPE_7__ {struct dc_cursor_attributes cursor_attributes; } ;


 int FUNC_0 (TYPE_6__*,struct dc_cursor_attributes*) ;
 int FUNC_1 (TYPE_5__*,struct dc_cursor_attributes*) ;

__attribute__((used)) static void FUNC_2(struct pipe_ctx *VAR_0)
{
 struct dc_cursor_attributes *VAR_1 = &VAR_0->stream->cursor_attributes;

 VAR_0->plane_res.hubp->funcs->set_cursor_attributes(
   VAR_0->plane_res.hubp, VAR_1);
 VAR_0->plane_res.dpp->funcs->set_cursor_attributes(
  VAR_0->plane_res.dpp, VAR_1);
}
