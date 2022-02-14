
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u64 ;
struct ib_mw {int dummy; } ;
struct device {int dummy; } ;
struct bnxt_re_fence_data {struct ib_mw* mw; scalar_t__ va; struct bnxt_re_mr* mr; void* dma_addr; } ;
struct bnxt_re_pd {int ib_pd; int qplib_pd; struct bnxt_re_dev* rdev; struct bnxt_re_fence_data fence; } ;
struct TYPE_9__ {int rkey; int total_size; void* va; int lkey; int flags; int type; int * pd; } ;
struct TYPE_8__ {int rkey; int lkey; } ;
struct bnxt_re_mr {TYPE_4__ qplib_mr; TYPE_3__ ib_mr; struct bnxt_re_dev* rdev; } ;
struct bnxt_re_dev {int qplib_res; TYPE_2__* en_dev; } ;
typedef void* dma_addr_t ;
struct TYPE_7__ {TYPE_1__* pdev; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct ib_mw*) ;
 int VAR_10 ;
 int FUNC_1 (struct ib_mw*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (int *,TYPE_4__*,void**,int ,int,int ) ;
 struct ib_mw* FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (struct bnxt_re_pd*) ;
 int FUNC_7 (struct bnxt_re_pd*) ;
 int FUNC_8 (int ,char*,...) ;
 void* FUNC_9 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_10 (struct device*,void*) ;
 struct bnxt_re_mr* FUNC_11 (int,int ) ;
 int FUNC_12 (struct bnxt_re_dev*) ;

__attribute__((used)) static int FUNC_13(struct bnxt_re_pd *VAR_11)
{
 int VAR_12 = VAR_7 | VAR_8;
 struct bnxt_re_fence_data *VAR_13 = &VAR_11->fence;
 struct bnxt_re_dev *VAR_14 = VAR_11->rdev;
 struct device *VAR_15 = &VAR_14->en_dev->pdev->dev;
 struct bnxt_re_mr *VAR_16 = ((void*)0);
 dma_addr_t VAR_17 = 0;
 struct ib_mw *VAR_18;
 u64 VAR_19;
 int VAR_20;

 VAR_17 = FUNC_9(VAR_15, VAR_13->va, VAR_0,
      VAR_3);
 VAR_20 = FUNC_10(VAR_15, VAR_17);
 if (VAR_20) {
  FUNC_8(FUNC_12(VAR_14), "Failed to dma-map fence-MR-mem\n");
  VAR_20 = -VAR_4;
  VAR_13->dma_addr = 0;
  goto fail;
 }
 VAR_13->dma_addr = VAR_17;


 VAR_16 = FUNC_11(sizeof(*VAR_16), VAR_6);
 if (!VAR_16) {
  VAR_20 = -VAR_5;
  goto fail;
 }
 VAR_13->mr = VAR_16;
 VAR_16->rdev = VAR_14;
 VAR_16->qplib_mr.pd = &VAR_11->qplib_pd;
 VAR_16->qplib_mr.type = VAR_2;
 VAR_16->qplib_mr.flags = FUNC_2(VAR_12);
 VAR_20 = FUNC_3(&VAR_14->qplib_res, &VAR_16->qplib_mr);
 if (VAR_20) {
  FUNC_8(FUNC_12(VAR_14), "Failed to alloc fence-HW-MR\n");
  goto fail;
 }


 VAR_16->ib_mr.lkey = VAR_16->qplib_mr.lkey;
 VAR_16->qplib_mr.va = (u64)(unsigned long)VAR_13->va;
 VAR_16->qplib_mr.total_size = VAR_0;
 VAR_19 = VAR_17;
 VAR_20 = FUNC_4(&VAR_14->qplib_res, &VAR_16->qplib_mr, &VAR_19,
          VAR_1, 0, VAR_10);
 if (VAR_20) {
  FUNC_8(FUNC_12(VAR_14), "Failed to register fence-MR\n");
  goto fail;
 }
 VAR_16->ib_mr.rkey = VAR_16->qplib_mr.rkey;


 VAR_18 = FUNC_5(&VAR_11->ib_pd, VAR_9, ((void*)0));
 if (FUNC_0(VAR_18)) {
  FUNC_8(FUNC_12(VAR_14),
   "Failed to create fence-MW for PD: %p\n", VAR_11);
  VAR_20 = FUNC_1(VAR_18);
  goto fail;
 }
 VAR_13->mw = VAR_18;

 FUNC_6(VAR_11);
 return 0;

fail:
 FUNC_7(VAR_11);
 return VAR_20;
}
