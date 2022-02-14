
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_cq {TYPE_2__* device; int res; int usecnt; } ;
struct TYPE_3__ {int (* destroy_cq ) (struct ib_cq*,struct ib_udata*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ib_cq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ib_cq*,struct ib_udata*) ;

int FUNC_4(struct ib_cq *VAR_1, struct ib_udata *VAR_2)
{
 if (FUNC_0(&VAR_1->usecnt))
  return -VAR_0;

 FUNC_2(&VAR_1->res);
 VAR_1->device->ops.destroy_cq(VAR_1, VAR_2);
 FUNC_1(VAR_1);
 return 0;
}
