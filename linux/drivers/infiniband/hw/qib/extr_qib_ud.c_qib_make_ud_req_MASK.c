
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_14__ {int imm_data; } ;
struct TYPE_16__ {scalar_t__ opcode; int send_flags; TYPE_3__ ex; int num_sge; } ;
struct rvt_swqe {int length; int psn; TYPE_5__ wr; int * sg_list; } ;
struct TYPE_19__ {scalar_t__ qp_type; int qp_num; int device; } ;
struct TYPE_11__ {int total_len; int num_sge; int * sg_list; int sge; } ;
struct rvt_qp {size_t state; scalar_t__ s_last; scalar_t__ s_cur; int s_size; int s_hdrwords; int s_cur_size; int qkey; int s_flags; TYPE_8__ ibqp; int s_pkey_index; TYPE_10__ s_sge; struct rvt_swqe* s_wqe; int s_srate; TYPE_10__* s_cur_sge; int s_lock; int port_num; int s_head; struct qib_qp_priv* priv; } ;
struct rdma_ah_attr {int dummy; } ;
struct qib_qp_priv {TYPE_4__* s_hdr; int s_dma_busy; } ;
struct qib_pportdata {int lmc; int lid; } ;
struct qib_ibport {int* sl_to_vl; TYPE_9__* pmastats; } ;
struct TYPE_17__ {void** deth; int imm_data; } ;
struct TYPE_18__ {TYPE_6__ ud; } ;
struct ib_other_headers {TYPE_7__ u; void** bth; } ;
struct TYPE_20__ {int n_unicast_xmit; int n_multicast_xmit; } ;
struct TYPE_12__ {struct ib_other_headers oth; int grh; } ;
struct TYPE_13__ {struct ib_other_headers oth; TYPE_1__ l; } ;
struct TYPE_15__ {void** lrh; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int* VAR_22 ;
 struct qib_pportdata* FUNC_5 (struct qib_ibport*) ;
 int FUNC_6 (struct qib_ibport*,int ) ;
 scalar_t__ FUNC_7 (struct qib_ibport*,int *,int ,int,int) ;
 int FUNC_8 (struct rvt_qp*,struct rvt_swqe*) ;
 int FUNC_9 (struct rdma_ah_attr*) ;
 int FUNC_10 (struct rdma_ah_attr*) ;
 int FUNC_11 (struct rdma_ah_attr*) ;
 size_t FUNC_12 (struct rdma_ah_attr*) ;
 int FUNC_13 (struct rdma_ah_attr*) ;
 int FUNC_14 (struct rdma_ah_attr*) ;
 struct rdma_ah_attr* FUNC_15 (struct rvt_swqe*) ;
 int FUNC_16 (struct rvt_swqe*) ;
 struct rvt_swqe* FUNC_17 (struct rvt_qp*,scalar_t__) ;
 int FUNC_18 (struct rvt_swqe*) ;
 int FUNC_19 (struct rvt_swqe*) ;
 int FUNC_20 (struct rvt_qp*,struct rvt_swqe*,int ) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int ) ;
 struct qib_ibport* FUNC_24 (int ,int ) ;
 scalar_t__ FUNC_25 (int) ;

int FUNC_26(struct rvt_qp *VAR_23, unsigned long *VAR_24)
{
 struct qib_qp_priv *VAR_25 = VAR_23->priv;
 struct ib_other_headers *VAR_26;
 struct rdma_ah_attr *VAR_27;
 struct qib_pportdata *VAR_28;
 struct qib_ibport *VAR_29;
 struct rvt_swqe *VAR_30;
 u32 VAR_31;
 u32 VAR_32;
 u32 VAR_33;
 u16 VAR_34;
 u16 VAR_35;
 int VAR_36 = 0;
 int VAR_37;

 if (!(VAR_22[VAR_23->state] & VAR_18)) {
  if (!(VAR_22[VAR_23->state] & VAR_17))
   goto bail;

  if (VAR_23->s_last == FUNC_0(VAR_23->s_head))
   goto bail;

  if (FUNC_1(&VAR_25->s_dma_busy)) {
   VAR_23->s_flags |= VAR_20;
   goto bail;
  }
  VAR_30 = FUNC_17(VAR_23, VAR_23->s_last);
  FUNC_20(VAR_23, VAR_30, VAR_10);
  goto done;
 }


 if (VAR_23->s_cur == FUNC_0(VAR_23->s_head))
  goto bail;

 VAR_30 = FUNC_17(VAR_23, VAR_23->s_cur);
 VAR_37 = VAR_23->s_cur + 1;
 if (VAR_37 >= VAR_23->s_size)
  VAR_37 = 0;


 VAR_29 = FUNC_24(VAR_23->ibqp.device, VAR_23->port_num);
 VAR_28 = FUNC_5(VAR_29);
 VAR_27 = FUNC_15(VAR_30);
 if (FUNC_10(VAR_27) >= FUNC_2(VAR_3)) {
  if (FUNC_10(VAR_27) !=
    FUNC_2(VAR_2))
   FUNC_23(VAR_29->pmastats->n_multicast_xmit);
  else
   FUNC_23(VAR_29->pmastats->n_unicast_xmit);
 } else {
  FUNC_23(VAR_29->pmastats->n_unicast_xmit);
  VAR_35 = FUNC_10(VAR_27) & ~((1 << VAR_28->lmc) - 1);
  if (FUNC_25(VAR_35 == VAR_28->lid)) {
   unsigned long VAR_38 = *VAR_24;







   if (FUNC_1(&VAR_25->s_dma_busy)) {
    VAR_23->s_flags |= VAR_20;
    goto bail;
   }
   VAR_23->s_cur = VAR_37;
   FUNC_22(&VAR_23->s_lock, VAR_38);
   FUNC_8(VAR_23, VAR_30);
   FUNC_21(&VAR_23->s_lock, VAR_38);
   *VAR_24 = VAR_38;
   FUNC_20(VAR_23, VAR_30, VAR_9);
   goto done;
  }
 }

 VAR_23->s_cur = VAR_37;
 VAR_32 = -VAR_30->length & 3;
 VAR_31 = (VAR_30->length + VAR_32) >> 2;


 VAR_23->s_hdrwords = 7;
 VAR_23->s_cur_size = VAR_30->length;
 VAR_23->s_cur_sge = &VAR_23->s_sge;
 VAR_23->s_srate = FUNC_13(VAR_27);
 VAR_23->s_wqe = VAR_30;
 VAR_23->s_sge.sge = VAR_30->sg_list[0];
 VAR_23->s_sge.sg_list = VAR_30->sg_list + 1;
 VAR_23->s_sge.num_sge = VAR_30->wr.num_sge;
 VAR_23->s_sge.total_len = VAR_30->length;

 if (FUNC_9(VAR_27) & VAR_0) {

  VAR_23->s_hdrwords += FUNC_7(VAR_29, &VAR_25->s_hdr->u.l.grh,
            FUNC_14(VAR_27),
            VAR_23->s_hdrwords, VAR_31);
  VAR_34 = VAR_14;
  VAR_26 = &VAR_25->s_hdr->u.l.oth;




 } else {

  VAR_34 = VAR_13;
  VAR_26 = &VAR_25->s_hdr->u.oth;
 }
 if (VAR_30->wr.opcode == VAR_11) {
  VAR_23->s_hdrwords++;
  VAR_26->u.ud.imm_data = VAR_30->wr.ex.imm_data;
  VAR_33 = VAR_5 << 24;
 } else
  VAR_33 = VAR_4 << 24;
 VAR_34 |= FUNC_12(VAR_27) << 4;
 if (VAR_23->ibqp.qp_type == VAR_7)
  VAR_34 |= 0xF000;
 else
  VAR_34 |= VAR_29->sl_to_vl[FUNC_12(VAR_27)] << 12;
 VAR_25->s_hdr->lrh[0] = FUNC_3(VAR_34);
 VAR_25->s_hdr->lrh[1] =
   FUNC_3(FUNC_10(VAR_27));
 VAR_25->s_hdr->lrh[2] =
   FUNC_3(VAR_23->s_hdrwords + VAR_31 + VAR_21);
 VAR_35 = VAR_28->lid;
 if (VAR_35) {
  VAR_35 |= FUNC_11(VAR_27) &
   ((1 << VAR_28->lmc) - 1);
  VAR_25->s_hdr->lrh[3] = FUNC_3(VAR_35);
 } else
  VAR_25->s_hdr->lrh[3] = VAR_2;
 if (VAR_30->wr.send_flags & VAR_8)
  VAR_33 |= VAR_1;
 VAR_33 |= VAR_32 << 20;
 VAR_33 |= VAR_23->ibqp.qp_type == VAR_7 ? VAR_12 :
  FUNC_6(VAR_29, VAR_23->ibqp.qp_type == VAR_6 ?
        FUNC_16(VAR_30) : VAR_23->s_pkey_index);
 VAR_26->bth[0] = FUNC_4(VAR_33);



 VAR_26->bth[1] = FUNC_10(VAR_27) >=
   FUNC_2(VAR_3) &&
  FUNC_10(VAR_27) != FUNC_2(VAR_2) ?
  FUNC_4(VAR_15) :
  FUNC_4(FUNC_19(VAR_30));
 VAR_26->bth[2] = FUNC_4(VAR_30->psn & VAR_16);




 VAR_26->u.ud.deth[0] =
  FUNC_4((int)FUNC_18(VAR_30) < 0 ? VAR_23->qkey :
       FUNC_18(VAR_30));
 VAR_26->u.ud.deth[1] = FUNC_4(VAR_23->ibqp.qp_num);

done:
 return 1;
bail:
 VAR_23->s_flags &= ~VAR_19;
 return VAR_36;
}
