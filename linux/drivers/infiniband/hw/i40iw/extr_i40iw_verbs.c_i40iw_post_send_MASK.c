
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_23__ ;
typedef struct TYPE_37__ TYPE_22__ ;
typedef struct TYPE_36__ TYPE_21__ ;
typedef struct TYPE_35__ TYPE_20__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_19__ ;
typedef struct TYPE_32__ TYPE_18__ ;
typedef struct TYPE_31__ TYPE_17__ ;
typedef struct TYPE_30__ TYPE_16__ ;
typedef struct TYPE_29__ TYPE_15__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef void* u64 ;
struct TYPE_24__ {int invalidate_rkey; } ;
struct ib_send_wr {int send_flags; int opcode; struct ib_send_wr* next; void* wr_id; TYPE_10__ ex; TYPE_17__* sg_list; int num_sge; } ;
struct ib_qp {int dummy; } ;
struct i40iw_sge {int dummy; } ;
struct i40iw_sc_dev {TYPE_15__* iw_priv_qp_ops; } ;
struct TYPE_30__ {int (* iw_inline_send ) (struct i40iw_qp_uk*,struct i40iw_post_sq_info*,int ,int) ;int (* iw_send ) (struct i40iw_qp_uk*,struct i40iw_post_sq_info*,int ,int) ;int (* iw_inline_rdma_write ) (struct i40iw_qp_uk*,struct i40iw_post_sq_info*,int) ;int (* iw_rdma_write ) (struct i40iw_qp_uk*,struct i40iw_post_sq_info*,int) ;int (* iw_rdma_read ) (struct i40iw_qp_uk*,struct i40iw_post_sq_info*,int,int) ;int (* iw_stag_local_invalidate ) (struct i40iw_qp_uk*,struct i40iw_post_sq_info*,int) ;int (* iw_qp_post_wr ) (struct i40iw_qp_uk*) ;} ;
struct i40iw_qp_uk {TYPE_16__ ops; } ;
struct TYPE_36__ {struct i40iw_qp_uk qp_uk; } ;
struct i40iw_qp {int lock; TYPE_21__ sc_qp; TYPE_12__* iwdev; scalar_t__ sig_all; scalar_t__ flush_issued; } ;
struct TYPE_46__ {int target_stag; } ;
struct TYPE_44__ {int len; int stag; scalar_t__ tag_off; } ;
struct TYPE_43__ {int stag; int tag_off; } ;
struct TYPE_45__ {TYPE_7__ lo_addr; TYPE_6__ rem_addr; } ;
struct TYPE_41__ {int stag; int tag_off; } ;
struct TYPE_42__ {TYPE_4__ rem_addr; int num_lo_sges; void* lo_sg_list; } ;
struct TYPE_39__ {int stag; int tag_off; } ;
struct TYPE_40__ {TYPE_2__ rem_addr; int len; void* data; } ;
struct TYPE_34__ {struct i40iw_sge* sg_list; int num_sges; } ;
struct TYPE_33__ {int len; void* data; } ;
struct TYPE_32__ {TYPE_9__ inv_local_stag; TYPE_8__ rdma_read; TYPE_5__ rdma_write; TYPE_3__ inline_rdma_write; TYPE_1__ send; TYPE_19__ inline_send; } ;
struct i40iw_post_sq_info {int signaled; int read_fence; int stag_key; int stag_idx; int local_fence; int chunk_size; int first_pm_pbl_index; void* reg_addr_pa; int total_len; void* va; int addr_type; void* wr_id; int page_size; int access_rights; TYPE_18__ op; int op_type; } ;
struct TYPE_28__ {int idx; scalar_t__ addr; } ;
struct i40iw_pble_alloc {TYPE_14__ level1; } ;
struct TYPE_27__ {int length; int iova; } ;
struct TYPE_25__ {struct i40iw_pble_alloc pble_alloc; } ;
struct i40iw_mr {int npages; TYPE_13__ ibmr; TYPE_11__ iwpbl; } ;
struct i40iw_fast_reg_stag_info {int signaled; int read_fence; int stag_key; int stag_idx; int local_fence; int chunk_size; int first_pm_pbl_index; void* reg_addr_pa; int total_len; void* va; int addr_type; void* wr_id; int page_size; int access_rights; TYPE_18__ op; int op_type; } ;
typedef int info ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_38__ {int rkey; int remote_addr; } ;
struct TYPE_37__ {int access; int key; TYPE_20__* mr; } ;
struct TYPE_35__ {int page_size; } ;
struct TYPE_31__ {int length; int lkey; scalar_t__ addr; } ;
struct TYPE_29__ {int (* iw_mr_fast_register ) (TYPE_21__*,struct i40iw_post_sq_info*,int) ;} ;
struct TYPE_26__ {struct i40iw_sc_dev sc_dev; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;







 int FUNC_0 (int) ;
 int FUNC_1 (char*,int const) ;
 int FUNC_2 (struct i40iw_post_sq_info*,int ,int) ;
 TYPE_23__* FUNC_3 (struct ib_send_wr const*) ;
 TYPE_22__* FUNC_4 (struct ib_send_wr const*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct i40iw_qp_uk*,struct i40iw_post_sq_info*,int ,int) ;
 int FUNC_8 (struct i40iw_qp_uk*,struct i40iw_post_sq_info*,int ,int) ;
 int FUNC_9 (struct i40iw_qp_uk*,struct i40iw_post_sq_info*,int) ;
 int FUNC_10 (struct i40iw_qp_uk*,struct i40iw_post_sq_info*,int) ;
 int FUNC_11 (struct i40iw_qp_uk*,struct i40iw_post_sq_info*,int,int) ;
 int FUNC_12 (struct i40iw_qp_uk*,struct i40iw_post_sq_info*,int) ;
 int FUNC_13 (TYPE_21__*,struct i40iw_post_sq_info*,int) ;
 int FUNC_14 (struct i40iw_qp_uk*) ;
 struct i40iw_mr* FUNC_15 (TYPE_20__*) ;

__attribute__((used)) static int FUNC_16(struct ib_qp *VAR_18,
      const struct ib_send_wr *VAR_19,
      const struct ib_send_wr **VAR_20)
{
 struct i40iw_qp *VAR_21;
 struct i40iw_qp_uk *VAR_22;
 struct i40iw_post_sq_info VAR_23;
 enum i40iw_status_code VAR_24;
 int VAR_25 = 0;
 unsigned long VAR_26;
 bool VAR_27;

 VAR_21 = (struct i40iw_qp *)VAR_18;
 VAR_22 = &VAR_21->sc_qp.qp_uk;

 FUNC_5(&VAR_21->lock, VAR_26);

 if (VAR_21->flush_issued) {
  VAR_25 = -VAR_0;
  goto out;
 }

 while (VAR_19) {
  VAR_27 = 0;
  FUNC_2(&VAR_23, 0, sizeof(VAR_23));
  VAR_23.wr_id = (u64)(VAR_19->wr_id);
  if ((VAR_19->send_flags & VAR_16) || VAR_21->sig_all)
   VAR_23.signaled = 1;
  if (VAR_19->send_flags & VAR_14)
   VAR_23.read_fence = 1;

  switch (VAR_19->opcode) {
  case 129:

  case 128:
   if (VAR_19->opcode == 129) {
    if (VAR_19->send_flags & VAR_17)
     VAR_23.op_type = VAR_12;
    else
     VAR_23.op_type = VAR_10;
   } else {
    if (VAR_19->send_flags & VAR_17)
     VAR_23.op_type = VAR_13;
    else
     VAR_23.op_type = VAR_11;
   }

   if (VAR_19->send_flags & VAR_15) {
    VAR_23.op.inline_send.data = (void *)(unsigned long)VAR_19->sg_list[0].addr;
    VAR_23.op.inline_send.len = VAR_19->sg_list[0].length;
    VAR_24 = VAR_22->ops.iw_inline_send(VAR_22, &VAR_23, VAR_19->ex.invalidate_rkey, 0);
   } else {
    VAR_23.op.send.num_sges = VAR_19->num_sge;
    VAR_23.op.send.sg_list = (struct i40iw_sge *)VAR_19->sg_list;
    VAR_24 = VAR_22->ops.iw_send(VAR_22, &VAR_23, VAR_19->ex.invalidate_rkey, 0);
   }

   if (VAR_24) {
    if (VAR_24 == VAR_4)
     VAR_25 = -VAR_1;
    else
     VAR_25 = -VAR_0;
   }
   break;
  case 131:
   VAR_23.op_type = VAR_9;

   if (VAR_19->send_flags & VAR_15) {
    VAR_23.op.inline_rdma_write.data = (void *)(unsigned long)VAR_19->sg_list[0].addr;
    VAR_23.op.inline_rdma_write.len = VAR_19->sg_list[0].length;
    VAR_23.op.inline_rdma_write.rem_addr.tag_off = FUNC_3(VAR_19)->remote_addr;
    VAR_23.op.inline_rdma_write.rem_addr.stag = FUNC_3(VAR_19)->rkey;
    VAR_24 = VAR_22->ops.iw_inline_rdma_write(VAR_22, &VAR_23, 0);
   } else {
    VAR_23.op.rdma_write.lo_sg_list = (void *)VAR_19->sg_list;
    VAR_23.op.rdma_write.num_lo_sges = VAR_19->num_sge;
    VAR_23.op.rdma_write.rem_addr.tag_off = FUNC_3(VAR_19)->remote_addr;
    VAR_23.op.rdma_write.rem_addr.stag = FUNC_3(VAR_19)->rkey;
    VAR_24 = VAR_22->ops.iw_rdma_write(VAR_22, &VAR_23, 0);
   }

   if (VAR_24) {
    if (VAR_24 == VAR_4)
     VAR_25 = -VAR_1;
    else
     VAR_25 = -VAR_0;
   }
   break;
  case 132:
   VAR_27 = 1;

  case 133:
   if (VAR_19->num_sge > VAR_5) {
    VAR_25 = -VAR_0;
    break;
   }
   VAR_23.op_type = VAR_8;
   VAR_23.op.rdma_read.rem_addr.tag_off = FUNC_3(VAR_19)->remote_addr;
   VAR_23.op.rdma_read.rem_addr.stag = FUNC_3(VAR_19)->rkey;
   VAR_23.op.rdma_read.lo_addr.tag_off = VAR_19->sg_list->addr;
   VAR_23.op.rdma_read.lo_addr.stag = VAR_19->sg_list->lkey;
   VAR_23.op.rdma_read.lo_addr.len = VAR_19->sg_list->length;
   VAR_24 = VAR_22->ops.iw_rdma_read(VAR_22, &VAR_23, VAR_27, 0);
   if (VAR_24) {
    if (VAR_24 == VAR_4)
     VAR_25 = -VAR_1;
    else
     VAR_25 = -VAR_0;
   }
   break;
  case 134:
   VAR_23.op_type = VAR_7;
   VAR_23.op.inv_local_stag.target_stag = VAR_19->ex.invalidate_rkey;
   VAR_24 = VAR_22->ops.iw_stag_local_invalidate(VAR_22, &VAR_23, 1);
   if (VAR_24)
    VAR_25 = -VAR_1;
   break;
  case 130:
  {
   struct i40iw_mr *VAR_28 = FUNC_15(FUNC_4(VAR_19)->mr);
   int VAR_29 = FUNC_4(VAR_19)->access;
   struct i40iw_pble_alloc *VAR_30 = &VAR_28->iwpbl.pble_alloc;
   struct i40iw_sc_dev *VAR_31 = &VAR_21->iwdev->sc_dev;
   struct i40iw_fast_reg_stag_info VAR_32;

   FUNC_2(&VAR_32, 0, sizeof(VAR_32));
   VAR_32.access_rights = VAR_2;
   VAR_32.access_rights |= FUNC_0(VAR_29);
   VAR_32.stag_key = FUNC_4(VAR_19)->key & 0xff;
   VAR_32.stag_idx = FUNC_4(VAR_19)->key >> 8;
   VAR_32.page_size = FUNC_4(VAR_19)->mr->page_size;
   VAR_32.wr_id = VAR_19->wr_id;

   VAR_32.addr_type = VAR_3;
   VAR_32.va = (void *)(uintptr_t)VAR_28->ibmr.iova;
   VAR_32.total_len = VAR_28->ibmr.length;
   VAR_32.reg_addr_pa = *(u64 *)VAR_30->level1.addr;
   VAR_32.first_pm_pbl_index = VAR_30->level1.idx;
   VAR_32.local_fence = VAR_19->send_flags & VAR_14;
   VAR_32.signaled = VAR_19->send_flags & VAR_16;

   if (VAR_28->npages > VAR_6)
    VAR_32.chunk_size = 1;

   VAR_24 = VAR_31->iw_priv_qp_ops->iw_mr_fast_register(&VAR_21->sc_qp, &VAR_32, 1);
   if (VAR_24)
    VAR_25 = -VAR_1;
   break;
  }
  default:
   VAR_25 = -VAR_0;
   FUNC_1(" upost_send bad opcode = 0x%x\n",
         VAR_19->opcode);
   break;
  }

  if (VAR_25)
   break;
  VAR_19 = VAR_19->next;
 }

out:
 if (VAR_25)
  *VAR_20 = VAR_19;
 else
  VAR_22->ops.iw_qp_post_wr(VAR_22);
 FUNC_6(&VAR_21->lock, VAR_26);

 return VAR_25;
}
