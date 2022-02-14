
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_pd {TYPE_2__* device; int res; int usecnt; int * __internal_mr; } ;
struct TYPE_3__ {int (* dereg_mr ) (int *,int *) ;int (* dealloc_pd ) (struct ib_pd*,struct ib_udata*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ib_pd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct ib_pd*,struct ib_udata*) ;

void FUNC_6(struct ib_pd *VAR_0, struct ib_udata *VAR_1)
{
 int VAR_2;

 if (VAR_0->__internal_mr) {
  VAR_2 = VAR_0->device->ops.dereg_mr(VAR_0->__internal_mr, ((void*)0));
  FUNC_0(VAR_2);
  VAR_0->__internal_mr = ((void*)0);
 }



 FUNC_0(FUNC_1(&VAR_0->usecnt));

 FUNC_3(&VAR_0->res);
 VAR_0->device->ops.dealloc_pd(VAR_0, VAR_1);
 FUNC_2(VAR_0);
}
