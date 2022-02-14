
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u64 ;
struct qedr_pd {int pd_id; } ;
struct TYPE_11__ {int pbl_size; int two_layered; } ;
struct TYPE_12__ {TYPE_3__* pbl_table; TYPE_4__ pbl_info; } ;
struct TYPE_9__ {int itid; int key; int local_read; int local_write; int remote_read; int remote_write; int remote_atomic; int mw_bind; int zbva; int phy_mr; int dma_mr; void* vaddr; void* length; int fbo; int page_size_log; int pbl_page_size_log; int pbl_two_level; int pbl_ptr; int pd; int tid_type; } ;
struct ib_mr {int lkey; int rkey; } ;
struct qedr_mr {TYPE_7__ info; TYPE_2__ hw_mr; struct ib_mr ibmr; int umem; int type; } ;
struct qedr_dev {int rdma_ctx; TYPE_1__* ops; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
struct TYPE_10__ {int pa; } ;
struct TYPE_8__ {int (* rdma_alloc_tid ) (int ,int*) ;int (* rdma_register_tid ) (int ,TYPE_2__*) ;int (* rdma_free_tid ) (int ,int) ;} ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int,...) ;
 int FUNC_1 (struct qedr_dev*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_mr* FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct qedr_dev* FUNC_4 (int ) ;
 struct qedr_pd* FUNC_5 (struct ib_pd*) ;
 int FUNC_6 (struct ib_udata*,void*,void*,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct qedr_dev*,TYPE_7__*,int ,int) ;
 int FUNC_11 (struct qedr_mr*) ;
 struct qedr_mr* FUNC_12 (int,int ) ;
 int FUNC_13 (struct qedr_dev*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_14 (struct qedr_dev*,int ,TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_15 (int ,int*) ;
 int FUNC_16 (int ,TYPE_2__*) ;
 int FUNC_17 (int ,int) ;

struct ib_mr *FUNC_18(struct ib_pd *VAR_12, u64 VAR_13, u64 VAR_14,
          u64 VAR_15, int VAR_16, struct ib_udata *VAR_17)
{
 struct qedr_dev *VAR_18 = FUNC_4(VAR_12->device);
 struct qedr_mr *VAR_19;
 struct qedr_pd *VAR_20;
 int VAR_21 = -VAR_2;

 VAR_20 = FUNC_5(VAR_12);
 FUNC_0(VAR_18, VAR_10,
   "qedr_register user mr pd = %d start = %lld, len = %lld, usr_addr = %lld, acc = %d\n",
   VAR_20->pd_id, VAR_13, VAR_14, VAR_15, VAR_16);

 if (VAR_16 & VAR_7 && !(VAR_16 & VAR_4))
  return FUNC_2(-VAR_1);

 VAR_19 = FUNC_12(sizeof(*VAR_19), VAR_3);
 if (!VAR_19)
  return FUNC_2(VAR_21);

 VAR_19->type = VAR_9;

 VAR_19->umem = FUNC_6(VAR_17, VAR_13, VAR_14, VAR_16, 0);
 if (FUNC_3(VAR_19->umem)) {
  VAR_21 = -VAR_0;
  goto err0;
 }

 VAR_21 = FUNC_10(VAR_18, &VAR_19->info, FUNC_8(VAR_19->umem), 1);
 if (VAR_21)
  goto err1;

 FUNC_14(VAR_18, VAR_19->umem, VAR_19->info.pbl_table,
      &VAR_19->info.pbl_info, VAR_8);

 VAR_21 = VAR_18->ops->rdma_alloc_tid(VAR_18->rdma_ctx, &VAR_19->hw_mr.itid);
 if (VAR_21) {
  FUNC_1(VAR_18, "roce alloc tid returned an error %d\n", VAR_21);
  goto err1;
 }


 VAR_19->hw_mr.tid_type = VAR_11;
 VAR_19->hw_mr.key = 0;
 VAR_19->hw_mr.pd = VAR_20->pd_id;
 VAR_19->hw_mr.local_read = 1;
 VAR_19->hw_mr.local_write = (VAR_16 & VAR_4) ? 1 : 0;
 VAR_19->hw_mr.remote_read = (VAR_16 & VAR_6) ? 1 : 0;
 VAR_19->hw_mr.remote_write = (VAR_16 & VAR_7) ? 1 : 0;
 VAR_19->hw_mr.remote_atomic = (VAR_16 & VAR_5) ? 1 : 0;
 VAR_19->hw_mr.mw_bind = 0;
 VAR_19->hw_mr.pbl_ptr = VAR_19->info.pbl_table[0].pa;
 VAR_19->hw_mr.pbl_two_level = VAR_19->info.pbl_info.two_layered;
 VAR_19->hw_mr.pbl_page_size_log = FUNC_9(VAR_19->info.pbl_info.pbl_size);
 VAR_19->hw_mr.page_size_log = VAR_8;
 VAR_19->hw_mr.fbo = FUNC_7(VAR_19->umem);
 VAR_19->hw_mr.length = VAR_14;
 VAR_19->hw_mr.vaddr = VAR_15;
 VAR_19->hw_mr.zbva = 0;
 VAR_19->hw_mr.phy_mr = 0;
 VAR_19->hw_mr.dma_mr = 0;

 VAR_21 = VAR_18->ops->rdma_register_tid(VAR_18->rdma_ctx, &VAR_19->hw_mr);
 if (VAR_21) {
  FUNC_1(VAR_18, "roce register tid returned an error %d\n", VAR_21);
  goto err2;
 }

 VAR_19->ibmr.lkey = VAR_19->hw_mr.itid << 8 | VAR_19->hw_mr.key;
 if (VAR_19->hw_mr.remote_write || VAR_19->hw_mr.remote_read ||
     VAR_19->hw_mr.remote_atomic)
  VAR_19->ibmr.rkey = VAR_19->hw_mr.itid << 8 | VAR_19->hw_mr.key;

 FUNC_0(VAR_18, VAR_10, "register user mr lkey: %x\n",
   VAR_19->ibmr.lkey);
 return &VAR_19->ibmr;

err2:
 VAR_18->ops->rdma_free_tid(VAR_18->rdma_ctx, VAR_19->hw_mr.itid);
err1:
 FUNC_13(VAR_18, &VAR_19->info.pbl_info, VAR_19->info.pbl_table);
err0:
 FUNC_11(VAR_19);
 return FUNC_2(VAR_21);
}
