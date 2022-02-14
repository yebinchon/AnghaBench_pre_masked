
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ib_pd {int usecnt; TYPE_1__* device; } ;
struct ib_mr {int need_inval; int * uobject; struct ib_pd* pd; TYPE_1__* device; } ;
typedef enum ib_mr_type { ____Placeholder_ib_mr_type } ib_mr_type ;
struct TYPE_2__ {struct ib_mr* (* alloc_mr ) (struct ib_pd*,int,int ) ;} ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int ) ;
 int FUNC_1 (struct ib_mr*) ;
 int FUNC_2 (int *) ;
 struct ib_mr* FUNC_3 (struct ib_pd*,int,int ) ;

struct ib_mr *FUNC_4(struct ib_pd *VAR_1,
     enum ib_mr_type VAR_2,
     u32 VAR_3)
{
 struct ib_mr *VAR_4;

 if (!VAR_1->device->alloc_mr)
  return FUNC_0(-VAR_0);

 VAR_4 = VAR_1->device->alloc_mr(VAR_1, VAR_2, VAR_3);
 if (!FUNC_1(VAR_4)) {
  VAR_4->device = VAR_1->device;
  VAR_4->pd = VAR_1;
  VAR_4->uobject = ((void*)0);
  FUNC_2(&VAR_1->usecnt);
  VAR_4->need_inval = 0;
 }

 return VAR_4;
}
