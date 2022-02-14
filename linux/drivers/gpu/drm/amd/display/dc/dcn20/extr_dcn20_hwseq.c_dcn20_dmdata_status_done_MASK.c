
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct hubp* hubp; } ;
struct pipe_ctx {TYPE_1__ plane_res; } ;
struct hubp {TYPE_2__* funcs; } ;
struct TYPE_4__ {int (* dmdata_status_done ) (struct hubp*) ;} ;


 int FUNC_0 (struct hubp*) ;

bool FUNC_1(struct pipe_ctx *VAR_0)
{
 struct hubp *VAR_1 = VAR_0->plane_res.hubp;

 if (!VAR_1)
  return 0;
 return VAR_1->funcs->dmdata_status_done(VAR_1);
}
