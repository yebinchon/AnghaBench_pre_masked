
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


struct TYPE_12__ {int depth; } ;
struct TYPE_13__ {TYPE_4__ lb_params; int format; } ;
struct TYPE_15__ {TYPE_8__* xfm; TYPE_5__ scl_data; } ;
struct pipe_ctx {TYPE_7__ plane_res; TYPE_3__* stream; TYPE_1__* plane_state; } ;
struct default_adjustment {int force_hw_default; int lb_color_depth; int color_depth; int surface_pixel_format; int csc_adjust_type; int out_color_space; int in_color_space; int member_0; } ;
struct TYPE_16__ {TYPE_6__* funcs; } ;
struct TYPE_14__ {int (* opp_set_csc_default ) (TYPE_8__*,struct default_adjustment*) ;} ;
struct TYPE_10__ {int display_color_depth; } ;
struct TYPE_11__ {TYPE_2__ timing; int output_color_space; } ;
struct TYPE_9__ {int color_space; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*,struct default_adjustment*) ;

__attribute__((used)) static void FUNC_1(struct pipe_ctx *VAR_1)
{
 struct default_adjustment VAR_2 = { 0 };

 VAR_2.force_hw_default = 0;
 VAR_2.in_color_space = VAR_1->plane_state->color_space;
 VAR_2.out_color_space = VAR_1->stream->output_color_space;
 VAR_2.csc_adjust_type = VAR_0;
 VAR_2.surface_pixel_format = VAR_1->plane_res.scl_data.format;


 VAR_2.color_depth =
  VAR_1->stream->timing.display_color_depth;


 VAR_2.lb_color_depth = VAR_1->plane_res.scl_data.lb_params.depth;

 VAR_1->plane_res.xfm->funcs->opp_set_csc_default(
     VAR_1->plane_res.xfm, &VAR_2);
}
