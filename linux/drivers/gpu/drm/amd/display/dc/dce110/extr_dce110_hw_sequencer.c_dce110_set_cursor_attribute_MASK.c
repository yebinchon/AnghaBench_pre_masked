
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


struct TYPE_13__ {TYPE_6__* xfm; TYPE_7__* mi; TYPE_8__* ipp; } ;
struct pipe_ctx {TYPE_5__ plane_res; TYPE_1__* stream; } ;
struct dc_cursor_attributes {int dummy; } ;
struct TYPE_16__ {TYPE_2__* funcs; } ;
struct TYPE_15__ {TYPE_3__* funcs; } ;
struct TYPE_14__ {TYPE_4__* funcs; } ;
struct TYPE_12__ {int (* set_cursor_attributes ) (TYPE_6__*,struct dc_cursor_attributes*) ;} ;
struct TYPE_11__ {int (* set_cursor_attributes ) (TYPE_7__*,struct dc_cursor_attributes*) ;} ;
struct TYPE_10__ {int (* ipp_cursor_set_attributes ) (TYPE_8__*,struct dc_cursor_attributes*) ;} ;
struct TYPE_9__ {struct dc_cursor_attributes cursor_attributes; } ;


 int FUNC_0 (TYPE_8__*,struct dc_cursor_attributes*) ;
 int FUNC_1 (TYPE_7__*,struct dc_cursor_attributes*) ;
 int FUNC_2 (TYPE_6__*,struct dc_cursor_attributes*) ;

void FUNC_3(struct pipe_ctx *VAR_0)
{
 struct dc_cursor_attributes *VAR_1 = &VAR_0->stream->cursor_attributes;

 if (VAR_0->plane_res.ipp &&
     VAR_0->plane_res.ipp->funcs->ipp_cursor_set_attributes)
  VAR_0->plane_res.ipp->funcs->ipp_cursor_set_attributes(
    VAR_0->plane_res.ipp, VAR_1);

 if (VAR_0->plane_res.mi &&
     VAR_0->plane_res.mi->funcs->set_cursor_attributes)
  VAR_0->plane_res.mi->funcs->set_cursor_attributes(
    VAR_0->plane_res.mi, VAR_1);

 if (VAR_0->plane_res.xfm &&
     VAR_0->plane_res.xfm->funcs->set_cursor_attributes)
  VAR_0->plane_res.xfm->funcs->set_cursor_attributes(
    VAR_0->plane_res.xfm, VAR_1);
}
