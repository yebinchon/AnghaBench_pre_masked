
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t3_cqe {int dummy; } ;
struct t3_cq {unsigned long size_log2; int cqid; int queue; int sw_queue; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct cxio_rdev {int rscp; TYPE_2__ rnic_info; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct cxio_rdev*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long,int ,int ) ;
 int FUNC_3 (struct t3_cq*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;

void FUNC_5(struct cxio_rdev *VAR_1, struct t3_cq *VAR_2)
{
 FUNC_0(VAR_1, VAR_2->cqid);
 FUNC_4(VAR_2->sw_queue);
 FUNC_2(&(VAR_1->rnic_info.pdev->dev),
     (1UL << (VAR_2->size_log2))
     * sizeof(struct t3_cqe) + 1, VAR_2->queue,
     FUNC_3(VAR_2, VAR_0));
 FUNC_1(VAR_1->rscp, VAR_2->cqid);
}
