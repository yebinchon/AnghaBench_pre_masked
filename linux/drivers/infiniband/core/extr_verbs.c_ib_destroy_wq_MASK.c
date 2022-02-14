
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_wq {TYPE_2__* device; int usecnt; struct ib_pd* pd; struct ib_cq* cq; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int usecnt; } ;
struct ib_cq {int usecnt; } ;
struct TYPE_3__ {int (* destroy_wq ) (struct ib_wq*,struct ib_udata*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ib_wq*,struct ib_udata*) ;

int FUNC_3(struct ib_wq *VAR_1, struct ib_udata *VAR_2)
{
 struct ib_cq *VAR_3 = VAR_1->cq;
 struct ib_pd *VAR_4 = VAR_1->pd;

 if (FUNC_1(&VAR_1->usecnt))
  return -VAR_0;

 VAR_1->device->ops.destroy_wq(VAR_1, VAR_2);
 FUNC_0(&VAR_4->usecnt);
 FUNC_0(&VAR_3->usecnt);

 return 0;
}
