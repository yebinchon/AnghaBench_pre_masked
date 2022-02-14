
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct pvrdma_cmd_create_srq_resp {size_t srqn; } ;
union pvrdma_cmd_resp {struct pvrdma_cmd_create_srq_resp create_srq_resp; } ;
struct TYPE_12__ {scalar_t__ max_wr; scalar_t__ max_sge; int srq_limit; } ;
struct TYPE_11__ {int cmd; } ;
struct pvrdma_cmd_create_srq {scalar_t__ nchunks; int pdir_dma; TYPE_2__ attrs; int pd_handle; int srq_type; TYPE_1__ hdr; } ;
union pvrdma_cmd_req {struct pvrdma_cmd_create_srq create_srq; } ;
typedef int ucmd ;
struct TYPE_18__ {int dir_dma; } ;
struct pvrdma_srq {scalar_t__ npages; size_t srq_handle; int umem; TYPE_8__ pdir; int ibsrq; int free; int refcnt; int lock; } ;
struct pvrdma_dev {int num_srqs; TYPE_6__* pdev; int srq_tbl_lock; TYPE_5__* dsr; struct pvrdma_srq** srq_tbl; } ;
struct pvrdma_create_srq_resp {size_t srqn; } ;
struct pvrdma_create_srq {int buf_size; int buf_addr; } ;
struct ib_udata {int dummy; } ;
struct TYPE_13__ {scalar_t__ max_wr; scalar_t__ max_sge; int srq_limit; } ;
struct ib_srq_init_attr {TYPE_3__ attr; int srq_type; } ;
struct ib_srq {int pd; int device; } ;
typedef int srq_resp ;
struct TYPE_17__ {int pd_handle; } ;
struct TYPE_16__ {int dev; } ;
struct TYPE_14__ {scalar_t__ max_srq_wr; scalar_t__ max_srq_sge; size_t max_srq; } ;
struct TYPE_15__ {TYPE_4__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *,int,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,...) ;
 scalar_t__ FUNC_6 (struct pvrdma_create_srq*,struct ib_udata*,int) ;
 scalar_t__ FUNC_7 (struct ib_udata*,struct pvrdma_create_srq_resp*,int) ;
 int FUNC_8 (struct ib_udata*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct pvrdma_cmd_create_srq*,int ,int) ;
 int FUNC_13 (struct pvrdma_dev*,union pvrdma_cmd_req*,union pvrdma_cmd_resp*,int ) ;
 int FUNC_14 (int *,struct ib_udata*) ;
 int FUNC_15 (struct pvrdma_dev*,TYPE_8__*) ;
 int FUNC_16 (struct pvrdma_dev*,TYPE_8__*,scalar_t__,int) ;
 int FUNC_17 (TYPE_8__*,int ,int ) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;
 struct pvrdma_dev* FUNC_22 (int ) ;
 TYPE_7__* FUNC_23 (int ) ;
 struct pvrdma_srq* FUNC_24 (struct ib_srq*) ;

int FUNC_25(struct ib_srq *VAR_8, struct ib_srq_init_attr *VAR_9,
        struct ib_udata *VAR_10)
{
 struct pvrdma_srq *VAR_11 = FUNC_24(VAR_8);
 struct pvrdma_dev *VAR_12 = FUNC_22(VAR_8->device);
 union pvrdma_cmd_req VAR_13;
 union pvrdma_cmd_resp VAR_14;
 struct pvrdma_cmd_create_srq *VAR_15 = &VAR_13.create_srq;
 struct pvrdma_cmd_create_srq_resp *VAR_16 = &VAR_14.create_srq_resp;
 struct pvrdma_create_srq_resp VAR_17 = {};
 struct pvrdma_create_srq VAR_18;
 unsigned long VAR_19;
 int VAR_20;

 if (!VAR_10) {

  FUNC_5(&VAR_12->pdev->dev,
    "no shared receive queue support for kernel client\n");
  return -VAR_3;
 }

 if (VAR_9->srq_type != VAR_4) {
  FUNC_5(&VAR_12->pdev->dev,
    "shared receive queue type %d not supported\n",
    VAR_9->srq_type);
  return -VAR_1;
 }

 if (VAR_9->attr.max_wr > VAR_12->dsr->caps.max_srq_wr ||
     VAR_9->attr.max_sge > VAR_12->dsr->caps.max_srq_sge) {
  FUNC_5(&VAR_12->pdev->dev,
    "shared receive queue size invalid\n");
  return -VAR_1;
 }

 if (!FUNC_2(&VAR_12->num_srqs, 1, VAR_12->dsr->caps.max_srq))
  return -VAR_2;

 FUNC_19(&VAR_11->lock);
 FUNC_18(&VAR_11->refcnt, 1);
 FUNC_11(&VAR_11->free);

 FUNC_4(&VAR_12->pdev->dev,
  "create shared receive queue from user space\n");

 if (FUNC_6(&VAR_18, VAR_10, sizeof(VAR_18))) {
  VAR_20 = -VAR_0;
  goto err_srq;
 }

 VAR_11->umem = FUNC_8(VAR_10, VAR_18.buf_addr, VAR_18.buf_size, 0, 0);
 if (FUNC_0(VAR_11->umem)) {
  VAR_20 = FUNC_1(VAR_11->umem);
  goto err_srq;
 }

 VAR_11->npages = FUNC_9(VAR_11->umem);

 if (VAR_11->npages < 0 || VAR_11->npages > VAR_7) {
  FUNC_5(&VAR_12->pdev->dev,
    "overflow pages in shared receive queue\n");
  VAR_20 = -VAR_1;
  goto err_umem;
 }

 VAR_20 = FUNC_16(VAR_12, &VAR_11->pdir, VAR_11->npages, 0);
 if (VAR_20) {
  FUNC_5(&VAR_12->pdev->dev,
    "could not allocate page directory\n");
  goto err_umem;
 }

 FUNC_17(&VAR_11->pdir, VAR_11->umem, 0);

 FUNC_12(VAR_15, 0, sizeof(*VAR_15));
 VAR_15->hdr.cmd = VAR_5;
 VAR_15->srq_type = VAR_9->srq_type;
 VAR_15->nchunks = VAR_11->npages;
 VAR_15->pd_handle = FUNC_23(VAR_8->pd)->pd_handle;
 VAR_15->attrs.max_wr = VAR_9->attr.max_wr;
 VAR_15->attrs.max_sge = VAR_9->attr.max_sge;
 VAR_15->attrs.srq_limit = VAR_9->attr.srq_limit;
 VAR_15->pdir_dma = VAR_11->pdir.dir_dma;

 VAR_20 = FUNC_13(VAR_12, &VAR_13, &VAR_14, VAR_6);
 if (VAR_20 < 0) {
  FUNC_5(&VAR_12->pdev->dev,
    "could not create shared receive queue, error: %d\n",
    VAR_20);
  goto err_page_dir;
 }

 VAR_11->srq_handle = VAR_16->srqn;
 VAR_17.srqn = VAR_16->srqn;
 FUNC_20(&VAR_12->srq_tbl_lock, VAR_19);
 VAR_12->srq_tbl[VAR_11->srq_handle % VAR_12->dsr->caps.max_srq] = VAR_11;
 FUNC_21(&VAR_12->srq_tbl_lock, VAR_19);


 if (FUNC_7(VAR_10, &VAR_17, sizeof(VAR_17))) {
  FUNC_5(&VAR_12->pdev->dev, "failed to copy back udata\n");
  FUNC_14(&VAR_11->ibsrq, VAR_10);
  return -VAR_1;
 }

 return 0;

err_page_dir:
 FUNC_15(VAR_12, &VAR_11->pdir);
err_umem:
 FUNC_10(VAR_11->umem);
err_srq:
 FUNC_3(&VAR_12->num_srqs);

 return VAR_20;
}
