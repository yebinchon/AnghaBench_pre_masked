
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_cq {int poll_ctx; struct ib_cq* wc; struct ib_cq* dim; int work; TYPE_2__* device; int res; int iop; int usecnt; } ;
struct TYPE_3__ {int (* destroy_cq ) (struct ib_cq*,struct ib_udata*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;






 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ib_cq*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ib_cq*,struct ib_udata*) ;

void FUNC_7(struct ib_cq *VAR_0, struct ib_udata *VAR_1)
{
 if (FUNC_0(FUNC_1(&VAR_0->usecnt)))
  return;

 switch (VAR_0->poll_ctx) {
 case 131:
  break;
 case 130:
  FUNC_3(&VAR_0->iop);
  break;
 case 128:
 case 129:
  FUNC_2(&VAR_0->work);
  break;
 default:
  FUNC_0(1);
 }

 FUNC_5(&VAR_0->res);
 VAR_0->device->ops.destroy_cq(VAR_0, VAR_1);
 if (VAR_0->dim)
  FUNC_2(&VAR_0->dim->work);
 FUNC_4(VAR_0->dim);
 FUNC_4(VAR_0->wc);
 FUNC_4(VAR_0);
}
