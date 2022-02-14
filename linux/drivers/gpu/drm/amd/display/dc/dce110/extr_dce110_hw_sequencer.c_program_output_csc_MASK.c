
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {TYPE_5__* xfm; } ;
struct pipe_ctx {TYPE_2__ plane_res; TYPE_3__* stream; } ;
struct out_csc_color_matrix {int color_space; int * regval; } ;
struct dc {int dummy; } ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;
struct TYPE_10__ {TYPE_1__* funcs; } ;
struct TYPE_9__ {int enable_adjustment; int * matrix; } ;
struct TYPE_8__ {int output_color_space; TYPE_4__ csc_color_matrix; } ;
struct TYPE_6__ {int (* opp_set_csc_adjustment ) (TYPE_5__*,struct out_csc_color_matrix*) ;} ;


 int FUNC_0 (TYPE_5__*,struct out_csc_color_matrix*) ;

__attribute__((used)) static void FUNC_1(struct dc *VAR_0,
  struct pipe_ctx *VAR_1,
  enum dc_color_space VAR_2,
  uint16_t *VAR_3,
  int VAR_4)
{
 int VAR_5;
 struct out_csc_color_matrix VAR_6;

 if (VAR_1->stream->csc_color_matrix.enable_adjustment == 1) {
  enum dc_color_space VAR_7 = VAR_1->stream->output_color_space;

  for (VAR_5 = 0; VAR_5 < 12; VAR_5++)
   VAR_6.regval[VAR_5] = VAR_1->stream->csc_color_matrix.matrix[VAR_5];

  VAR_6.color_space = VAR_7;

  VAR_1->plane_res.xfm->funcs->opp_set_csc_adjustment(
    VAR_1->plane_res.xfm, &VAR_6);
 }
}
