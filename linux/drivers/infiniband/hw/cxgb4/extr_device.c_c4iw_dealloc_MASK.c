
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uld_ctx {TYPE_1__* dev; } ;
struct TYPE_4__ {scalar_t__ oc_mw_kva; scalar_t__ bar2_kva; } ;
struct TYPE_3__ {int ibdev; TYPE_2__ rdev; int atids; int stids; int hwtids; int wait; int mrs; int qps; int cqs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct uld_ctx *VAR_0)
{
 FUNC_1(&VAR_0->dev->rdev);
 FUNC_0(!FUNC_5(&VAR_0->dev->cqs));
 FUNC_0(!FUNC_5(&VAR_0->dev->qps));
 FUNC_0(!FUNC_5(&VAR_0->dev->mrs));
 FUNC_4(VAR_0->dev->wait, FUNC_5(&VAR_0->dev->hwtids));
 FUNC_0(!FUNC_5(&VAR_0->dev->stids));
 FUNC_0(!FUNC_5(&VAR_0->dev->atids));
 if (VAR_0->dev->rdev.bar2_kva)
  FUNC_3(VAR_0->dev->rdev.bar2_kva);
 if (VAR_0->dev->rdev.oc_mw_kva)
  FUNC_3(VAR_0->dev->rdev.oc_mw_kva);
 FUNC_2(&VAR_0->dev->ibdev);
 VAR_0->dev = ((void*)0);
}
