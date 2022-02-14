
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ib_udata {int dummy; } ;
struct ib_pd {int usecnt; TYPE_2__* device; } ;
struct TYPE_6__ {int type; } ;
struct ib_mr {int need_inval; int type; int * sig_attrs; TYPE_3__ res; int * uobject; int * dm; struct ib_pd* pd; TYPE_2__* device; } ;
typedef enum ib_mr_type { ____Placeholder_ib_mr_type } ib_mr_type ;
struct TYPE_4__ {struct ib_mr* (* alloc_mr ) (struct ib_pd*,int,int ,struct ib_udata*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct ib_mr*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 struct ib_mr* FUNC_5 (struct ib_pd*,int,int ,struct ib_udata*) ;

struct ib_mr *FUNC_6(struct ib_pd *VAR_4, enum ib_mr_type VAR_5,
          u32 VAR_6, struct ib_udata *VAR_7)
{
 struct ib_mr *VAR_8;

 if (!VAR_4->device->ops.alloc_mr)
  return FUNC_0(-VAR_1);

 if (FUNC_2(VAR_5 == VAR_2))
  return FUNC_0(-VAR_0);

 VAR_8 = VAR_4->device->ops.alloc_mr(VAR_4, VAR_5, VAR_6, VAR_7);
 if (!FUNC_1(VAR_8)) {
  VAR_8->device = VAR_4->device;
  VAR_8->pd = VAR_4;
  VAR_8->dm = ((void*)0);
  VAR_8->uobject = ((void*)0);
  FUNC_3(&VAR_4->usecnt);
  VAR_8->need_inval = 0;
  VAR_8->res.type = VAR_3;
  FUNC_4(&VAR_8->res);
  VAR_8->type = VAR_5;
  VAR_8->sig_attrs = ((void*)0);
 }

 return VAR_8;
}
