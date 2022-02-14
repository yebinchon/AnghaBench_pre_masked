
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_pd {int usecnt; } ;
struct ib_fmr {TYPE_1__* device; struct ib_pd* pd; } ;
struct TYPE_2__ {int (* dealloc_fmr ) (struct ib_fmr*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_fmr*) ;

int FUNC_2(struct ib_fmr *VAR_0)
{
 struct ib_pd *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->pd;
 VAR_2 = VAR_0->device->dealloc_fmr(VAR_0);
 if (!VAR_2)
  FUNC_0(&VAR_1->usecnt);

 return VAR_2;
}
