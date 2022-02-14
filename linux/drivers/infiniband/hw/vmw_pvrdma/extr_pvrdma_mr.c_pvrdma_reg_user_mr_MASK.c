
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct pvrdma_cmd_create_mr_resp {int rkey; int lkey; int mr_handle; } ;
union pvrdma_cmd_resp {struct pvrdma_cmd_create_mr_resp create_mr_resp; } ;
struct TYPE_12__ {int cmd; } ;
struct pvrdma_cmd_create_mr {int access_flags; int nchunks; int pdir_dma; int pd_handle; scalar_t__ length; scalar_t__ start; TYPE_3__ hdr; } ;
union pvrdma_cmd_req {struct pvrdma_cmd_create_mr create_mr; } ;
typedef scalar_t__ u64 ;
struct TYPE_16__ {int dir_dma; } ;
struct ib_mr {int rkey; int lkey; } ;
struct TYPE_14__ {int mr_handle; scalar_t__ size; scalar_t__ iova; } ;
struct pvrdma_user_mr {TYPE_7__ pdir; struct ib_mr ibmr; TYPE_5__ mmr; struct ib_umem* umem; } ;
struct pvrdma_dev {TYPE_4__* pdev; TYPE_2__* dsr; } ;
struct ib_umem {int dummy; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
struct TYPE_15__ {int pd_handle; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_10__ {scalar_t__ max_mr_size; } ;
struct TYPE_11__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (struct ib_umem*) ;
 struct ib_mr* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct ib_umem*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,char*,...) ;
 struct ib_umem* FUNC_4 (struct ib_udata*,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_5 (struct ib_umem*) ;
 int FUNC_6 (struct ib_umem*) ;
 int FUNC_7 (struct pvrdma_user_mr*) ;
 struct pvrdma_user_mr* FUNC_8 (int,int ) ;
 int FUNC_9 (struct pvrdma_cmd_create_mr*,int ,int) ;
 int FUNC_10 (struct pvrdma_dev*,union pvrdma_cmd_req*,union pvrdma_cmd_resp*,int ) ;
 int FUNC_11 (struct pvrdma_dev*,TYPE_7__*) ;
 int FUNC_12 (struct pvrdma_dev*,TYPE_7__*,int,int) ;
 int FUNC_13 (TYPE_7__*,struct ib_umem*,int ) ;
 struct pvrdma_dev* FUNC_14 (int ) ;
 TYPE_6__* FUNC_15 (struct ib_pd*) ;

struct ib_mr *FUNC_16(struct ib_pd *VAR_6, u64 VAR_7, u64 VAR_8,
     u64 VAR_9, int VAR_10,
     struct ib_udata *VAR_11)
{
 struct pvrdma_dev *VAR_12 = FUNC_14(VAR_6->device);
 struct pvrdma_user_mr *VAR_13 = ((void*)0);
 struct ib_umem *VAR_14;
 union pvrdma_cmd_req VAR_15;
 union pvrdma_cmd_resp VAR_16;
 struct pvrdma_cmd_create_mr *VAR_17 = &VAR_15.create_mr;
 struct pvrdma_cmd_create_mr_resp *VAR_18 = &VAR_16.create_mr_resp;
 int VAR_19, VAR_20;

 if (VAR_8 == 0 || VAR_8 > VAR_12->dsr->caps.max_mr_size) {
  FUNC_3(&VAR_12->pdev->dev, "invalid mem region length\n");
  return FUNC_1(-VAR_0);
 }

 VAR_14 = FUNC_4(VAR_11, VAR_7, VAR_8, VAR_10, 0);
 if (FUNC_2(VAR_14)) {
  FUNC_3(&VAR_12->pdev->dev,
    "could not get umem for mem region\n");
  return FUNC_0(VAR_14);
 }

 VAR_20 = FUNC_5(VAR_14);
 if (VAR_20 < 0 || VAR_20 > VAR_5) {
  FUNC_3(&VAR_12->pdev->dev, "overflow %d pages in mem region\n",
    VAR_20);
  VAR_19 = -VAR_0;
  goto err_umem;
 }

 VAR_13 = FUNC_8(sizeof(*VAR_13), VAR_2);
 if (!VAR_13) {
  VAR_19 = -VAR_1;
  goto err_umem;
 }

 VAR_13->mmr.iova = VAR_9;
 VAR_13->mmr.size = VAR_8;
 VAR_13->umem = VAR_14;

 VAR_19 = FUNC_12(VAR_12, &VAR_13->pdir, VAR_20, 0);
 if (VAR_19) {
  FUNC_3(&VAR_12->pdev->dev,
    "could not allocate page directory\n");
  goto err_umem;
 }

 VAR_19 = FUNC_13(&VAR_13->pdir, VAR_13->umem, 0);
 if (VAR_19)
  goto err_pdir;

 FUNC_9(VAR_17, 0, sizeof(*VAR_17));
 VAR_17->hdr.cmd = VAR_3;
 VAR_17->start = VAR_7;
 VAR_17->length = VAR_8;
 VAR_17->pd_handle = FUNC_15(VAR_6)->pd_handle;
 VAR_17->access_flags = VAR_10;
 VAR_17->nchunks = VAR_20;
 VAR_17->pdir_dma = VAR_13->pdir.dir_dma;

 VAR_19 = FUNC_10(VAR_12, &VAR_15, &VAR_16, VAR_4);
 if (VAR_19 < 0) {
  FUNC_3(&VAR_12->pdev->dev,
    "could not register mem region, error: %d\n", VAR_19);
  goto err_pdir;
 }

 VAR_13->mmr.mr_handle = VAR_18->mr_handle;
 VAR_13->ibmr.lkey = VAR_18->lkey;
 VAR_13->ibmr.rkey = VAR_18->rkey;

 return &VAR_13->ibmr;

err_pdir:
 FUNC_11(VAR_12, &VAR_13->pdir);
err_umem:
 FUNC_6(VAR_14);
 FUNC_7(VAR_13);

 return FUNC_1(VAR_19);
}
