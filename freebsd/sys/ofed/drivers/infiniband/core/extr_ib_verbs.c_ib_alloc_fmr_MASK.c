
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_pd {int usecnt; TYPE_1__* device; } ;
struct ib_fmr_attr {int dummy; } ;
struct ib_fmr {struct ib_pd* pd; TYPE_1__* device; } ;
struct TYPE_2__ {struct ib_fmr* (* alloc_fmr ) (struct ib_pd*,int,struct ib_fmr_attr*) ;} ;


 int VAR_0 ;
 struct ib_fmr* FUNC_0 (int ) ;
 int FUNC_1 (struct ib_fmr*) ;
 int FUNC_2 (int *) ;
 struct ib_fmr* FUNC_3 (struct ib_pd*,int,struct ib_fmr_attr*) ;

struct ib_fmr *FUNC_4(struct ib_pd *VAR_1,
       int VAR_2,
       struct ib_fmr_attr *VAR_3)
{
 struct ib_fmr *VAR_4;

 if (!VAR_1->device->alloc_fmr)
  return FUNC_0(-VAR_0);

 VAR_4 = VAR_1->device->alloc_fmr(VAR_1, VAR_2, VAR_3);
 if (!FUNC_1(VAR_4)) {
  VAR_4->device = VAR_1->device;
  VAR_4->pd = VAR_1;
  FUNC_2(&VAR_1->usecnt);
 }

 return VAR_4;
}
