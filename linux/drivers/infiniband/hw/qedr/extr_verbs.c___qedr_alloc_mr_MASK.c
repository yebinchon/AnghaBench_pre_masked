
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qedr_pd {int pd_id; } ;
struct TYPE_9__ {int itid; int key; int local_read; int mw_bind; int zbva; int phy_mr; int dma_mr; scalar_t__ vaddr; scalar_t__ length; scalar_t__ fbo; int pbl_page_size_log; int pbl_two_level; scalar_t__ pbl_ptr; scalar_t__ remote_atomic; scalar_t__ remote_write; scalar_t__ remote_read; scalar_t__ local_write; int pd; int tid_type; } ;
struct TYPE_7__ {int lkey; int rkey; } ;
struct TYPE_6__ {int pbl_size; int two_layered; } ;
struct TYPE_10__ {TYPE_1__ pbl_info; } ;
struct qedr_mr {TYPE_4__ hw_mr; TYPE_2__ ibmr; TYPE_5__ info; int type; struct qedr_dev* dev; } ;
struct qedr_dev {int rdma_ctx; TYPE_3__* ops; } ;
struct ib_pd {int device; } ;
struct TYPE_8__ {int (* rdma_alloc_tid ) (int ,int*) ;int (* rdma_register_tid ) (int ,TYPE_4__*) ;int (* rdma_free_tid ) (int ,int) ;} ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int,...) ;
 int FUNC_1 (struct qedr_dev*,char*,int) ;
 int VAR_0 ;
 struct qedr_mr* FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct qedr_dev* FUNC_3 (int ) ;
 struct qedr_pd* FUNC_4 (struct ib_pd*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qedr_dev*,TYPE_5__*,int,int) ;
 int FUNC_7 (struct qedr_mr*) ;
 struct qedr_mr* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int*) ;
 int FUNC_10 (int ,TYPE_4__*) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static struct qedr_mr *FUNC_12(struct ib_pd *VAR_5,
           int VAR_6)
{
 struct qedr_pd *VAR_7 = FUNC_4(VAR_5);
 struct qedr_dev *VAR_8 = FUNC_3(VAR_5->device);
 struct qedr_mr *VAR_9;
 int VAR_10 = -VAR_0;

 FUNC_0(VAR_8, VAR_3,
   "qedr_alloc_frmr pd = %d max_page_list_len= %d\n", VAR_7->pd_id,
   VAR_6);

 VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_2(VAR_10);

 VAR_9->dev = VAR_8;
 VAR_9->type = VAR_2;

 VAR_10 = FUNC_6(VAR_8, &VAR_9->info, VAR_6, 1);
 if (VAR_10)
  goto err0;

 VAR_10 = VAR_8->ops->rdma_alloc_tid(VAR_8->rdma_ctx, &VAR_9->hw_mr.itid);
 if (VAR_10) {
  FUNC_1(VAR_8, "roce alloc tid returned an error %d\n", VAR_10);
  goto err0;
 }


 VAR_9->hw_mr.tid_type = VAR_4;
 VAR_9->hw_mr.key = 0;
 VAR_9->hw_mr.pd = VAR_7->pd_id;
 VAR_9->hw_mr.local_read = 1;
 VAR_9->hw_mr.local_write = 0;
 VAR_9->hw_mr.remote_read = 0;
 VAR_9->hw_mr.remote_write = 0;
 VAR_9->hw_mr.remote_atomic = 0;
 VAR_9->hw_mr.mw_bind = 0;
 VAR_9->hw_mr.pbl_ptr = 0;
 VAR_9->hw_mr.pbl_two_level = VAR_9->info.pbl_info.two_layered;
 VAR_9->hw_mr.pbl_page_size_log = FUNC_5(VAR_9->info.pbl_info.pbl_size);
 VAR_9->hw_mr.fbo = 0;
 VAR_9->hw_mr.length = 0;
 VAR_9->hw_mr.vaddr = 0;
 VAR_9->hw_mr.zbva = 0;
 VAR_9->hw_mr.phy_mr = 1;
 VAR_9->hw_mr.dma_mr = 0;

 VAR_10 = VAR_8->ops->rdma_register_tid(VAR_8->rdma_ctx, &VAR_9->hw_mr);
 if (VAR_10) {
  FUNC_1(VAR_8, "roce register tid returned an error %d\n", VAR_10);
  goto err1;
 }

 VAR_9->ibmr.lkey = VAR_9->hw_mr.itid << 8 | VAR_9->hw_mr.key;
 VAR_9->ibmr.rkey = VAR_9->ibmr.lkey;

 FUNC_0(VAR_8, VAR_3, "alloc frmr: %x\n", VAR_9->ibmr.lkey);
 return VAR_9;

err1:
 VAR_8->ops->rdma_free_tid(VAR_8->rdma_ctx, VAR_9->hw_mr.itid);
err0:
 FUNC_7(VAR_9);
 return FUNC_2(VAR_10);
}
