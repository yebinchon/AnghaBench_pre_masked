
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qedr_pd {int pd_id; } ;
struct TYPE_4__ {int itid; int local_read; int local_write; int remote_read; int remote_write; int remote_atomic; int dma_mr; int key; int pd; int tid_type; } ;
struct ib_mr {int lkey; int rkey; } ;
struct qedr_mr {TYPE_2__ hw_mr; struct ib_mr ibmr; int type; } ;
struct qedr_dev {int rdma_ctx; TYPE_1__* ops; } ;
struct ib_pd {int device; } ;
struct TYPE_3__ {int (* rdma_alloc_tid ) (int ,int*) ;int (* rdma_register_tid ) (int ,TYPE_2__*) ;int (* rdma_free_tid ) (int ,int) ;} ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int) ;
 int FUNC_1 (struct qedr_dev*,char*,int) ;
 int VAR_0 ;
 struct ib_mr* FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct qedr_dev* FUNC_3 (int ) ;
 struct qedr_pd* FUNC_4 (struct ib_pd*) ;
 int FUNC_5 (struct qedr_mr*) ;
 struct qedr_mr* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int*) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (int ,int) ;

struct ib_mr *FUNC_10(struct ib_pd *VAR_9, int VAR_10)
{
 struct qedr_dev *VAR_11 = FUNC_3(VAR_9->device);
 struct qedr_pd *VAR_12 = FUNC_4(VAR_9);
 struct qedr_mr *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_6(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return FUNC_2(-VAR_0);

 VAR_13->type = VAR_6;

 VAR_14 = VAR_11->ops->rdma_alloc_tid(VAR_11->rdma_ctx, &VAR_13->hw_mr.itid);
 if (VAR_14) {
  FUNC_1(VAR_11, "roce alloc tid returned an error %d\n", VAR_14);
  goto err1;
 }


 VAR_13->hw_mr.tid_type = VAR_8;
 VAR_13->hw_mr.pd = VAR_12->pd_id;
 VAR_13->hw_mr.local_read = 1;
 VAR_13->hw_mr.local_write = (VAR_10 & VAR_2) ? 1 : 0;
 VAR_13->hw_mr.remote_read = (VAR_10 & VAR_4) ? 1 : 0;
 VAR_13->hw_mr.remote_write = (VAR_10 & VAR_5) ? 1 : 0;
 VAR_13->hw_mr.remote_atomic = (VAR_10 & VAR_3) ? 1 : 0;
 VAR_13->hw_mr.dma_mr = 1;

 VAR_14 = VAR_11->ops->rdma_register_tid(VAR_11->rdma_ctx, &VAR_13->hw_mr);
 if (VAR_14) {
  FUNC_1(VAR_11, "roce register tid returned an error %d\n", VAR_14);
  goto err2;
 }

 VAR_13->ibmr.lkey = VAR_13->hw_mr.itid << 8 | VAR_13->hw_mr.key;
 if (VAR_13->hw_mr.remote_write || VAR_13->hw_mr.remote_read ||
     VAR_13->hw_mr.remote_atomic)
  VAR_13->ibmr.rkey = VAR_13->hw_mr.itid << 8 | VAR_13->hw_mr.key;

 FUNC_0(VAR_11, VAR_7, "get dma mr: lkey = %x\n", VAR_13->ibmr.lkey);
 return &VAR_13->ibmr;

err2:
 VAR_11->ops->rdma_free_tid(VAR_11->rdma_ctx, VAR_13->hw_mr.itid);
err1:
 FUNC_5(VAR_13);
 return FUNC_2(VAR_14);
}
