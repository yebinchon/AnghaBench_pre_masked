
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct bnxt_re_fence_data {scalar_t__ dma_addr; struct bnxt_re_mr* mr; int * mw; } ;
struct bnxt_re_pd {struct bnxt_re_dev* rdev; struct bnxt_re_fence_data fence; } ;
struct TYPE_6__ {scalar_t__ lkey; scalar_t__ rkey; } ;
struct bnxt_re_mr {int qplib_mr; TYPE_3__ ib_mr; } ;
struct bnxt_re_dev {int qplib_res; TYPE_2__* en_dev; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_4 (struct bnxt_re_mr*) ;

__attribute__((used)) static void FUNC_5(struct bnxt_re_pd *VAR_2)
{
 struct bnxt_re_fence_data *VAR_3 = &VAR_2->fence;
 struct bnxt_re_dev *VAR_4 = VAR_2->rdev;
 struct device *VAR_5 = &VAR_4->en_dev->pdev->dev;
 struct bnxt_re_mr *VAR_6 = VAR_3->mr;

 if (VAR_3->mw) {
  FUNC_2(VAR_3->mw);
  VAR_3->mw = ((void*)0);
 }
 if (VAR_6) {
  if (VAR_6->ib_mr.rkey)
   FUNC_0(&VAR_4->qplib_res, &VAR_6->qplib_mr,
          1);
  if (VAR_6->ib_mr.lkey)
   FUNC_1(&VAR_4->qplib_res, &VAR_6->qplib_mr);
  FUNC_4(VAR_6);
  VAR_3->mr = ((void*)0);
 }
 if (VAR_3->dma_addr) {
  FUNC_3(VAR_5, VAR_3->dma_addr, VAR_0,
     VAR_1);
  VAR_3->dma_addr = 0;
 }
}
