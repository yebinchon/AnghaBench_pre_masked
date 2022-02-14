
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct rdma_sq_send_wqe_2st {int dummy; } ;
struct rdma_sq_send_wqe_1st {int wqe_size; void* length; void* inv_key_or_imm_data; } ;
struct rdma_sq_rdma_wqe_2nd {int dummy; } ;
struct rdma_sq_rdma_wqe_1st {int wqe_size; void* length; int imm_data; } ;
struct rdma_sq_local_inv_wqe {int wqe_size; int inv_l_key; int req_type; } ;
struct rdma_sq_fmr_wqe_1st {int wqe_size; } ;
struct rdma_sq_common_wqe {int prev_wqe_size; int req_type; scalar_t__ flags; } ;
struct rdma_sq_atomic_wqe_3rd {int cmp_data; int swap_data; } ;
struct rdma_sq_atomic_wqe_2nd {void* r_key; int remote_va; } ;
struct rdma_sq_atomic_wqe_1st {int wqe_size; } ;
struct TYPE_9__ {int value; } ;
struct TYPE_10__ {TYPE_3__ data; } ;
struct TYPE_11__ {size_t prod; int pbl; TYPE_4__ db_data; } ;
struct qedr_qp {int prev_wqe_size; TYPE_5__ sq; TYPE_2__* wqe_wr_id; scalar_t__ signaled; } ;
struct qedr_dev {int ibdev; } ;
struct TYPE_7__ {int invalidate_rkey; int imm_data; } ;
struct ib_send_wr {int send_flags; int opcode; TYPE_1__ ex; } ;
struct ib_qp {int device; } ;
struct TYPE_12__ {int compare_add; int swap; int rkey; int remote_addr; } ;
struct TYPE_8__ {int signaled; int wqe_size; void* bytes_len; int opcode; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qedr_dev*,int ,char*) ;
 int FUNC_2 (struct qedr_dev*,char*,...) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (scalar_t__,int ,int) ;
 TYPE_6__* FUNC_4 (struct ib_send_wr const*) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 struct qedr_dev* FUNC_7 (int ) ;
 struct qedr_qp* FUNC_8 (struct ib_qp*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int ) ;
 void* FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,struct rdma_sq_common_wqe*) ;
 int FUNC_13 (struct qedr_qp*,struct ib_send_wr const*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct qedr_qp*,struct rdma_sq_fmr_wqe_1st*,int ) ;
 int FUNC_16 (struct qedr_dev*,struct qedr_qp*,struct rdma_sq_rdma_wqe_1st*,struct rdma_sq_rdma_wqe_2nd*,struct ib_send_wr const*,struct ib_send_wr const**) ;
 int FUNC_17 (struct qedr_dev*,struct qedr_qp*,struct rdma_sq_send_wqe_1st*,struct rdma_sq_send_wqe_2st*,struct ib_send_wr const*,struct ib_send_wr const**) ;
 int FUNC_18 (struct qedr_qp*,int *,struct ib_send_wr const*) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (struct ib_send_wr const*) ;
 int FUNC_21 (int ) ;

__attribute__((used)) static int FUNC_22(struct ib_qp *VAR_20, const struct ib_send_wr *VAR_21,
       const struct ib_send_wr **VAR_22)
{
 struct qedr_dev *VAR_23 = FUNC_7(VAR_20->device);
 struct qedr_qp *VAR_24 = FUNC_8(VAR_20);
 struct rdma_sq_atomic_wqe_1st *VAR_25;
 struct rdma_sq_atomic_wqe_2nd *VAR_26;
 struct rdma_sq_atomic_wqe_3rd *VAR_27;
 struct rdma_sq_send_wqe_2st *VAR_28;
 struct rdma_sq_local_inv_wqe *VAR_29;
 struct rdma_sq_rdma_wqe_2nd *VAR_30;
 struct rdma_sq_send_wqe_1st *VAR_31;
 struct rdma_sq_rdma_wqe_1st *VAR_32;
 struct rdma_sq_fmr_wqe_1st *VAR_33;
 struct rdma_sq_common_wqe *VAR_34;
 u32 VAR_35;
 int VAR_36 = 0;
 bool VAR_37;

 if (!FUNC_13(VAR_24, VAR_21)) {
  *VAR_22 = VAR_21;
  return -VAR_1;
 }

 VAR_34 = FUNC_11(&VAR_24->sq.pbl);
 VAR_24->wqe_wr_id[VAR_24->sq.prod].signaled =
  !!(VAR_21->send_flags & VAR_3) || VAR_24->signaled;

 VAR_34->flags = 0;
 FUNC_3(VAR_34->flags, VAR_19,
     !!(VAR_21->send_flags & VAR_4));
 VAR_37 = (!!(VAR_21->send_flags & VAR_3)) || VAR_24->signaled;
 FUNC_3(VAR_34->flags, VAR_17, VAR_37);
 FUNC_3(VAR_34->flags, VAR_18,
     !!(VAR_21->send_flags & VAR_2));
 VAR_34->prev_wqe_size = VAR_24->prev_wqe_size;

 VAR_24->wqe_wr_id[VAR_24->sq.prod].opcode = FUNC_14(VAR_21->opcode);

 switch (VAR_21->opcode) {
 case 129:
  if (FUNC_21(FUNC_19(&VAR_23->ibdev, 1))) {
   VAR_36 = -VAR_0;
   *VAR_22 = VAR_21;
   break;
  }
  VAR_34->req_type = VAR_15;
  VAR_31 = (struct rdma_sq_send_wqe_1st *)VAR_34;
  VAR_31->wqe_size = 2;
  VAR_28 = FUNC_11(&VAR_24->sq.pbl);

  VAR_31->inv_key_or_imm_data = FUNC_6(FUNC_5(VAR_21->ex.imm_data));
  VAR_35 = FUNC_17(VAR_23, VAR_24, VAR_31, VAR_28,
         VAR_21, VAR_22);
  VAR_31->length = FUNC_6(VAR_35);
  VAR_24->wqe_wr_id[VAR_24->sq.prod].wqe_size = VAR_31->wqe_size;
  VAR_24->prev_wqe_size = VAR_31->wqe_size;
  VAR_24->wqe_wr_id[VAR_24->sq.prod].bytes_len = VAR_31->length;
  break;
 case 130:
  VAR_34->req_type = VAR_14;
  VAR_31 = (struct rdma_sq_send_wqe_1st *)VAR_34;

  VAR_31->wqe_size = 2;
  VAR_28 = FUNC_11(&VAR_24->sq.pbl);
  VAR_35 = FUNC_17(VAR_23, VAR_24, VAR_31, VAR_28,
         VAR_21, VAR_22);
  VAR_31->length = FUNC_6(VAR_35);
  VAR_24->wqe_wr_id[VAR_24->sq.prod].wqe_size = VAR_31->wqe_size;
  VAR_24->prev_wqe_size = VAR_31->wqe_size;
  VAR_24->wqe_wr_id[VAR_24->sq.prod].bytes_len = VAR_31->length;
  break;
 case 128:
  VAR_34->req_type = VAR_16;
  VAR_31 = (struct rdma_sq_send_wqe_1st *)VAR_34;
  VAR_28 = FUNC_11(&VAR_24->sq.pbl);
  VAR_31->wqe_size = 2;
  VAR_31->inv_key_or_imm_data = FUNC_6(VAR_21->ex.invalidate_rkey);
  VAR_35 = FUNC_17(VAR_23, VAR_24, VAR_31, VAR_28,
         VAR_21, VAR_22);
  VAR_31->length = FUNC_6(VAR_35);
  VAR_24->wqe_wr_id[VAR_24->sq.prod].wqe_size = VAR_31->wqe_size;
  VAR_24->prev_wqe_size = VAR_31->wqe_size;
  VAR_24->wqe_wr_id[VAR_24->sq.prod].bytes_len = VAR_31->length;
  break;

 case 132:
  if (FUNC_21(FUNC_19(&VAR_23->ibdev, 1))) {
   VAR_36 = -VAR_0;
   *VAR_22 = VAR_21;
   break;
  }
  VAR_34->req_type = VAR_13;
  VAR_32 = (struct rdma_sq_rdma_wqe_1st *)VAR_34;

  VAR_32->wqe_size = 2;
  VAR_32->imm_data = FUNC_9(FUNC_6(VAR_21->ex.imm_data));
  VAR_30 = FUNC_11(&VAR_24->sq.pbl);
  VAR_35 = FUNC_16(VAR_23, VAR_24, VAR_32, VAR_30,
         VAR_21, VAR_22);
  VAR_32->length = FUNC_6(VAR_35);
  VAR_24->wqe_wr_id[VAR_24->sq.prod].wqe_size = VAR_32->wqe_size;
  VAR_24->prev_wqe_size = VAR_32->wqe_size;
  VAR_24->wqe_wr_id[VAR_24->sq.prod].bytes_len = VAR_32->length;
  break;
 case 133:
  VAR_34->req_type = VAR_12;
  VAR_32 = (struct rdma_sq_rdma_wqe_1st *)VAR_34;

  VAR_32->wqe_size = 2;
  VAR_30 = FUNC_11(&VAR_24->sq.pbl);
  VAR_35 = FUNC_16(VAR_23, VAR_24, VAR_32, VAR_30,
         VAR_21, VAR_22);
  VAR_32->length = FUNC_6(VAR_35);
  VAR_24->wqe_wr_id[VAR_24->sq.prod].wqe_size = VAR_32->wqe_size;
  VAR_24->prev_wqe_size = VAR_32->wqe_size;
  VAR_24->wqe_wr_id[VAR_24->sq.prod].bytes_len = VAR_32->length;
  break;
 case 134:
  FUNC_3(VAR_34->flags, VAR_6, 1);


 case 135:
  VAR_34->req_type = VAR_11;
  VAR_32 = (struct rdma_sq_rdma_wqe_1st *)VAR_34;

  VAR_32->wqe_size = 2;
  VAR_30 = FUNC_11(&VAR_24->sq.pbl);
  VAR_35 = FUNC_16(VAR_23, VAR_24, VAR_32, VAR_30,
         VAR_21, VAR_22);
  VAR_32->length = FUNC_6(VAR_35);
  VAR_24->wqe_wr_id[VAR_24->sq.prod].wqe_size = VAR_32->wqe_size;
  VAR_24->prev_wqe_size = VAR_32->wqe_size;
  VAR_24->wqe_wr_id[VAR_24->sq.prod].bytes_len = VAR_32->length;
  break;

 case 138:
 case 137:
  VAR_25 = (struct rdma_sq_atomic_wqe_1st *)VAR_34;
  VAR_25->wqe_size = 4;

  VAR_26 = FUNC_11(&VAR_24->sq.pbl);
  FUNC_0(VAR_26->remote_va, FUNC_4(VAR_21)->remote_addr);
  VAR_26->r_key = FUNC_6(FUNC_4(VAR_21)->rkey);

  VAR_27 = FUNC_11(&VAR_24->sq.pbl);

  if (VAR_21->opcode == 137) {
   VAR_34->req_type = VAR_7;
   FUNC_0(VAR_27->swap_data,
           FUNC_4(VAR_21)->compare_add);
  } else {
   VAR_34->req_type = VAR_8;
   FUNC_0(VAR_27->swap_data,
           FUNC_4(VAR_21)->swap);
   FUNC_0(VAR_27->cmp_data,
           FUNC_4(VAR_21)->compare_add);
  }

  FUNC_18(VAR_24, ((void*)0), VAR_21);

  VAR_24->wqe_wr_id[VAR_24->sq.prod].wqe_size = VAR_25->wqe_size;
  VAR_24->prev_wqe_size = VAR_25->wqe_size;
  break;

 case 136:
  VAR_29 = (struct rdma_sq_local_inv_wqe *)VAR_34;
  VAR_29->wqe_size = 1;

  VAR_29->req_type = VAR_10;
  VAR_29->inv_l_key = VAR_21->ex.invalidate_rkey;
  VAR_24->wqe_wr_id[VAR_24->sq.prod].wqe_size = VAR_29->wqe_size;
  VAR_24->prev_wqe_size = VAR_29->wqe_size;
  break;
 case 131:
  FUNC_1(VAR_23, VAR_5, "REG_MR\n");
  VAR_34->req_type = VAR_9;
  VAR_33 = (struct rdma_sq_fmr_wqe_1st *)VAR_34;
  VAR_33->wqe_size = 2;

  VAR_36 = FUNC_15(VAR_24, VAR_33, FUNC_20(VAR_21));
  if (VAR_36) {
   FUNC_2(VAR_23, "IB_REG_MR failed rc=%d\n", VAR_36);
   *VAR_22 = VAR_21;
   break;
  }

  VAR_24->wqe_wr_id[VAR_24->sq.prod].wqe_size = VAR_33->wqe_size;
  VAR_24->prev_wqe_size = VAR_33->wqe_size;
  break;
 default:
  FUNC_2(VAR_23, "invalid opcode 0x%x!\n", VAR_21->opcode);
  VAR_36 = -VAR_0;
  *VAR_22 = VAR_21;
  break;
 }

 if (*VAR_22) {
  u16 VAR_38;




  VAR_38 = FUNC_10(VAR_24->sq.db_data.data.value);
  FUNC_12(&VAR_24->sq.pbl, VAR_38, VAR_34);


  VAR_24->prev_wqe_size = VAR_34->prev_wqe_size;
  VAR_36 = -VAR_0;
  FUNC_2(VAR_23, "POST SEND FAILED\n");
 }

 return VAR_36;
}
