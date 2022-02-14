
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hisi_zip_qp_ctx {int sgl_pool; TYPE_3__* qp; } ;
struct hisi_zip_ctx {struct hisi_zip_qp_ctx* qp_ctx; } ;
struct TYPE_6__ {TYPE_2__* qm; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct hisi_zip_ctx *VAR_4)
{
 struct hisi_zip_qp_ctx *VAR_5;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = &VAR_4->qp_ctx[VAR_6];
  VAR_7 = FUNC_0(&VAR_5->qp->qm->pdev->dev,
            &VAR_5->sgl_pool,
            VAR_2 << 1);
  if (VAR_7 < 0) {
   if (VAR_6 == 1)
    goto err_free_sgl_pool0;
   return -VAR_0;
  }
 }

 return 0;

err_free_sgl_pool0:
 FUNC_1(&VAR_4->qp_ctx[VAR_3].qp->qm->pdev->dev,
          &VAR_4->qp_ctx[VAR_3].sgl_pool);
 return -VAR_0;
}
