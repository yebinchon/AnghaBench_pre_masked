
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hisi_zip_ctx {TYPE_4__* qp_ctx; } ;
struct TYPE_8__ {int sgl_pool; TYPE_3__* qp; } ;
struct TYPE_7__ {TYPE_2__* qm; } ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct hisi_zip_ctx *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&VAR_1->qp_ctx[VAR_2].qp->qm->pdev->dev,
           &VAR_1->qp_ctx[VAR_2].sgl_pool);
}
