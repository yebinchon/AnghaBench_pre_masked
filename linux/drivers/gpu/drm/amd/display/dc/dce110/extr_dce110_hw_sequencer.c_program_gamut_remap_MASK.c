
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xfm_grph_csc_adjustment {int * temperature_matrix; int gamut_adjust_type; } ;
struct TYPE_9__ {TYPE_5__* xfm; } ;
struct pipe_ctx {TYPE_4__ plane_res; TYPE_2__* stream; } ;
typedef int adjust ;
struct TYPE_10__ {TYPE_3__* funcs; } ;
struct TYPE_8__ {int (* transform_set_gamut_remap ) (TYPE_5__*,struct xfm_grph_csc_adjustment*) ;} ;
struct TYPE_6__ {int enable_remap; int * matrix; } ;
struct TYPE_7__ {TYPE_1__ gamut_remap_matrix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xfm_grph_csc_adjustment*,int ,int) ;
 int FUNC_1 (TYPE_5__*,struct xfm_grph_csc_adjustment*) ;

__attribute__((used)) static void FUNC_2(struct pipe_ctx *VAR_3)
{
 int VAR_4 = 0;
 struct xfm_grph_csc_adjustment VAR_5;
 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.gamut_adjust_type = VAR_1;


 if (VAR_3->stream->gamut_remap_matrix.enable_remap == 1) {
  VAR_5.gamut_adjust_type = VAR_2;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   VAR_5.temperature_matrix[VAR_4] =
    VAR_3->stream->gamut_remap_matrix.matrix[VAR_4];
 }

 VAR_3->plane_res.xfm->funcs->transform_set_gamut_remap(VAR_3->plane_res.xfm, &VAR_5);
}
