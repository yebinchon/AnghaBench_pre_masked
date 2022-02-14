
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct TYPE_10__ {TYPE_2__* xrcd; } ;
struct TYPE_12__ {TYPE_4__* cq; TYPE_3__ xrc; } ;
struct ib_srq {scalar_t__ srq_type; TYPE_5__ ext; TYPE_1__* pd; TYPE_7__* device; int usecnt; } ;
struct TYPE_13__ {int (* destroy_srq ) (struct ib_srq*,struct ib_udata*) ;} ;
struct TYPE_14__ {TYPE_6__ ops; } ;
struct TYPE_11__ {int usecnt; } ;
struct TYPE_9__ {int usecnt; } ;
struct TYPE_8__ {int usecnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ib_srq*) ;
 int FUNC_4 (struct ib_srq*,struct ib_udata*) ;

int FUNC_5(struct ib_srq *VAR_2, struct ib_udata *VAR_3)
{
 if (FUNC_1(&VAR_2->usecnt))
  return -VAR_0;

 VAR_2->device->ops.destroy_srq(VAR_2, VAR_3);

 FUNC_0(&VAR_2->pd->usecnt);
 if (VAR_2->srq_type == VAR_1)
  FUNC_0(&VAR_2->ext.xrc.xrcd->usecnt);
 if (FUNC_2(VAR_2->srq_type))
  FUNC_0(&VAR_2->ext.cq->usecnt);
 FUNC_3(VAR_2);

 return 0;
}
