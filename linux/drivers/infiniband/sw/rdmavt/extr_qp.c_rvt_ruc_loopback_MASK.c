
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wc ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_12__ {int imm_data; int invalidate_rkey; } ;
struct TYPE_15__ {int num_sge; int opcode; int send_flags; TYPE_2__ ex; } ;
struct TYPE_14__ {int swap; scalar_t__ compare_add; int rkey; int remote_addr; } ;
struct TYPE_13__ {int rkey; int remote_addr; } ;
struct rvt_swqe {int length; TYPE_5__ wr; TYPE_4__ atomic_wr; struct rvt_sge* sg_list; TYPE_3__ rdma_wr; } ;
struct rvt_sge {scalar_t__ vaddr; int mr; } ;
struct TYPE_17__ {scalar_t__ qp_type; int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct TYPE_19__ {int num_sge; int total_len; struct rvt_sge sge; struct rvt_sge* sg_list; } ;
struct TYPE_18__ {int num_sge; struct rvt_sge sge; struct rvt_sge* sg_list; } ;
struct rvt_qp {int port_num; int s_flags; size_t state; scalar_t__ s_last; scalar_t__ s_cur; scalar_t__ s_size; int s_len; int r_len; int qp_access_flags; scalar_t__ s_rnr_retry; scalar_t__ s_rnr_retry_cnt; int r_min_rnr_timer; int s_lock; TYPE_7__ ibqp; int r_lock; int local_ops_pending; int remote_ah_attr; int remote_qpn; int r_wr_id; int r_aflags; TYPE_9__ r_sge; TYPE_8__ s_sge; int s_head; } ;
struct rvt_ibport {int n_rnr_naks; int n_loop_pkts; } ;
struct rvt_dev_info {struct rvt_ibport** ports; } ;
struct TYPE_11__ {int imm_data; int invalidate_rkey; } ;
struct ib_wc {int byte_len; int slid; int port_num; void* status; int sl; int src_qp; TYPE_7__* qp; int wr_id; int opcode; TYPE_1__ ex; void* wc_flags; } ;
struct TYPE_16__ {TYPE_7__* qp; } ;
struct ib_event {int event; TYPE_6__ element; int device; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;
typedef int atomic64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*,scalar_t__,int ) ;
 int* VAR_29 ;
 struct rvt_dev_info* FUNC_5 (int ) ;
 int FUNC_6 (struct rvt_ibport*,struct rvt_qp*) ;
 int FUNC_7 (struct ib_wc*,int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct rvt_qp*,int) ;
 int FUNC_13 (struct rvt_qp*,TYPE_9__*,scalar_t__,scalar_t__,int,int) ;
 int FUNC_14 (struct rvt_qp*,int) ;
 int FUNC_15 (struct rvt_qp*,int) ;
 scalar_t__ FUNC_16 (struct rvt_sge*,int) ;
 struct rvt_swqe* FUNC_17 (struct rvt_qp*,scalar_t__) ;
 int FUNC_18 (struct rvt_qp*,int ) ;
 int FUNC_19 (struct rvt_qp*) ;
 struct rvt_qp* FUNC_20 (struct rvt_dev_info*,struct rvt_ibport*,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (TYPE_9__*) ;
 int FUNC_23 (struct rvt_qp*,void*) ;
 int FUNC_24 (struct rvt_qp*,struct ib_wc*,int) ;
 int FUNC_25 (struct rvt_qp*,struct rvt_sge*,int,int ,int ,int) ;
 int FUNC_26 (struct rvt_qp*,struct rvt_swqe*,int) ;
 int FUNC_27 (TYPE_8__*,scalar_t__,int) ;
 int FUNC_28 (int *,unsigned long) ;
 int FUNC_29 (int *,unsigned long) ;
 int FUNC_30 (struct ib_event*,int ) ;
 int FUNC_31 (int ,int *) ;
 int FUNC_32 (int) ;

void FUNC_33(struct rvt_qp *VAR_30)
{
 struct rvt_ibport *VAR_31 = ((void*)0);
 struct rvt_dev_info *VAR_32 = FUNC_5(VAR_30->ibqp.device);
 struct rvt_qp *VAR_33;
 struct rvt_swqe *VAR_34;
 struct rvt_sge *VAR_35;
 unsigned long VAR_36;
 struct ib_wc VAR_37;
 u64 VAR_38;
 atomic64_t *VAR_39;
 enum ib_wc_status VAR_40;
 bool VAR_41;
 int VAR_42;
 bool VAR_43 = 0;
 int VAR_44 = 0;

 FUNC_8();
 VAR_31 = VAR_32->ports[VAR_30->port_num - 1];






 VAR_33 = FUNC_20(FUNC_5(VAR_30->ibqp.device), VAR_31,
       VAR_30->remote_qpn);

 FUNC_28(&VAR_30->s_lock, VAR_36);


 if ((VAR_30->s_flags & (VAR_27 | VAR_26)) ||
     !(VAR_29[VAR_30->state] & VAR_22))
  goto unlock;

 VAR_30->s_flags |= VAR_27;

again:
 if (VAR_30->s_last == FUNC_0(VAR_30->s_head))
  goto clr_busy;
 VAR_34 = FUNC_17(VAR_30, VAR_30->s_last);


 if (!(VAR_29[VAR_30->state] & VAR_21)) {
  if (!(VAR_29[VAR_30->state] & VAR_20))
   goto clr_busy;

  VAR_40 = VAR_19;
  goto flush_send;
 }






 if (VAR_30->s_last == VAR_30->s_cur) {
  if (++VAR_30->s_cur >= VAR_30->s_size)
   VAR_30->s_cur = 0;
 }
 FUNC_29(&VAR_30->s_lock, VAR_36);

 if (!VAR_33) {
  VAR_40 = FUNC_6(VAR_31, VAR_30);
  goto serr_no_r_lock;
 }
 FUNC_28(&VAR_33->r_lock, VAR_36);
 if (!(VAR_29[VAR_33->state] & VAR_23) ||
     VAR_33->ibqp.qp_type != VAR_30->ibqp.qp_type) {
  VAR_40 = FUNC_6(VAR_31, VAR_30);
  goto serr;
 }

 FUNC_7(&VAR_37, 0, sizeof(VAR_37));
 VAR_40 = VAR_16;

 VAR_41 = 1;
 VAR_30->s_sge.sge = VAR_34->sg_list[0];
 VAR_30->s_sge.sg_list = VAR_34->sg_list + 1;
 VAR_30->s_sge.num_sge = VAR_34->wr.num_sge;
 VAR_30->s_len = VAR_34->length;
 switch (VAR_34->wr.opcode) {
 case 131:
  goto send_comp;

 case 135:
  if (!(VAR_34->wr.send_flags & VAR_25)) {
   if (FUNC_18(VAR_30,
      VAR_34->wr.ex.invalidate_rkey))
    VAR_40 = VAR_8;
   VAR_44 = 1;
  }
  goto send_comp;

 case 128:
 case 129:
 case 130:
  VAR_42 = FUNC_15(VAR_33, 0);
  if (VAR_42 < 0)
   goto op_err;
  if (!VAR_42)
   goto rnr_nak;
  if (VAR_34->length > VAR_33->r_len)
   goto inv_err;
  switch (VAR_34->wr.opcode) {
  case 128:
   if (!FUNC_18(VAR_33,
       VAR_34->wr.ex.invalidate_rkey)) {
    VAR_37.wc_flags = VAR_18;
    VAR_37.ex.invalidate_rkey =
     VAR_34->wr.ex.invalidate_rkey;
   }
   break;
  case 129:
   VAR_37.wc_flags = VAR_17;
   VAR_37.ex.imm_data = VAR_34->wr.ex.imm_data;
   break;
  default:
   break;
  }
  break;

 case 132:
  if (FUNC_32(!(VAR_33->qp_access_flags & VAR_2)))
   goto inv_err;
  VAR_37.wc_flags = VAR_17;
  VAR_37.ex.imm_data = VAR_34->wr.ex.imm_data;
  VAR_42 = FUNC_15(VAR_33, 1);
  if (VAR_42 < 0)
   goto op_err;
  if (!VAR_42)
   goto rnr_nak;

  goto do_write;
 case 133:
  VAR_43 = FUNC_19(VAR_33);
  if (FUNC_32(!(VAR_33->qp_access_flags & VAR_2)))
   goto inv_err;
do_write:
  if (VAR_34->length == 0)
   break;
  if (FUNC_32(!FUNC_25(VAR_33, &VAR_33->r_sge.sge, VAR_34->length,
       VAR_34->rdma_wr.remote_addr,
       VAR_34->rdma_wr.rkey,
       VAR_2)))
   goto acc_err;
  VAR_33->r_sge.sg_list = ((void*)0);
  VAR_33->r_sge.num_sge = 1;
  VAR_33->r_sge.total_len = VAR_34->length;
  break;

 case 134:
  if (FUNC_32(!(VAR_33->qp_access_flags & VAR_1)))
   goto inv_err;
  if (FUNC_32(!FUNC_25(VAR_33, &VAR_30->s_sge.sge, VAR_34->length,
       VAR_34->rdma_wr.remote_addr,
       VAR_34->rdma_wr.rkey,
       VAR_1)))
   goto acc_err;
  VAR_41 = 0;
  VAR_30->s_sge.sg_list = ((void*)0);
  VAR_30->s_sge.num_sge = 1;
  VAR_33->r_sge.sge = VAR_34->sg_list[0];
  VAR_33->r_sge.sg_list = VAR_34->sg_list + 1;
  VAR_33->r_sge.num_sge = VAR_34->wr.num_sge;
  VAR_33->r_sge.total_len = VAR_34->length;
  break;

 case 137:
 case 136:
  if (FUNC_32(!(VAR_33->qp_access_flags & VAR_0)))
   goto inv_err;
  if (FUNC_32(!FUNC_25(VAR_33, &VAR_33->r_sge.sge, sizeof(u64),
       VAR_34->atomic_wr.remote_addr,
       VAR_34->atomic_wr.rkey,
       VAR_0)))
   goto acc_err;

  VAR_39 = (atomic64_t *)VAR_33->r_sge.sge.vaddr;
  VAR_38 = VAR_34->atomic_wr.compare_add;
  *(u64 *)VAR_30->s_sge.sge.vaddr =
   (VAR_34->wr.opcode == 136) ?
   (u64)FUNC_2(VAR_38, VAR_39) - VAR_38 :
   (u64)FUNC_4((u64 *)VAR_33->r_sge.sge.vaddr,
          VAR_38, VAR_34->atomic_wr.swap);
  FUNC_21(VAR_33->r_sge.sge.mr);
  VAR_33->r_sge.num_sge = 0;
  goto send_comp;

 default:
  VAR_40 = VAR_9;
  goto serr;
 }

 VAR_35 = &VAR_30->s_sge.sge;
 while (VAR_30->s_len) {
  u32 VAR_45 = FUNC_16(VAR_35, VAR_30->s_len);

  FUNC_1(VAR_45 == 0);
  FUNC_13(VAR_33, &VAR_33->r_sge, VAR_35->vaddr,
        VAR_45, VAR_41, VAR_43);
  FUNC_27(&VAR_30->s_sge, VAR_45, !VAR_41);
  VAR_30->s_len -= VAR_45;
 }
 if (VAR_41)
  FUNC_22(&VAR_33->r_sge);

 if (!FUNC_31(VAR_24, &VAR_33->r_aflags))
  goto send_comp;

 if (VAR_34->wr.opcode == 132)
  VAR_37.opcode = VAR_11;
 else
  VAR_37.opcode = VAR_10;
 VAR_37.wr_id = VAR_33->r_wr_id;
 VAR_37.status = VAR_16;
 VAR_37.byte_len = VAR_34->length;
 VAR_37.qp = &VAR_33->ibqp;
 VAR_37.src_qp = VAR_33->remote_qpn;
 VAR_37.slid = FUNC_10(&VAR_33->remote_ah_attr) & VAR_28;
 VAR_37.sl = FUNC_11(&VAR_33->remote_ah_attr);
 VAR_37.port_num = 1;

 FUNC_24(VAR_33, &VAR_37, VAR_34->wr.send_flags & VAR_7);

send_comp:
 FUNC_29(&VAR_33->r_lock, VAR_36);
 FUNC_28(&VAR_30->s_lock, VAR_36);
 VAR_31->n_loop_pkts++;
flush_send:
 VAR_30->s_rnr_retry = VAR_30->s_rnr_retry_cnt;
 FUNC_26(VAR_30, VAR_34, VAR_40);
 if (VAR_44) {
  FUNC_3(&VAR_30->local_ops_pending);
  VAR_44 = 0;
 }
 goto again;

rnr_nak:

 if (VAR_33->ibqp.qp_type == VAR_6)
  goto send_comp;
 VAR_31->n_rnr_naks++;




 if (VAR_30->s_rnr_retry == 0) {
  VAR_40 = VAR_15;
  goto serr;
 }
 if (VAR_30->s_rnr_retry_cnt < 7)
  VAR_30->s_rnr_retry--;
 FUNC_29(&VAR_33->r_lock, VAR_36);
 FUNC_28(&VAR_30->s_lock, VAR_36);
 if (!(VAR_29[VAR_30->state] & VAR_23))
  goto clr_busy;
 FUNC_12(VAR_30, VAR_33->r_min_rnr_timer <<
    VAR_3);
 goto clr_busy;

op_err:
 VAR_40 = VAR_14;
 VAR_37.status = VAR_9;
 goto err;

inv_err:
 VAR_40 =
  VAR_30->ibqp.qp_type == VAR_5 ?
   VAR_13 :
   VAR_16;
 VAR_37.status = VAR_9;
 goto err;

acc_err:
 VAR_40 = VAR_12;
 VAR_37.status = VAR_8;
err:

 FUNC_23(VAR_33, VAR_37.status);

serr:
 FUNC_29(&VAR_33->r_lock, VAR_36);
serr_no_r_lock:
 FUNC_28(&VAR_30->s_lock, VAR_36);
 FUNC_26(VAR_30, VAR_34, VAR_40);
 if (VAR_30->ibqp.qp_type == VAR_5) {
  int VAR_46 = FUNC_14(VAR_30, VAR_19);

  VAR_30->s_flags &= ~VAR_27;
  FUNC_29(&VAR_30->s_lock, VAR_36);
  if (VAR_46) {
   struct ib_event VAR_47;

   VAR_47.device = VAR_30->ibqp.device;
   VAR_47.element.qp = &VAR_30->ibqp;
   VAR_47.event = VAR_4;
   VAR_30->ibqp.event_handler(&VAR_47, VAR_30->ibqp.qp_context);
  }
  goto done;
 }
clr_busy:
 VAR_30->s_flags &= ~VAR_27;
unlock:
 FUNC_29(&VAR_30->s_lock, VAR_36);
done:
 FUNC_9();
}
