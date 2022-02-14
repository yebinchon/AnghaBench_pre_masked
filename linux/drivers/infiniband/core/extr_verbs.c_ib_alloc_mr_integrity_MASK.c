
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ib_sig_attrs {int dummy; } ;
struct ib_pd {int usecnt; TYPE_2__* device; } ;
struct TYPE_6__ {int type; } ;
struct ib_mr {int need_inval; struct ib_sig_attrs* sig_attrs; int type; TYPE_3__ res; int * uobject; int * dm; struct ib_pd* pd; TYPE_2__* device; } ;
struct TYPE_4__ {struct ib_mr* (* alloc_mr_integrity ) (struct ib_pd*,int ,int ) ;int map_mr_sg_pi; } ;
struct TYPE_5__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_mr* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ib_mr*) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ib_sig_attrs*) ;
 struct ib_sig_attrs* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 struct ib_mr* FUNC_6 (struct ib_pd*,int ,int ) ;

struct ib_mr *FUNC_7(struct ib_pd *VAR_6,
        u32 VAR_7,
        u32 VAR_8)
{
 struct ib_mr *VAR_9;
 struct ib_sig_attrs *VAR_10;

 if (!VAR_6->device->ops.alloc_mr_integrity ||
     !VAR_6->device->ops.map_mr_sg_pi)
  return FUNC_0(-VAR_2);

 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_4(sizeof(struct ib_sig_attrs), VAR_3);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_9 = VAR_6->device->ops.alloc_mr_integrity(VAR_6, VAR_7,
      VAR_8);
 if (FUNC_1(VAR_9)) {
  FUNC_3(VAR_10);
  return VAR_9;
 }

 VAR_9->device = VAR_6->device;
 VAR_9->pd = VAR_6;
 VAR_9->dm = ((void*)0);
 VAR_9->uobject = ((void*)0);
 FUNC_2(&VAR_6->usecnt);
 VAR_9->need_inval = 0;
 VAR_9->res.type = VAR_5;
 FUNC_5(&VAR_9->res);
 VAR_9->type = VAR_4;
 VAR_9->sig_attrs = VAR_10;

 return VAR_9;
}
