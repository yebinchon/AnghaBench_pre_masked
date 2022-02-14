
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* hubp; } ;
struct pipe_ctx {TYPE_2__ plane_res; } ;
struct dc {int dummy; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_4__ {int (* hubp_enable_tripleBuffer ) (TYPE_3__*,int) ;} ;


 int FUNC_0 (TYPE_3__*,int) ;

void FUNC_1(
 const struct dc *VAR_0,
 struct pipe_ctx *VAR_1,
 bool VAR_2)
{
 if (VAR_1->plane_res.hubp && VAR_1->plane_res.hubp->funcs) {
  VAR_1->plane_res.hubp->funcs->hubp_enable_tripleBuffer(
   VAR_1->plane_res.hubp,
   VAR_2);
 }
}
