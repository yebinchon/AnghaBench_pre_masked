
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_pd {TYPE_1__* device; int usecnt; int * __internal_mr; } ;
struct TYPE_2__ {int (* dereg_mr ) (int *) ;int (* dealloc_pd ) (struct ib_pd*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ib_pd*) ;

void FUNC_5(struct ib_pd *VAR_0)
{
 int VAR_1;

 if (VAR_0->__internal_mr) {
  VAR_1 = VAR_0->device->dereg_mr(VAR_0->__internal_mr);
  FUNC_0(VAR_1);
  VAR_0->__internal_mr = ((void*)0);
 }



 FUNC_0(FUNC_2(&VAR_0->usecnt));



 VAR_1 = VAR_0->device->dealloc_pd(VAR_0);
 FUNC_1(VAR_1, "Infiniband HW driver failed dealloc_pd");
}
