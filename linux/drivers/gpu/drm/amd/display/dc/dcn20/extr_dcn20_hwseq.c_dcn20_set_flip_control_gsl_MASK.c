
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* hubp; } ;
struct pipe_ctx {TYPE_2__ plane_res; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_4__ {int (* hubp_set_flip_control_surface_gsl ) (TYPE_3__*,int) ;} ;


 int FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_1(
  struct pipe_ctx *VAR_0,
  bool VAR_1)
{
 if (VAR_0 && VAR_0->plane_res.hubp->funcs->hubp_set_flip_control_surface_gsl)
  VAR_0->plane_res.hubp->funcs->hubp_set_flip_control_surface_gsl(
    VAR_0->plane_res.hubp, VAR_1);

}
